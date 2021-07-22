//
//  HBiCloudManager.h
//  HBBasicLib
//
//  Created by Hepburn on 2021/4/19.
//  Copyright © 2021 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBiCloudManager : NSObject

+ (instancetype)instance;

/// 阻止文件被iTunes和iCloud同步，Do Not Backup属性
- (BOOL)addSkipBackupAttributeToItemAtURL:(NSURL *)url;
- (void)addSkipBackupAttribute;

@end

NS_ASSUME_NONNULL_END
