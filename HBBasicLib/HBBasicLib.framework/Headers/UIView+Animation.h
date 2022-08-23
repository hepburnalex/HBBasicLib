//
//  UIView+Animation.h
//  HBBasicLib
//
//  Created by Hepburn on 2022/3/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (Animation)

///循环旋转动画
- (void)startRotateAnimation:(CGFloat)duration;
///循环翻转动画
- (void)startFlipAnimation:(CGFloat)duration;
///循环震动动画
- (void)startShakeAnimation:(CGFloat)duration degree:(CGFloat)degree;
///翻页动画
- (void)startFlipAnimationFromRight:(CGFloat)duration finish:(nullable void (^)(BOOL finished))finish;
- (void)startFlipAnimationFromLeft:(CGFloat)duration finish:(nullable void (^)(BOOL finished))finish;
///弹出动画
- (void)startPopAnimation:(CGFloat)duration finish:(nullable void (^)(BOOL finished))finish;
///停止动画
- (void)stopAnimation;

@end

NS_ASSUME_NONNULL_END
