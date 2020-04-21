//
//  HBBaseScrollViewController.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/8/21.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <HBBasicLib/HBBasicLib.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBBaseScrollViewController : BaseADViewController

@property (nonatomic, strong) UIScrollView *scrollView;

/// 容器视图
@property (nonatomic, strong) UIView *containerView;

/// 添加顶部固定视图
/// @param topView 顶部视图
/// @param height 高度
- (void)addTopView:(UIView *)topView height:(CGFloat)height;

/// 添加BottomView
/// @param bottomView 底部视图
/// @param height 高度
- (void)addBottomView:(UIView *)bottomView height:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
