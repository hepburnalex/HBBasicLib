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

/// 添加顶部固定视图
/// @param topView 顶部视图
/// @param height 高度
- (void)addTopView:(UIView *)topView height:(CGFloat)height;

/// 添加BottomView
/// @param bottomView 底部视图
/// @param height 高度
- (void)addBottomView:(UIView *)bottomView height:(CGFloat)height;

/// 移除TopView
- (void)removeTopView;

/// 移除BottomView
- (void)removeBottomView;

@end

NS_ASSUME_NONNULL_END
