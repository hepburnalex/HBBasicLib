//
//  HBBaseScrollViewController.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/8/21.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <HBBasicLib/HBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@protocol HBBaseScrollViewControllerDelegate <NSObject>

@optional

- (void)scrollHeaderWithRefreshing;

@end

@interface HBBaseScrollViewController : HBBaseViewController<HBBaseScrollViewControllerDelegate>

@property (nonatomic, strong) UIScrollView *scrollView;

/// 容器视图
@property (nonatomic, strong) UIView *containerView;
/// 添加刷新动画
- (void)addRefreshHeader;
/// 停止刷新动画
- (void)endRefresh;

@end

NS_ASSUME_NONNULL_END
