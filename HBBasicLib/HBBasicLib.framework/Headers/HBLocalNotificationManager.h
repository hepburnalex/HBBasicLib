//
//  HBLocalNotificationManager.h
//  HBBasic
//
//  Created by Hepburn on 2019/10/12.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBLocalNotificationManager : NSObject

- (void)initLocalNotification;
- (void)addLocalNotification:(NSDate *)date title:(NSString *)title desc:(NSString *)desc;
- (void)removeLocalNotification:(NSDate *)date title:(NSString *)title desc:(NSString *)desc;

+ (instancetype)instance;

@end

NS_ASSUME_NONNULL_END
