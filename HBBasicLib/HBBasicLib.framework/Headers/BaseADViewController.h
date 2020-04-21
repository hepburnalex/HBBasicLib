//
//  BaseADViewController.h
//  HBBasicLib
//
//  Created by Hepburn on 2018/7/13.
//  Copyright © 2018年 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    HBPopShowStyle_Full,
    HBPopShowStyle_Center,
    HBPopShowStyle_Top,
    HBPopShowStyle_Bottom
} HBPopShowStyle;

@interface BaseADViewController : UIViewController

/// 是否显示导航条
@property (nonatomic, assign) BOOL isShowNavBar;
/// 是否启用IQKeyboard
@property (nonatomic, assign) BOOL isIQKeyboardEnable;
/// 是否显示返回按钮
@property (nonatomic, assign) BOOL isShowBackBtn;
/// 是否显示导航栏底部阴影
@property (nonatomic, assign) BOOL isShowNavShadow;
/// 键盘与输入框的间距
@property (nonatomic, assign) CGFloat keyboardDistance;
/// 标题颜色
@property (nonatomic, strong) UIColor *titleColor;
/// 导航栏颜色
@property (nonatomic, strong) UIColor *navBarColor;
/// 导航栏底部阴影颜色
@property (nonatomic, strong) UIColor *navShadowColor;
/// 根控制器，不为空时，调用OnRootClick会直接返回该控制器页面
@property (nonatomic, weak) UIViewController *rootCtrl;
/// 当使用registerEmptyView注册了为空的提示框视图，该属性不为空
@property (nonatomic, strong) UIView *emptyView;
/// 回调处理事件
@property (nonatomic, strong) void(^onActionSelect)(void);

/// 注册返回按钮图，否则显示名字为 lnr_back 的图
/// @param image 返回按钮图
+ (void)registerBackBtnImage:(UIImage *)image;

/// 注册加载图
/// @param image 加载图
+ (void)registerLoadingImage:(UIImage *)image;

/// 设置加载图顺时针旋转
/// @param isClockwise 是否顺时针旋转（默认YES）
+ (void)setLoadingClockwise:(BOOL)isClockwise;

/// 注册数据为空时的提示视图
/// @param emptyViewName 提示视图的类名
+ (void)registerEmptyView:(NSString *)emptyViewName;

/// 注册背景色
/// @param color 背景色
+ (void)registerBackColor:(UIColor *)color;

// NavBarItem
- (void)addLeftButtonItems:(NSArray<UIImage *> *)images target:(id)target action:(SEL)action;
- (void)addLeftTextItem:(NSString *)name target:(id)target action:(SEL)action;
- (void)addLeftTextItem:(NSString *)name font:(UIFont *)font color:(UIColor *)color target:(id)target action:(SEL)action;

- (void)addRightButtonItem:(UIImage *)image target:(id)target action:(SEL)action;
- (void)addRightButtonItems:(NSArray<UIImage *> *)images target:(id)target action:(SEL)action;
- (void)addRightTextItem:(NSString *)name target:(id)target action:(SEL)action;
- (void)addRightTextItem:(NSString *)name font:(UIFont *)font color:(UIColor *)color target:(id)target action:(SEL)action;

- (void)addBackImageButton;
- (void)addBackImageButton:(UIImage *)image;
- (void)OnBackClick;
- (void)OnRootClick;

// loading
- (void)showTipWithHud:(NSString*)message;
- (void)stopLoading;
- (void)startLoading;
- (BOOL)isLoading;

// popView
- (void)showPopView:(UIView *)subView;
- (void)showPopView:(UIView *)subView style:(HBPopShowStyle)style;
- (void)hidePopView;

// clean scrollView offset
- (void)cleanScrollViewOffset:(UIScrollView *)scrollView;

// push view controller
- (void)pushViewController:(NSString *)controllerName;
- (void)pushViewController:(NSString *)controllerName title:(NSString *)title;

/// 显示子控制器视图
/// @param newController 子控制器
- (void)showChildViewController:(BaseADViewController *)newController;
- (void)showChildViewController:(BaseADViewController *)newController frame:(CGRect)frame;
- (void)addChildViewControllers:(NSArray<BaseADViewController *> *)childControllers edgeInset:(UIEdgeInsets)edgeInset;
- (void)showChildViewControllerIndex:(NSInteger)index;
- (void)showChildViewControllerIndex:(NSInteger)index frame:(CGRect)frame;

@end
