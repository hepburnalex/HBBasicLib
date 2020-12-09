//
//  UIImage+Extend.m
//  HBBaseClasses
//
//  Created by Hepburn on 2018/8/17.
//  Copyright © 2018年 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (BoxBlur)

/// 图像毛玻璃模糊处理
/// @param blur 模糊度（0~1）
- (UIImage*)imageWithBoxBlur:(CGFloat)blur;

/// 图像毛玻璃模糊处理
/// @param blur 模糊度（0~1）
/// @param tintColor 颜色
- (UIImage*)imageWithBoxBlur:(CGFloat)blur withColor:(UIColor*)tintColor;

@end


@interface UIImage (Mask)

/// 图片上色
/// @param tintColor 颜色 
- (UIImage *)colorImage:(UIColor *)tintColor;

/// 图片变色
/// @param color 颜色
- (UIImage *)reColorImage:(UIColor *)color;

- (UIImage *)maskImage:(UIImage *)theMaskImage;

@end


@interface UIImage (Scale)

/// 图片缩放到固定大小
/// @param newsize 图片尺寸
/// @param scale 放大比例
- (UIImage *)scaleImageToSize:(CGSize)newsize scale:(CGFloat)scale;

/// 图片缩放到固定大小
/// @param newsize 图片尺寸
- (UIImage *)scaleImageToSize:(CGSize)newsize;

/// 图片缩放到固定比例
/// @param scale 比例
- (UIImage *)scaleImage:(CGFloat)scale;

/// 图片裁剪
/// @param rect 裁剪区域
- (UIImage *)getSubImage:(CGRect)rect;

/// 拉伸图片
- (UIImage *)stretchImageWithSize:(CGSize)newSize leftCapWidth:(CGFloat)leftCapWidth topCapHeight:(CGFloat)topCapHeight;

@end


@interface UIImage (Color)

/// 颜色转图片
/// @param color 颜色
+ (UIImage *)imageWithColor:(UIColor *)color;

/// 颜色转图片
/// @param color 颜色
/// @param size 图片尺寸
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

/// 图片上色
/// @param tintColor 颜色
+ (UIImage *)imageWithTintColor:(UIImage *)image :(UIColor *)tintColor;

@end

@interface UIImage (View)

/// UIView转UIImage
/// @param view 视图
/// @param zoomscale 缩放比例
+ (UIImage *)imageWithView:(UIView *)view :(float)zoomscale;

@end
