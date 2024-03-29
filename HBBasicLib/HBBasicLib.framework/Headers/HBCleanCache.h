//
//  HBCleanCache.m
//  HBBasicLib
//
//  Created by Hepburn on 2019/1/2.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^cleanCacheBlock)(void);

/// 清理缓存
@interface HBCleanCache : NSObject

/// 清理缓存
+ (void)cleanCache:(cleanCacheBlock)block;

/// 整个缓存目录的大小
+ (float)cacheSize;

/// 清除网页缓存
+ (void)cleanWebViewCache;

/// 硬盘剩余空间（MB）
+ (float)freeDiskSpace;

/// 计算文件夹大小
+ (long long)folderSizeAtPath:(NSString *)folderPath;

/// 计算单个文件大小
+ (long long)fileSizeAtPath:(NSString *)filePath;

@end
