//
//  CircleProgressView.h
//  HBBasicLib
//  环形进度条
//  Created by Hepburn on 16/8/25.
//  Copyright © 2016 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CircleProgressView;

@protocol CircleProgressViewDelegate <NSObject>

@optional

/// 进度条动画开始事件
/// @param sender 环形进度条视图
- (void)circleProgressViewDidStart:(CircleProgressView *)sender;

/// 进度条动画结束事件
/// @param sender 环形进度条视图
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

/// 开始进度条动画
/// @param progress 最终进度（取值 0~1）
- (void)startProgress:(CGFloat)progress;

/// 停止进度条动画
- (void)stopProgress;

@end
