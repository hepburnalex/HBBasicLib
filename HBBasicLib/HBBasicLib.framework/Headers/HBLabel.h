//
//  HBLabel.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/2/14.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (HBLabel)

/// 设置行间距
/// @param lineSpace 行间距
/// @param text 文本
- (void)setLineSpace:(CGFloat)lineSpace withText:(NSString *)text;

+ (UILabel *)CreateLabel:(NSString *)text font:(UIFont *)font color:(UIColor *)fontColor textAlign:(NSTextAlignment)textAlign maxWidth:(NSInteger)maxWidth;
+ (UILabel *)CreateLabel:(NSString *)text font:(UIFont *)font color:(UIColor *)fontColor textAlign:(NSTextAlignment)textAlign;
+ (UILabel *)CreateLabel:(NSString *)text font:(UIFont *)font color:(UIColor *)fontColor;
+ (UILabel *)CreateLabel:(NSString *)text font:(UIFont *)font color:(UIColor *)fontColor lineSpace:(CGFloat)lineSpace;

//Text
+ (CGFloat)heightOfText:(NSString *)content width:(CGFloat)width fontSize:(CGFloat)fontSize;
+ (CGFloat)widthOfText:(NSString *)content maxWidth:(CGFloat)maxWidth fontSize:(CGFloat)fontSize;
+ (CGFloat)heightOfText:(NSString *)content width:(CGFloat)width font:(UIFont *)font;
+ (CGFloat)widthOfText:(NSString *)content maxWidth:(CGFloat)maxWidth font:(UIFont *)font;

#define NoNullFmt(x) !x?@"":x

@end
