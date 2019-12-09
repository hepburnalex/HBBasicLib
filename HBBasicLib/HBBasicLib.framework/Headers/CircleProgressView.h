//
//  CircleProgressView.h
//  HBBasicLib
//
//  Created by Hepburn on 16/8/25.
//  Copyright © 2016 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CircleProgressView;

@protocol CircleProgressViewDelegate <NSObject>

@optional

- (void)circleProgressViewDidStart:(CircleProgressView *)sender;
- (void)circleProgressViewDidFinish:(CircleProgressView *)sender;

@end

@interface CircleProgressView : UIView

/// 代理
@property (nonatomic, assign) id<CircleProgressViewDelegate> delegate;
/// 一圈时间
@property (nonatomic, assign) CGFloat totalTime;
/// 进度
@property (nonatomic, assign) CGFloat progress;
/// 外半径
@property (nonatomic, assign) CGFloat outerRadius;
/// 内半径
@property (nonatomic, assign) CGFloat interalRadius;
/// 环背景色
@property (nonatomic, strong) UIColor *defaultColor;
/// 进度条颜色
@property (nonatomic, strong) UIColor *activeColor;
/// 是否正在运行动画
@property (nonatomic, assign) BOOL running;

- (void)startProgress:(CGFloat)progress;
- (void)stopProgress;

@end
