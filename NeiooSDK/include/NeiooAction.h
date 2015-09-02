//
//  NeiooAction.h
//  Neioo
//
//  Created by hsujahhu on 2015/7/2.
//  Copyright (c) 2015年 Herxun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NeiooAction : NSObject
@property (readonly, nonatomic) NSString *actionId;
@property (readonly, nonatomic) NSString *created_at;
@property (readonly, nonatomic) NSString *updated_at;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *action_description;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSDictionary *actionDetail;

- (id)initWithActionInfo:(NSDictionary *)actionInfo;
@end
