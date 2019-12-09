//
//  HBButton.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/1/2.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef enum {
    TButtonImageTextAlign_Normal,       /* 默认左图右文 */
    TButtonImageTextAlign_TopBottom,    /* 上图下文 */
    TButtonImageTextAlign_RightLeft,    /* 右图左文 */
    TButtonImageTextAlign_Left,          /* 左对齐 */
    TButtonImageTextAlign_Right         /* 右对齐 */
}TButtonImageTextAlign;

@interface UIButton (HBButton)

@property (nonatomic, assign) TButtonImageTextAlign imageTextAlign;

+ (UIButton *)buttonWithFrame:(CGRect)frame;
+ (UIButton *)CreateButton:(UIImage *)image selectImage:(UIImage *)selectImage title:(NSString *)title fontSize:(CGFloat)fontSize titleColor:(UIColor *)titleColor selectColor:(UIColor *)selectColor backColor:(UIColor *)backColor;
+ (UIButton *)CreateTextButton:(NSString *)title fontSize:(CGFloat)fontSize titleColor:(UIColor *)titleColor;
+ (UIButton *)CreateTextButton:(NSString *)title fontSize:(CGFloat)fontSize titleColor:(UIColor *)titleColor backColor:(UIColor *)backColor;
+ (UIButton *)CreateTextButton:(NSString *)title fontSize:(CGFloat)fontSize titleColor:(UIColor *)titleColor selectColor:(UIColor *)selectColor backColor:(UIColor *)backColor;

+ (UIButton *)CreateButton:(UIImage *)image selectImage:(UIImage *)selectImage title:(NSString *)title font:(UIFont *)font titleColor:(UIColor *)titleColor selectColor:(UIColor *)selectColor backColor:(UIColor *)backColor;
+ (UIButton *)CreateTextButton:(NSString *)title font:(UIFont *)font titleColor:(UIColor *)titleColor;
+ (UIButton *)CreateTextButton:(NSString *)title font:(UIFont *)font titleColor:(UIColor *)titleColor backColor:(UIColor *)backColor;
+ (UIButton *)CreateTextButton:(NSString *)title font:(UIFont *)font titleColor:(UIColor *)titleColor selectColor:(UIColor *)selectColor backColor:(UIColor *)backColor;

+ (UIButton *)CreateButton:(UIImage *)image title:(NSString *)title font:(UIFont *)font titleColor:(UIColor *)titleColor;

+ (UIButton *)CreateImageButton:(UIImage *)image selectImage:(UIImage *)selectImage;

- (void)setImageTextAlign:(TButtonImageTextAlign)imageTextAlign offset:(CGFloat)offset;
- (void)setBackColor:(UIColor *)color forState:(UIControlState)state;

@end
