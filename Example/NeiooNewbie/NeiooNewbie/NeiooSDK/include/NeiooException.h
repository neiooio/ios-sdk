//
//  NeiooException.h
//  NeiooSDK
//
//  Created by hsujahhu on 2015/7/3.
//  Copyright (c) 2015年 Herxun. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    INVALID_APP_KEY                = -10001,
    INVALID_DELEGATE               = -10002,
    FAILED_INITIALIZE              = -10003,             
    
} NeiooExceptionErrorCode;

@interface NeiooException : NSException

@property (nonatomic, strong) NSString *message;
@property NSUInteger errorCode;

- (NSString *)getMessage;
- (NSUInteger)getErrorCode;
@end
