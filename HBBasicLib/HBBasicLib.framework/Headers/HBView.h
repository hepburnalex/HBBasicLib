//
//  HBView.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/8/30.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (HBView)

@property(nonatomic, assign) CGFloat top;
@property(nonatomic, assign) CGFloat left;
@property(nonatomic, assign) CGFloat width;
@property(nonatomic, assign) CGFloat height;
@property(nonatomic, assign) CGFloat centerX;
@property(nonatomic, assign) CGFloat centerY;
@property(nonatomic, assign) CGSize size;
@property(nonatomic, readonly) CGFloat bottom;
@property(nonatomic, readonly) CGFloat right;
/// 光栅化
@property(nonatomic, assign) BOOL shouldRasterize;
/// 圆角
@property(nonatomic, assign) CGFloat cornerRadius;

/// 设置边框
/// @param borderWidth 宽度
/// @param borderColor 颜色
- (void)setBorderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;
- (void)removeAllSubViews;

/// 左上和右上为圆角
- (void)setTopCornerRadius:(CGFloat)radius;
/// 左下和右下为圆角
- (void)setBottomCornerRadius:(CGFloat)radius;
/// 四个圆角
- (void)setFourCornerRadius:(CGFloat)radius;

/// 清除layer
- (void)cleanLayers;

/// 绘制折线
/// @param points 折线目标点 [NSValue valueWithCGPoint:point]
/// @param lineColor 折线颜色
/// @param fillColor 填充颜色
/// @param borderWidth 折线宽度
- (void)addLineLayer:(NSArray<NSValue *> *)points lineColor:(UIColor *)lineColor fillColor:(UIColor *)fillColor borderWidth:(CGFloat)borderWidth;

@end

NS_ASSUME_NONNULL_END
