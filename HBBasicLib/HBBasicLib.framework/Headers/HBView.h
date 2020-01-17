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
/// 顶部圆角
@property(nonatomic, assign) CGFloat topCornerRadius;
/// 底部圆角
@property(nonatomic, assign) CGFloat bottomCornerRadius;

/// 设置边框
/// @param borderWidth 宽度
/// @param borderColor 颜色
- (void)setBorderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;
- (void)removeAllSubViews;

@end

NS_ASSUME_NONNULL_END
