//
//  HBTextField.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/12/16.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBTextField : UITextField

/// 添加左侧视图
/// @param leftView 左侧视图
- (void)addLeftView:(UIView *)leftView;

/// 添加右侧视图
/// @param rightView 右侧视图
- (void)addRightView:(UIView *)rightView;

@end

NS_ASSUME_NONNULL_END
