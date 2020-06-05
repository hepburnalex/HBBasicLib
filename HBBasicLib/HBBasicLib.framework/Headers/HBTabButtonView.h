//
//  HBTabButtonView.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/1/16.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 顶部tab切换控件
@interface HBTabButtonView : UIScrollView

/// tab默认宽度
@property(nonatomic, assign) CGFloat defaultWidth;
/// 左右边距
@property(nonatomic, assign) CGFloat padding;
/// 下划线长度
@property(nonatomic, assign) CGFloat lineWidth;
/// 展示的tab名称
@property(nonatomic, strong) NSArray *names;
/// 文字颜色
@property(nonatomic, strong) UIColor *titleColor;
/// 选中后文字颜色
@property(nonatomic, strong) UIColor *selectTitleColor;
/// 底线颜色
@property(nonatomic, strong) UIColor *lineColor;
/// 文字字体
@property(nonatomic, strong) UIFont *titleFont;
/// 选中后的文字字体
@property(nonatomic, strong) UIFont *selectTitleFont;
/// 选中回调
@property(nonatomic, strong) void(^OnTabSelect)(NSInteger index);
/// 当前选中的index
@property(nonatomic, assign) NSInteger currentIndex;

/// 重新加载
- (void)reloadData;

@end

NS_ASSUME_NONNULL_END
