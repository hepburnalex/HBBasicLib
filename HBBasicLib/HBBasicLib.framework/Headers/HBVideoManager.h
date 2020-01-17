//
//  HBVideoManager.h
//  HBBasicLib
//  视频编辑
//  Created by Hepburn on 2019/12/10.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBVideoManager : NSObject

@property (nonatomic, assign) CGSize videoSize;
@property (nonatomic, strong) void(^videoMixFinish)(NSURL *url);
@property (nonatomic, strong) void(^saveAlbumFinish)(BOOL isImage, BOOL isSuccess);


/// 合并视频
/// @param videoUrls 视频Url列表
/// @param audioURL 音频Url
- (void)joinMedia:(NSArray<NSURL *> *)videoUrls :(nullable NSURL *)audioURL;

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
