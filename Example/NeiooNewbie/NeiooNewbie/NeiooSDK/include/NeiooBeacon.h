//
//  NeiooBeacon.h
//  NeiooSDK
//
//  Created by hsujahhu on 2015/7/6.
//  Copyright (c) 2015年 Herxun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NeiooBeacon : NSObject
@property (readonly,nonatomic) NSString *neiooBeaconId;
@property (readonly,nonatomic) NSString *created_at;
@property (readonly,nonatomic) NSString *updated_at;
@property (readonly,nonatomic) NSString *sn;
@property (readonly,nonatomic) NSString *model;
@property (readonly,nonatomic) NSString *firmware_version;
@property (readonly,nonatomic) NSString *battery;
@property (readonly,nonatomic) NSString *umm;
@property (readonly,nonatomic) NSString *name;
@property (readonly,nonatomic) NSString *space;
@property (readonly,nonatomic) NSString *tag;
@property (readonly,nonatomic) NSString *uuid;
@property (readonly,nonatomic) NSString *major;
@property (readonly,nonatomic) NSString *accelerometer_sensitivity;
@property (readonly,nonatomic) NSString *transmit_power;
@property (readonly,nonatomic) NSString *minor;
@property (readonly,nonatomic) NSString *energy_saving_mode;
@property (readonly,nonatomic) NSString *temp_sampling_interval;
@property (readonly,nonatomic) NSString *light_sampling_interval;
@property (readonly,nonatomic) NSString *advertising_feq;
@property (readonly,nonatomic) NSString *light;
@property (readonly,nonatomic) NSString *temp;
@property (readonly,nonatomic) NSString *lng;
@property (readonly,nonatomic) NSString *lat;

- (id)initWithBeaconInfo:(NSDictionary *)beaconInfo;
@end
