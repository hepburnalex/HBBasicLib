//
//  NSMutableAttributedString+Extend.h
//  HBBasicLib
//
//  Created by Hepburn on 2020/4/26.
//  Copyright © 2020 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableAttributedString (Extend)

+ (NSMutableAttributedString *)attributedStringWithString:(NSString *)string font:(UIFont *)font color:(UIColor *)color;

/// 设置标签字体颜色
/// @param font 字体
/// @param color 颜色
/// @param range 标签范围
- (void)addMarkColor:(nullable UIFont *)font color:(nullable UIColor *)color range:(NSRange)range;

/// 设置标签字体颜色
/// @param font 字体
/// @param color 颜色
/// @param mark 标签
- (void)addMarkColor:(nullable UIFont *)font color:(nullable UIColor *)color mark:(NSString *)mark;

/// 添加标签文字
/// @param font 字体
/// @param color 颜色
/// @param mark 标签
/// @param index 位置索引
- (void)addMarkText:(nullable UIFont *)font color:(nullable UIColor *)color mark:(NSString *)mark index:(NSInteger)index;

/// 添加图片
/// @param image 图片
/// @param index 位置索引
- (void)addMarkImage:(UIImage *)image index:(NSInteger)index;

/// 添加图片
/// @param image 图片
/// @param index 位置索引
/// @param top 顶部偏移
- (void)addMarkImage:(UIImage *)image index:(NSInteger)index top:(CGFloat)top;

@end

NS_ASSUME_NONNULL_END
