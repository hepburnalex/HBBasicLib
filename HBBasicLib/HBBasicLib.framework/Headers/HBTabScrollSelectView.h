//
//  HBTabScrollSelectView.h
//  HBBasicLib
//  tab滚动选择控件
//  Created by Hepburn on 2019/12/3.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBTabScrollSelectView : UIScrollView

@property (nonatomic, strong) UIView *backView;
/// 下划线
@property (nonatomic, strong) UIView *lineView;
/// 下划线颜色
@property (nonatomic, strong) UIColor *lineColor;
/// 下划线尺寸
@property (nonatomic, assign) CGSize lineSize;

/// 文字字体
@property (nonatomic, strong) UIFont *itemFont;
/// 文字选中后的字体
@property (nonatomic, strong) UIFont *itemSelectedFont;

/// 文字颜色
@property (nonatomic, strong) UIColor *itemColor;
/// 文字选中颜色
@property (nonatomic, strong) UIColor *itemSelectedColor;

/// tab之间的间距
@property (nonatomic, assign) CGFloat spaceWidth;
/// tab内部文字与边界的间距
@property (nonatomic, assign) CGFloat marginWidth;
/// tab按钮与两侧边界的距离
@property (nonatomic, assign) CGFloat padding;

/// 当前选中的index（默认值为0，选择第一个）
@property (nonatomic, assign) NSInteger currentIndex;
/// tab展示的文字
@property (nonatomic, strong) NSArray<NSString *> *names;
/// 选择事件回调
@property (nonatomic, strong) void(^onTabItemSelect)(NSString *name, NSInteger index);

/// 选中的tab是否自动居中
@property (nonatomic, assign) BOOL isAutoAdjust;

/// 重新加载页面
- (void)reloadData;

@end

NS_ASSUME_NONNULL_END
