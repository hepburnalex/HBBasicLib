//
//  HBTabNavSelectView.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/12/16.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// tab选择控件
@interface HBTabNavSelectView : UIView

/// 下划线
@property (nonatomic, strong) UIView *lineView;
/// 下划线颜色
@property (nonatomic, strong) UIColor *lineColor;
/// 下划线尺寸
@property (nonatomic, assign) CGSize lineSize;
/// 下划线距离底部边距
@property (nonatomic, assign) CGFloat lineMargin;

/// item的宽度
@property (nonatomic, assign) CGFloat itemWidth;
/// 正常字体
@property (nonatomic, strong) UIFont *itemFont;
/// 选中字体
@property (nonatomic, strong) UIFont *itemSelectedFont;
/// 正常颜色
@property (nonatomic, strong) UIColor *itemColor;
/// 选中颜色
@property (nonatomic, strong) UIColor *itemSelectedColor;
/// 背景图
@property (nonatomic, strong) UIImage *backImage;
/// 选中后背景图
@property (nonatomic, strong) UIImage *selectBackImage;

/// 当前选中的index（默认值为0，选择第一个）
@property (nonatomic, assign) NSInteger currentIndex;
/// tab展示的文字
@property (nonatomic, strong) NSArray *names;
/// 选中的回调事件
@property (nonatomic, strong) void(^onTabItemSelect)(NSString *name, NSInteger index);

/// 重新加载页面
- (void)reloadData;

@end

NS_ASSUME_NONNULL_END
