//
//  NSArray+Extend.h
//  HBBasicLib
//
//  Created by Hepburn on 2020/6/4.
//  Copyright © 2020 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (Extend)

/// 数组中是否包含字符串
/// @param string 字符串
- (BOOL)containsString:(NSString *)string;

/// 数组中是否包含字符串，支持是否判断大小写
/// @param string 字符串
/// @param caseInsensitive 不区分大小写
- (BOOL)containsString:(NSString *)string caseInsensitive:(BOOL)caseInsensitive;

/// 数组中字符串索引
/// @param string 字符串
/// @param caseInsensitive 不区分大小写
- (NSInteger)indexOfString:(NSString *)string caseInsensitive:(BOOL)caseInsensitive;

@end

NS_ASSUME_NONNULL_END
