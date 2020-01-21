//
//  HBMoviePlayerView.h
//  HBBasicLib
//  视频播放控件
//  Created by Hepburn on 2019/12/10.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HBMoviePlayerView : UIView

/// 加载视频
/// @param path 视频文件路径
- (void)loadVideo:(NSString *)path;

/// 开始播放视频
- (void)startVideo;

/// 停止播放视频
- (void)stopVideo;

#define kMsg_StopVideo  @"kMsg_StopVideo"

@end
