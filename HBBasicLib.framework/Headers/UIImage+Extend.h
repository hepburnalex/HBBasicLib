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

- (UIImage *)scaleImageToSize:(CGSize)newsize;
- (UIImage *)scaleImage:(CGFloat)scale;
- (UIImage *)getSubImage:(CGRect)rect;

@end


@interface UIImage (Color)

+ (UIImage *)imageWithColor:(UIColor *)color;

@end

@interface UIImage (View)

+ (UIImage *)imageWithView:(UIView *)view :(float)zoomscale;

@end
