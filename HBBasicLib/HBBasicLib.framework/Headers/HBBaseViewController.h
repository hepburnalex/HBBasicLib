//
//  HBBaseViewController.h
//  HBBasicLib
//
//  Created by Hepburn on 2020/5/8.
//  Copyright © 2020 Hepburn. All rights reserved.
//

#import <HBBasicLib/BaseADViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBBaseViewController : BaseADViewController

/// 主视图
@property (nonatomic, strong) UIView *rootView;

/// 添加顶部固定View（高度自适应）
/// @param topView 顶部View
- (void)addTopView:(UIView *)topView;

/// 添加底部固定View（高度自适应）
/// @param bottomView 底部View
- (void)addBottomView:(UIView *)bottomView;

/// 添加顶部固定View
/// @param topView 顶部View
/// @param height 高度
- (void)addTopView:(UIView *)topView height:(CGFloat)height;

/// 添加底部固定View
/// @param bottomView 底部View
/// @param height 高度
- (void)addBottomView:(UIView *)bottomView height:(CGFloat)height;

/// 移除TopView
- (void)removeTopView;

/// 移除BottomView
- (void)removeBottomView;

@end

NS_ASSUME_NONNULL_END
