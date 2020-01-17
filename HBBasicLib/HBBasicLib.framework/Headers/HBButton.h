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

/// 设置图文对齐方式
/// @param imageTextAlign 对齐方式
/// @param offset 图文间距
//- (void)setImageTextAlign:(TButtonImageTextAlign)imageTextAlign offset:(CGFloat)offset;

/// 设置背景色
/// @param color 背景色
/// @param state 按钮状态
- (void)setBackColor:(UIColor *)color forState:(UIControlState)state;

- (void)refreshView;

@end
