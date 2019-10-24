//
//  NSString+HBValidate.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/10/15.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (HBValidate)

//邮编
@property (nonatomic, readonly) BOOL isValidateZipCode;
//身份证号
@property (nonatomic, readonly) BOOL isValidateIdentityCard;
//邮箱
@property (nonatomic, readonly) BOOL isValidateEmail;
//手机号
@property (nonatomic, readonly) BOOL isValidateMobile;

@end

NS_ASSUME_NONNULL_END
