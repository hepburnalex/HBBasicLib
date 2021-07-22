//
//  HBPageAutoScrollView.h
//  HBBasic
//
//  Created by Hepburn on 2020/10/22.
//  无限轮播

#import <UIKit/UIKit.h>

typedef enum {
    HBPageControlAlignment_Center,
    HBPageControlAlignment_Right
} HBPageControlAlignment;

NS_ASSUME_NONNULL_BEGIN

@interface HBPageAutoScrollView : UIView

/// 分页控件对齐方式
@property (nonatomic, assign) HBPageControlAlignment pageControlAlignment;
/// 分页控件
@property (nonatomic, strong) UIPageControl *pageCtrl;
/// 当前页数
@property (nonatomic, assign) NSInteger currentIndex;
/// 分页图片（支持UIImage，图片路径，图片链接）
@property (nonatomic, strong) NSArray *images;
/// 图片点击事件
@property (nonatomic, strong) void(^onImageSelect)(NSInteger index);

/// 重新加载页面
- (void)reloadData;

/// 开启自动轮播
/// @param interval 间隔时间 
- (void)startAutoScroll:(NSTimeInterval)interval;

/// 停止自动轮播
- (void)stopAutoScroll;

@end

NS_ASSUME_NONNULL_END
