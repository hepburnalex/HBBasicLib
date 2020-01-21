//
//  HBBasePageViewController.h
//  HBBasicLib
//  横向分页滑动展示
//  Created by Hepburn on 2020/1/18.
//  Copyright © 2020 Hepburn. All rights reserved.
//

#import <HBBasicLib/HBBasicLib.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBBasePageViewController : BaseADViewController

@property (nonatomic, strong) NSArray *viewControllers;
@property (nonatomic, strong) UIPageViewController *pageCtrl;
@property (nonatomic, assign) NSInteger currentIndex;


/// 设置当前页码
/// @param currentIndex 页码
/// @param animated 是否显示动画
- (void)setCurrentIndex:(NSInteger)currentIndex animated:(BOOL)animated;

/// 添加TopView
/// @param topView 顶部View
/// @param height 高度
- (void)addTopView:(UIView *)topView height:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
