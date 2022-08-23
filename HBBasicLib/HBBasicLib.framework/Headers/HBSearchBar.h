//
//  HBSearchBar.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/8/22.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UISearchBar (HBSearchBar)

@property (nonatomic, strong) UIColor *textBackColor;
@property (nonatomic, strong) UIColor *barBackColor;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *placeholderColor;
@property (nonatomic, strong) UIFont *font;

- (void)setContentCornerRadius:(CGFloat)cornerRadius backColor:(UIColor *)backColor;

@end

NS_ASSUME_NONNULL_END
