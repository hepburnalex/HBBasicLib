//
//  BaseTabBarViewController.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/6/10.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseTabBarViewController : UITabBarController

@property (nonatomic, assign) CGFloat bottomOffset;
@property (nonatomic, strong) UIFont *tabItemFont;
@property (nonatomic, strong) UIColor *tabItemColor;
@property (nonatomic, strong) UIColor *tabItemSelectedColor;
@property (nonatomic, strong) UIColor *tabBackColor;
@property (nonatomic, readonly) NSArray<NSString *> *controllerNames;
@property (nonatomic, assign) BOOL isInteractivePopEnable;              //开启滑动返回
@property (nonatomic, assign) BOOL isAutoImageRendering;                //图像自动渲染


/// 创建TabBarController
/// @param viewControllerNames 控制器
/// @param titles 标题
/// @param imageNames 图片名
/// @param selectImageNames 选中图片名
- (void)createTabBarViewController:(NSArray<NSString *> *)viewControllerNames
                            titles:(nullable NSArray *)titles
                        imageNames:(NSArray *)imageNames
                  selectImageNames:(NSArray *)selectImageNames;

/// 更新tabBarItem字体和颜色
/// @param tabBarItem tabBarItem
/// @param font 字体
/// @param color 颜色
/// @param selectColor 选中颜色
- (void)refreshTabBarItem:(UITabBarItem *)tabBarItem font:(nullable UIFont *)font color:(nullable UIColor *)color selectColor:(nullable UIColor *)selectColor;

/// 更新tabBarItem字体和颜色
/// @param tabBarItem tabBarItem
- (void)refreshTabBarItem:(UITabBarItem *)tabBarItem;

/// 刷新tabbar
- (void)refreshTabBar;

@end

NS_ASSUME_NONNULL_END
