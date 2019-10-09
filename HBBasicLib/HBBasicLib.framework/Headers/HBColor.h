//
//  HBColor.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/8/23.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (HBColor)

/**
 Creates and returns a color object from hex string.

 @param hexStr  The hex string value for the color.
                Example: @"0xF0F", @"66ccff", @"#66CCFF88"
 @return        An UIColor object from string, or nil if an error occurs.
 */
+ (nullable UIColor *)colorWithHexStr:(NSString *)hexStr;

@end

NS_ASSUME_NONNULL_END
