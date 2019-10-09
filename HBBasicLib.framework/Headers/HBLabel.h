//
//  HBLabel.h
//  HBBasic
//
//  Created by Hepburn on 2019/2/14.
//  Copyright © 2019 ihope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (HBLabel)

+ (UILabel *)CreateLabel:(NSString *)text font:(UIFont *)font color:(UIColor *)fontColor textAlign:(NSTextAlignment)textAlign maxWidth:(NSInteger)maxWidth;
+ (UILabel *)CreateLabel:(NSString *)text font:(UIFont *)font color:(UIColor *)fontColor textAlign:(NSTextAlignment)textAlign;
+ (UILabel *)CreateLabel:(NSString *)text font:(UIFont *)font color:(UIColor *)fontColor;

//Text
+ (CGFloat)heightOfText:(NSString *)content width:(CGFloat)width fontSize:(CGFloat)fontSize;
+ (CGFloat)widthOfText:(NSString *)content maxWidth:(CGFloat)maxWidth fontSize:(CGFloat)fontSize;
+ (CGFloat)heightOfText:(NSString *)content width:(CGFloat)width font:(UIFont *)font;
+ (CGFloat)widthOfText:(NSString *)content maxWidth:(CGFloat)maxWidth font:(UIFont *)font;

#define NoNullFmt(x) !x?@"":x

@end
