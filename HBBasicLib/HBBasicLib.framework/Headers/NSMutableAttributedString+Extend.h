//
//  NSMutableAttributedString+Extend.h
//  HBBasicLib
//
//  Created by Hepburn on 2020/4/26.
//  Copyright © 2020 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableAttributedString (Extend)

+ (NSMutableAttributedString *)attributedStringWithString:(NSString *)string font:(UIFont *)font color:(UIColor *)color;

- (void)addMarkColor:(UIFont *)font color:(UIColor *)color range:(NSRange)range;
- (void)addMarkImage:(UIImage *)image index:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
