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

/// 固定电话
@property (nonatomic, readonly) BOOL isValidateTelephone;

/// 判断是否以字母开头
@property (nonatomic, readonly) BOOL isEnglishFirst;

/// 判断是否以数字开头
@property (nonatomic, readonly) BOOL isDigitFirst;

/// 判断是否以汉字开头
@property (nonatomic, readonly) BOOL isChineseFirst;

/// 判断是否中文
@property (nonatomic, readonly) BOOL isChinese;

/// 是否是数字
@property (nonatomic, readonly) BOOL isDigit;

/// 获取拼音首字母(传入汉字字符串, 返回大写拼音首字母)
@property (nonatomic, readonly) NSString *firstCharacter;

/// 字节长度
@property (nonatomic, readonly) NSInteger characterNumber;

/// 金额展示（12,345,678.00或者12,345,678）
@property (nonatomic, readonly) NSString *moneyFormat;

/// 清除HTML标签
@property (nonatomic, readonly) NSString *filterHTML;

/// HTML解码
@property (nonatomic, readonly) NSString *htmlDecode;

/// HTML编码
@property (nonatomic, readonly) NSString *htmlEncode;

/// 查找以start开头以end结尾的字符串
/// @param start 起始
/// @param end 结束
- (NSString *)findTextWithStart:(NSString *)start end:(NSString *)end;

/// 查找以start开头以end结尾的所有字符串
/// @param start 起始
/// @param end 结束
- (NSArray *)findAllTextWithStart:(NSString *)start end:(NSString *)end;

@end

NS_ASSUME_NONNULL_END
