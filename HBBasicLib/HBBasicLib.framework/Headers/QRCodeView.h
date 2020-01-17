//
//  QRCodeView.h
//  HBBasicLib
//  显示二维码的控件
//  Created by Hepburn on 2018/7/25.
//  Copyright © 2018年 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QRCodeView : UIImageView

/// 显示二维码
/// @param string 生成二维码的串
/// @param color 颜色
/// @param size 二维码尺寸
- (void)showQRCode:(NSString *)string color:(UIColor *)color size:(CGFloat)size;

/// 显示二维码（默认尺寸200*200）
/// @param string 生成二维码的串
/// @param color 颜色
- (void)showQRCode:(NSString *)string color:(UIColor *)color;

/// 显示二维码（默认尺寸200*200，颜色黑色）
/// @param string 生成二维码的串
- (void)showQRCode:(NSString *)string;

/// 获取二维码图片
/// @param string 生成二维码的串
/// @param color 颜色
/// @param size 二维码尺寸
+ (UIImage *)getQRCodeImage:(NSString *)string color:(UIColor *)color size:(CGFloat)size;

@end
