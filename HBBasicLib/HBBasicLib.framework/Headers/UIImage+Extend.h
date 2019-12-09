//
//  UIImage+Extend.m
//  HBBaseClasses
//
//  Created by Hepburn on 2018/8/17.
//  Copyright © 2018年 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (BoxBlur)

/* 图像毛玻璃模糊处理 */
- (UIImage*)imageWithBoxBlur:(CGFloat)blur;
- (UIImage*)imageWithBoxBlur:(CGFloat)blur withColor:(UIColor*)tintColor;

@end


@interface UIImage (Mask)

- (UIImage *)colorImage:(UIColor *)theColor;
- (UIImage *)reColorImage:(UIColor *)color;
- (UIImage *)maskImage:(UIImage *)theMaskImage;

@end


@interface UIImage (Scale)

/// 图片缩放到固定大小
/// @param newsize 图片尺寸
- (UIImage *)scaleImageToSize:(CGSize)newsize;

/// 图片缩放到固定比例
/// @param scale 比例
- (UIImage *)scaleImage:(CGFloat)scale;

/// 图片裁剪
/// @param rect 裁剪区域
- (UIImage *)getSubImage:(CGRect)rect;

@end


@interface UIImage (Color)

/// 颜色转图片
/// @param color 颜色
+ (UIImage *)imageWithColor:(UIColor *)color;

/// 颜色转图片
/// @param color 颜色
/// @param size 图片尺寸
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

@end

@interface UIImage (View)

/// UIView转UIImage
/// @param view 视图
/// @param zoomscale 缩放比例
+ (UIImage *)imageWithView:(UIView *)view :(float)zoomscale;

@end
