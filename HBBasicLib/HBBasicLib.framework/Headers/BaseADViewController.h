//
//  BaseADViewController.h
//  HBBaseClasses
//
//  Created by Hepburn on 2018/7/13.
//  Copyright © 2018年 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseADViewController : UIViewController

@property (nonatomic, assign) BOOL isShowNavBar;
@property (nonatomic, assign) BOOL isIQKeyboardEnable;
@property (nonatomic, assign) BOOL isShowBackBtn;
@property (nonatomic, assign) BOOL isShowNavShadow;
@property (nonatomic, assign) CGFloat keyboardDistance;
@property (nonatomic, strong) UIColor *titleColor;
@property (nonatomic, strong) UIColor *navBarColor;
@property (nonatomic, strong) UIColor *navShadowColor;
@property (nonatomic, weak) UIViewController *mRootCtrl;
@property (nonatomic, strong) UIView *emptyView;

+ (void)registerBackBtnImage:(UIImage *)image;
+ (void)registerLoadingImage:(UIImage *)image;
+ (void)registerEmptyView:(NSString *)emptyViewName;

// NavBarItem
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
- (void)hidePopView;

// clean scrollView offset
- (void)cleanScrollViewOffset:(UIScrollView *)scrollView;

// push view controller
- (void)pushViewController:(NSString *)controllerName;
- (void)pushViewController:(NSString *)controllerName title:(NSString *)title;

@end
