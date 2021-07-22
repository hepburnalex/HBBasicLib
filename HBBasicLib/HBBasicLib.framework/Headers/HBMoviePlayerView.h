//
//  HBMoviePlayerView.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/12/10.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

/// 视频播放控件
@interface HBMoviePlayerView : UIView

@property (nonatomic, assign) BOOL hideControl;
@property (nonatomic, readonly) BOOL isPlaying;
@property (nonatomic, strong) UIButton *backButton;

+ (instancetype)defaultPlayer;

/// 加载视频
/// @param path 视频文件路径
- (void)loadVideo:(NSString *)path;

/// 开始播放视频
- (void)startVideo;

/// 停止播放视频
- (void)stopVideo;

#define kMsg_StopVideo  @"kMsg_StopVideo"

@end

@interface UIView (HBMoviePlayer)

- (HBMoviePlayerView *)addMoviePlayer:(NSString *)urlstr;
- (void)removeMoviePlayer;

@end
