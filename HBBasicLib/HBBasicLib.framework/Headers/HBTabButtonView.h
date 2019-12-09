//
//  HBTabButtonView.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/1/16.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBTabButtonView : UIScrollView

@property(nonatomic, assign) CGFloat defaultWidth;
@property(nonatomic, assign) CGFloat padding;
@property(nonatomic, assign) CGFloat lineWidth;             /* 下划线长度 */
@property(nonatomic, assign) NSInteger currentIndex;
@property(nonatomic, strong) NSArray *names;
@property(nonatomic, strong) UIColor *titleColor;           /* 文字颜色 */
@property(nonatomic, strong) UIColor *selectTitleColor;     /* 选中后文字颜色 */
@property(nonatomic, strong) UIColor *lineColor;            /* 底线颜色 */
@property(nonatomic, strong) UIFont *titleFont;             /* 文字字体 */
@property(nonatomic, strong) UIFont *selectTitleFont;       /* 选中后的文字字体 */
@property(nonatomic, strong) void(^OnTabSelect)(NSInteger index);

- (void)reloadData;

@end

NS_ASSUME_NONNULL_END
