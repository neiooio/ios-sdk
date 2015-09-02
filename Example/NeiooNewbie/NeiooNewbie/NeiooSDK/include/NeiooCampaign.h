//
//  NeiooCampaign.h
//  Neioo
//
//  Created by hsujahhu on 2015/7/2.
//  Copyright (c) 2015年 Herxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NeiooAction.h"
#import "NeiooBeacon.h"
#import "NeiooCriteria.h"

@interface NeiooCampaign : NSObject
@property (readonly, nonatomic) NSString *start_time;
@property (readonly, nonatomic) NSString *end_time;
@property (readonly, nonatomic) NSArray *beacons;
@property (readonly, nonatomic) NSString *proximity;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSArray *criterias;
@property (readonly, nonatomic) NSString *criteria_operator;
@property (readonly, nonatomic) NSString *custom_field;
@property (readonly, nonatomic) NSString *campaign_id;
@property (readonly, nonatomic) NSString *repeat_type;
@property (readonly, nonatomic) NSString *repeat_interval;

- (id)initWithCampaignInfo:(NSDictionary *)campaignInfo actions:(NSDictionary *)actions beacons:(NSDictionary *)beacons criterias:(NSDictionary *)criterias;
@end
