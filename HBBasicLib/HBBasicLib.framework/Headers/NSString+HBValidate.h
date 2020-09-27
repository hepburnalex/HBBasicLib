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

/// 邮编
@property (nonatomic, readonly) BOOL isValidateZipCode;

/// 身份证号
@property (nonatomic, readonly) BOOL isValidateIdentityCard;

/// 邮箱
@property (nonatomic, readonly) BOOL isValidateEmail;

/// 手机号
@property (nonatomic, readonly) BOOL isValidateMobile;

/// 判断是否以字母开头
@property (nonatomic, readonly) BOOL isEnglishFirst;

/// 判断是否以字母开头
@property (nonatomic, readonly) BOOL isDigitFirst;

/// 判断是否以汉字开头
@property (nonatomic, readonly) BOOL isChineseFirst;

/// 获取拼音首字母(传入汉字字符串, 返回大写拼音首字母)
@property (nonatomic, readonly) NSString *firstCharactor;

/// 是否是数字
@property (nonatomic, readonly) BOOL isNumber;

@end

NS_ASSUME_NONNULL_END
