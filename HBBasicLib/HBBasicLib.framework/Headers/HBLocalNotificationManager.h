//
//  HBLocalNotificationManager.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/10/12.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 本地通知管理
@interface HBLocalNotificationManager : NSObject

/// 初始化
- (void)initLocalNotification;

/// 添加本地通知
/// @param tag 索引tag
/// @param date 触发时间
/// @param title 标题
/// @param desc 描述
- (void)addLocalNotification:(NSString *)tag date:(NSDate *)date title:(NSString *)title desc:(NSString *)desc;

/// 删除本地通知
/// @param tag 索引tag
- (void)removeLocalNotification:(NSString *)tag;

+ (instancetype)instance;

@end

NS_ASSUME_NONNULL_END
