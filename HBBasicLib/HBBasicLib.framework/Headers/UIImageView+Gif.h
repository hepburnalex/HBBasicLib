//
//  GifImageView.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/6/5.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - GifImageInfo

@interface GifImageInfo : NSObject

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, assign) float delayTime;

@end

#pragma mark - UIImageView

/// GIF图片加载
@interface UIImageView (HBGif)

/// 加载Gif图片
/// @param path Gif图片路径
- (void)showGifImage:(NSString *)path;

/// 加载Gif图片
/// @param path Gif图片路径
/// @param scale 图片缩放比
/// @param duration 动画时长
/// @param repeat 重复次数（0表示无限）
- (void)showGifImage:(NSString *)path scale:(CGFloat)scale duration:(CGFloat)duration repeat:(NSInteger)repeat;

/// 生成GIF图
/// @param images 图片帧
/// @param path 生成路径
+ (void)makeGif:(NSArray<GifImageInfo *> *)images output:(NSString *)path;

/// 生成GIF图
/// @param images 图片帧
/// @param duration 动画时长
/// @param path 生成路径
+ (void)makeGif:(NSArray<UIImage *> *)images duration:(CGFloat)duration output:(NSString *)path;

/// 视频转成GIF图
/// @param videoPath 视频路径
/// @param startTime 开始时间
/// @param duration 时长
/// @param path 生成路径
/// @param block 成功回调
+ (void)makeVideoGif:(NSString *)videoPath start:(float)startTime duration:(float)duration output:(NSString *)path completion:(void (^)(void))block;

@end

NS_ASSUME_NONNULL_END
