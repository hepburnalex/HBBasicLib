//
//  HBCheckCodeView.h
//  HBBasic
//
//  Created by Hepburn on 2019/1/2.
//  Copyright © 2019 ihope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HBCheckCodeView : UIView

@property (nonatomic, strong) UIButton *checkBtn;
@property (nonatomic, strong) NSString *defaultText;
@property (nonatomic, strong) UIFont *titleFont;
@property (nonatomic, strong) UIColor *titleColor;
@property (nonatomic, strong) void(^onCheckBlock)(HBCheckCodeView *view);
@property (nonatomic, readonly) BOOL isSelected;

- (void)ShowTimeAnimate;
- (void)ResetTime;

@end
