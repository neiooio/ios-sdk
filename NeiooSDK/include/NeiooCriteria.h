//
//  NeiooCriteria.h
//  Neioo
//
//  Created by hsujahhu on 2015/7/2.
//  Copyright (c) 2015年 Herxun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NeiooCriteria : NSObject
@property (readonly, nonatomic) NSString *criteriaId;
@property (readonly, nonatomic) NSString *created_at;
@property (readonly, nonatomic) NSString *updated_at;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *target_attr;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *value;

- (id)initWithCriteriaInfo:(NSDictionary *)criteriaInfo;
@end
