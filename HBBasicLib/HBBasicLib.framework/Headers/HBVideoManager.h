//
//  HBVideoManager.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/12/10.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 视频编辑
@interface HBVideoManager : NSObject

@property (nonatomic, assign) CGSize videoSize;
@property (nonatomic, strong) void(^videoMixFinish)(NSURL *url);
@property (nonatomic, strong) void(^saveAlbumFinish)(BOOL isImage, BOOL isSuccess);

/// 给视频添加BGM
/// @param audioUrl 音频
/// @param audioVolume 音频音量
/// @param audioStartSecond 音频开始时间
/// @param videoUrl 视频
/// @param videoVolume 视频音量
/// @param isAudioMix 音量合并
/// @param outputUrl 导出视频
- (void)mixVideoBGM:(NSURL*)audioUrl audioVolume:(CGFloat)audioVolume audioStartSecond:(CGFloat)audioStartSecond andVideo:(NSURL *)videoUrl videoVolume:(CGFloat)videoVolume isAudioMix:(BOOL)isAudioMix outputUrl:(NSURL *)outputUrl;

/// 给视频添加BGM
/// @param audioUrl 音频
/// @param videoUrl 视频
/// @param outputUrl 导出视频
- (void)mixVideoBGM:(NSURL*)audioUrl andVideo:(NSURL *)videoUrl outputUrl:(NSURL *)outputUrl;

/// 合并视频
/// @param videoUrls 导入视频
/// @param outputUrl 导出视频
- (void)joinVideos:(NSArray<NSURL *> *)videoUrls outputUrl:(NSURL *)outputUrl;

/// 合并视频
/// @param videoUrl 导入视频
/// @param outputUrl 导出视频
- (void)cutVideo:(NSURL *)videoUrl startTime:(CGFloat)startTime duration:(CGFloat)duration outputUrl:(NSURL *)outputUrl;

/// 保存视频到相册
/// @param path 视频路径
- (void)saveVideoToAlbum:(NSString *)path;

/// 保存图片到相册
/// @param path 图片路径
- (void)saveImageToAlbum:(NSString *)path;

/// 获取视频截图
/// @param filePath 文件路径
+ (UIImage *)getScreenShotImageByVideoPath:(NSString *)filePath;

/// 获取视频截图
/// @param url 文件链接
+ (UIImage *)getScreenShotImageByVideoUrl:(NSURL *)url;

/// 获取视频时长
/// @param filePath 视频路径
+ (NSInteger)getVideoTimeByVideoPath:(NSString *)filePath;

/// 获取视频时长
/// @param url 视频链接
+ (NSInteger)getVideoTimeByVideoUrl:(NSURL *)url;

+ (instancetype)instance;

@end

#define kMsg_JoinMediaFinish    @"kMsg_JoinMediaFinish"

NS_ASSUME_NONNULL_END
