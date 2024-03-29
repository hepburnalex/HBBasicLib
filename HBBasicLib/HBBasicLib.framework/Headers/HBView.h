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
/// @param lineWidth 折线宽度
- (void)addLineLayer:(NSArray<NSValue *> *)points lineColor:(UIColor *)lineColor fillColor:(UIColor *)fillColor lineWidth:(CGFloat)lineWidth;

/// 添加渐变色
/// @param colors 颜色
/// @param isVertical 是否垂直
- (void)addGradientLayer:(NSArray<UIColor *> *)colors isVertical:(BOOL)isVertical;

/// 添加垂直渐变色
/// @param srcColor 起始颜色（顶部）
/// @param dstColor 结束颜色（底部）
- (void)addVertGradientLayer:(UIColor *)srcColor dstColor:(UIColor *)dstColor;

/// 添加垂直渐变色
/// @param srcColor 起始颜色（顶部）
/// @param dstColor 结束颜色（底部）
/// @param location 渐变起始值（0~1）
- (void)addVertGradientLayer:(UIColor *)srcColor dstColor:(UIColor *)dstColor location:(CGFloat)location;

/// 添加水平渐变色
/// @param srcColor 起始颜色（顶部）
/// @param dstColor 结束颜色（底部）
- (void)addHorzGradientLayer:(UIColor *)srcColor dstColor:(UIColor *)dstColor;

/// 添加水平渐变色
/// @param srcColor 起始颜色（顶部）
/// @param dstColor 结束颜色（底部）
/// @param location 渐变起始值（0~1）
- (void)addHorzGradientLayer:(UIColor *)srcColor dstColor:(UIColor *)dstColor location:(CGFloat)location;

/// 添加透明区域
/// @param rect 透明区域
/// @param cornerRadius 透明区域圆角 
- (void)addTransparentRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius;

/// 添加图片遮罩
/// @param maskImage 遮罩图片
/// @param leftCapWidth 横向拉伸点
/// @param topCapHeight 纵向拉伸点
- (void)addImageMask:(UIImage *)maskImage leftCapWidth:(CGFloat)leftCapWidth topCapHeight:(CGFloat)topCapHeight;

/// 添加横线
/// @param top 距离顶部边距
/// @param margin 两侧边距
/// @param reference 参照物
- (UIView *)createTopLineView:(CGFloat)top margin:(CGFloat)margin reference:(UIView *)reference;

/// 添加横线
/// @param top 距离顶部边距
/// @param margin 两侧边距
- (UIView *)createTopLineView:(CGFloat)top margin:(CGFloat)margin;

/// 添加横线
/// @param top 距离顶部边距
- (UIView *)createTopLineView:(CGFloat)top;

/// 添加横线
/// @param bottom 距离底部边距
/// @param margin 两侧边距
/// @param reference 参照物 
- (UIView *)createBottomLineView:(CGFloat)bottom margin:(CGFloat)margin reference:(UIView *)reference;

/// 添加横线
/// @param bottom 距离底部边距
/// @param margin 两侧边距
- (UIView *)createBottomLineView:(CGFloat)bottom margin:(CGFloat)margin;

/// 添加横线
/// @param bottom 距离底部边距
- (UIView *)createBottomLineView:(CGFloat)bottom;

/// 判断是否是iPhoneX
+ (BOOL)isiPhoneX;

/// 获取状态栏高度
+ (CGFloat)getStatusBarHeight;

@end

NS_ASSUME_NONNULL_END
