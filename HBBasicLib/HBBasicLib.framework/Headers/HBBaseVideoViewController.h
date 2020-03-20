//
//  HBBaseVideoViewController.h
//  HBBasicLib
//  视频播放
//  Created by Hepburn on 2019/12/11.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <AVKit/AVKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBBaseVideoViewController : AVPlayerViewController

/// 视频路径
@property (nonatomic, strong) NSString *video_url;

/// 页面关闭事件
@property (nonatomic, strong) void(^OnBackSelect)(void);

@end

NS_ASSUME_NONNULL_END
