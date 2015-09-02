//
//  NeiooSpace.h
//  Neioo
//
//  Created by hsujahhu on 2015/7/2.
//  Copyright (c) 2015年 Herxun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NeiooSpace : NSObject
@property (readonly, nonatomic) NSString *spaceId;
@property (readonly, nonatomic) NSString *created_at;
@property (readonly, nonatomic) NSString *updated_at;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *space_description;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSArray *beacons;
@property (readonly, nonatomic) NSArray *criterias;
@property (readonly, nonatomic) NSArray *campaigns;

- (id)initWithSpaceInfo:(NSDictionary *)spaceInfo actions:(NSArray *)actions beacons:(NSArray *)beacons criterias:(NSArray *)criterias campaign:(NSArray *)campaigns beaconSerialNums:(NSSet *)beaconSNs;
- (BOOL)isBeaconBelongToSpace:(NSString *)beaconSN;
@end
