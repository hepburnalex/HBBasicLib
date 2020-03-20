//
//  HBCheckCodeView.h
//  HBBasicLib
//  验证码控件
//  Created by Hepburn on 2019/1/2.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HBCheckCodeView : UIView

@property (nonatomic, strong) UIButton *checkBtn;

/// 倒计时单位（默认秒）
@property (nonatomic, strong) NSString *secondUnit;

/// 显示默认文字
@property (nonatomic, strong) NSString *defaultText;

/// 字体
@property (nonatomic, strong) UIFont *titleFont;

/// 文字颜色
@property (nonatomic, strong) UIColor *titleColor;

/// 点击回调
@property (nonatomic, strong) void(^onCheckBlock)(HBCheckCodeView *view);

/// 是否处于倒计时中
@property (nonatomic, readonly) BOOL isSelected;

/// 显示倒计时
- (void)showTimeAnimate;

/// 倒计时重置
- (void)resetTime;

@end
