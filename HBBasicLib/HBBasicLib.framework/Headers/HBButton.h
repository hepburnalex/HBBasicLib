//
//  HBButton.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/1/2.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_OPTIONS(NSInteger, HBButtonImageTextAlign) {
    HBButtonImageTextAlign_LeftRight = 0,    /* 默认左图右文 */
    HBButtonImageTextAlign_TopBottom = 1,    /* 上图下文 */
    HBButtonImageTextAlign_RightLeft = 2,    /* 右图左文 */
    HBButtonImageTextAlign_BottomTop = 3,    /* 下图上文 */
};

@interface UIButton (HBButton)

/// 图文排列方式
@property (nonatomic, assign) HBButtonImageTextAlign imageTextAlign;

/// 图文间距
@property (nonatomic, assign) CGFloat imageTextSpacing;

+ (UIButton *)buttonWithFrame:(CGRect)frame;

+ (UIButton *)CreateButton:(UIImage *)image selectImage:(UIImage *)selectImage title:(NSString *)title font:(UIFont *)font titleColor:(UIColor *)titleColor selectColor:(UIColor *)selectColor backColor:(UIColor *)backColor;
+ (UIButton *)CreateTextButton:(NSString *)title font:(UIFont *)font titleColor:(UIColor *)titleColor;
+ (UIButton *)CreateTextButton:(NSString *)title font:(UIFont *)font titleColor:(UIColor *)titleColor backColor:(UIColor *)backColor;
+ (UIButton *)CreateTextButton:(NSString *)title font:(UIFont *)font titleColor:(UIColor *)titleColor selectColor:(UIColor *)selectColor backColor:(UIColor *)backColor;

+ (UIButton *)CreateButton:(UIImage *)image title:(NSString *)title font:(UIFont *)font titleColor:(UIColor *)titleColor;

+ (UIButton *)CreateImageButton:(UIImage *)image selectImage:(UIImage *)selectImage;

/// 圆角线框按钮
+ (UIButton *)createLineButton:(NSString *)title font:(UIFont *)font size:(CGSize)size lineColor:(UIColor *)lineColor;
/// 圆角填充按钮
+ (UIButton *)createFillButton:(NSString *)title font:(UIFont *)font size:(CGSize)size fillColor:(UIColor *)fillColor;

/// 设置图文对齐方式
/// @param imageTextAlign 对齐方式
/// @param offset 图文间距
//- (void)setImageTextAlign:(TButtonImageTextAlign)imageTextAlign offset:(CGFloat)offset;


#pragma mark - 文字

/// 设置文字
/// @param title 文字
/// @param selectTitle 选中文字
- (void)setTitle:(NSString *)title selectTitle:(NSString *)selectTitle;

/// 设置文字
/// @param title 文字
- (void)setNormalTitle:(NSString *)title;

/// 设置选中文字
/// @param selectTitle 选中文字
- (void)setSelectedTitle:(NSString *)selectTitle;

#pragma mark - 文字颜色

/// 设置文字颜色
/// @param color 文字颜色
/// @param selectColor 选中文字颜色
- (void)setTitleColor:(UIColor *)color selectColor:(UIColor *)selectColor;

/// 设置文字颜色
/// @param color 文字颜色
- (void)setNormalTitleColor:(UIColor *)color;

/// 设置选中文字颜色
/// @param selectColor 选中文字颜色
- (void)setSelectedTitleColor:(UIColor *)selectColor;

#pragma mark - 背景色

/// 设置背景色
/// @param color 背景色
/// @param state 按钮状态
- (void)setBackColor:(UIColor *)color forState:(UIControlState)state;

/// 设置背景色
/// @param color 背景色
/// @param selectColor 选中背景色
- (void)setBackColor:(UIColor *)color selectColor:(UIColor *)selectColor;

/// 设置背景色
/// @param color 背景色
- (void)setNormalBackColor:(UIColor *)color;

/// 设置选中背景色
/// @param selectColor 选中背景色
- (void)setSelectedBackColor:(UIColor *)selectColor;

#pragma mark - 图片

/// 设置图片
/// @param image 图片
/// @param selectImage 选中图片
- (void)setImage:(UIImage *)image selectImage:(UIImage *)selectImage;

/// 设置图片
- (void)setNormalImage:(UIImage *)image;

/// 设置选中图片
- (void)setSelectedImage:(UIImage *)image;

- (void)refreshView;

@end
