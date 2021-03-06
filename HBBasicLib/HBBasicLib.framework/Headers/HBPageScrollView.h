//
//  HBPageScrollView.h
//  HBBasicLib
//
//  Created by Hepburn on 2018/10/18.
//  Copyright © 2018年 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HBPageScrollView;

@protocol HBPageScrollViewDelegate<NSObject>

/// 总页数
/// @param pageView 轮播图控件
- (NSInteger)numberOfPagesInScroll:(HBPageScrollView *)pageView;

/// 页面视图
/// @param pageView 轮播图控件
/// @param index 页面索引
- (UIView *)scrollPage:(HBPageScrollView *)pageView viewAtIndex:(NSInteger)index;

@optional

/// 页面显示事件
/// @param pageView 轮播图控件
/// @param view 显示的视图
/// @param index 页面索引  
/// @param isManual YES手动翻页 NO自动翻页
- (void)scrollPage:(HBPageScrollView *)pageView showPage:(UIView *)view index:(NSInteger)index manual:(BOOL)isManual;

/// 页面隐藏事件
/// @param pageView 轮播图控件
/// @param view 隐藏的视图
/// @param index 页面索引 
- (void)scrollPage:(HBPageScrollView *)pageView hidePage:(UIView *)view index:(NSInteger)index;

/// 页面释放事件
/// @param pageView 轮播图控件
/// @param view 隐藏的视图
/// @param index 页面索引
- (void)scrollPage:(HBPageScrollView *)pageView releasePage:(UIView *)view index:(NSInteger)index;

/// 页面选择事件
/// @param pageView 轮播图控件
/// @param index 索引
- (void)scrollPage:(HBPageScrollView *)pageView onPageSelect:(NSInteger)index;

@end

typedef NS_OPTIONS(NSInteger, HBPageScrollType) {
    HBPageScrollType_Normal   = 0,
    HBPageScrollType_Scale    = 1
};

typedef NS_OPTIONS(NSInteger, HBPageScrollDirection) {
    HBPageScrollDirection_Vertical   = 1 << 0,
    HBPageScrollDirection_Horizonal  = 1 << 1
};


/// 轮播图控件
@interface HBPageScrollView : UIView

@property (nonatomic, strong) UIScrollView *scrollView;

/// 代理事件
@property (nonatomic, assign) id<HBPageScrollViewDelegate> delegate;

/// 轮播图展示形式
@property (nonatomic, assign) HBPageScrollType pageType;

/// 轮播图方向
@property (nonatomic, assign) HBPageScrollDirection pageDirection;

/// 弹性边界
@property (nonatomic, assign) BOOL bounces;

/// 当前页数
@property (nonatomic, assign) NSInteger currentIndex;

/// 总页数
@property (nonatomic, readonly) NSInteger pageCount;

/// 重新加载
- (void)reloadData;

/// 清除滑动偏移
- (void)cleanScrollOffset;

/// 开始自动翻页
/// @param interval 翻页时间间隔
- (void)startAutoScroll:(CGFloat)interval;

/// 停止滚动
- (void)stopAutoScroll;

@end
