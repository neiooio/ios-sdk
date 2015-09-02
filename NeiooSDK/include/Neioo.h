//
//  Neioo.h
//  Neioo
//
//  Created by Jefferson Hu on 6/3/15.
//  Copyright (c) 2015 Herxun. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef _NEIOO_
#define _NEIOO_

#import "NeiooAction.h"
#import "NeiooBeacon.h"
#import "NeiooCriteria.h"
#import "NeiooCampaign.h"
#import "NeiooSpace.h"

#endif

@class NeiooCampaign;
@class NeiooBeacon;
@class NeiooAction;
@class NeiooSpace;
@class Neioo;

/**---------------------------------------------------------------------------------------
 * @name Location Authorization Type
 *  ---------------------------------------------------------------------------------------
 */

typedef enum {
    NeiooLocationAuthorizationWhenInUse,
    NeiooLocationAuthorizationAlways
} NeiooLocationAuthorizationType;

/**
 *  The NeiooDelegate protocol defines the methods used to receive triggerd campaign and ranged new space from Neioo.
 */
@protocol NeiooDelegate <NSObject>

@optional

/**
 *  Tells the delegate that neioo triggerd by a campaign.
 *
 *  @param campaign      The NeiooCampaign object including triggered actions and details
 *  @param beacon        The beacon instance just be triggered.
 */
- (void)campaignTriggered:(NeiooCampaign *)campaign beacon:(NeiooBeacon *)beacon;

/**
 *  Tells the delegate that neioo triggerd by a campaign and in shake range.
 *
 *  @param campaign      The NeiooCampaign object including triggered actions and details
 */
- (void)inShakeRangeWithCampaign:(NeiooCampaign *)campaign;

/**
 *  Tells the delegate that neioo triggerd by a campaign and out of shake range.
 *
 *  @param campaign      The NeiooCampaign object including triggered actions and details
 */
- (void)outOfShakeRangeWithCampaign:(NeiooCampaign *)campaign;

/**
 *  Tells the delegate that neioo enter a space
 *
 *  @param space        The NeiooSpace object including campaigns, beacons, actions, criterias and details
 */
- (void)neioo:(Neioo *)neioo didEnterSpace:(NeiooSpace *)space;

/**
 *  Tells the delegate that neioo leave a space
 *
 *  @param space        The NeiooSpace object including campaigns, beacons, actions, criterias and details
 */
- (void)neioo:(Neioo *)neioo didLeaveSpace:(NeiooSpace *)space;

@end


/**
 *  The Neioo class defines the interface for configuring the delivery of beacon-related events to your application. You use an instance of this class to get Neioo objects, and set up the criteria data that determine which campaign should be triggered.
 *
 *  You should always use the shared instance. Creating own instance is not allowed.
 */

@interface Neioo : NSObject

/**---------------------------------------------------------------------------------------
 * @name Initialize
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Set up Neioo cloud app key, Neioo delegate and location authorization type. Users are not allowed to use neioo shared instance before finishing this step.
 */
+ (void)setUpAppKey:(NSString *)appKey delegate:(id<NeiooDelegate>)delegate withLocationAuthorization:(NeiooLocationAuthorizationType)type;

/**---------------------------------------------------------------------------------------
 * @name Getting the Instance
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Returns the shared instance of the Neioo class. Users are not allowed to create own instance.
 */
+ (Neioo *)shared;

/**---------------------------------------------------------------------------------------
 * @name Switch for Monitoring beacons
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Start monitoring beacons
 */
- (void)enable;

/**
 *  Stop monitoring beacons
 */
- (void)disable;

/**---------------------------------------------------------------------------------------
 * @name Getting the Spaces
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Returns the spaces of the NeiooSpace class which user is in the range.
 */
- (NSArray *)getSpaces;


/**---------------------------------------------------------------------------------------
 * @name Getting the Shake Campaigns
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  Returns the campaings of the NeiooCampaign class .
 */
- (NSArray *)getShakeCampaigns;

/**---------------------------------------------------------------------------------------
 * @name Setting the Critieria
 *  ---------------------------------------------------------------------------------------
 */

/**
 *  set up the criteria data for key that determine which campaign should be triggered.
 */
- (void)setCriteriaData:(NSString *)value forKey:(NSString *)key;

/**
 *  remove the criteria data for key.
 */
- (void)removeCriteriaDataForKey:(NSString *)key;

/**
 *  clear all the criteria data.
 */
- (void)clearCriteriaData;

/*
- (NSArray *)getBeacons;
- (NSArray *)getActions;
- (NSArray *)getCriterias;
- (NeiooAction *)getActionWithId:(NSString *)actionId;
- (NeiooCampaign *)getCampaignWithSpaceId:(NSString *)spaceId;
 */
@end
