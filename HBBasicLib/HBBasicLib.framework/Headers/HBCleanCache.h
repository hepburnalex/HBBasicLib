//
//  HBCleanCache.m
//  HBBasicLib
//  清理缓存
//  Created by Hepburn on 2019/1/2.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^cleanCacheBlock)(void);

@interface HBCleanCache : NSObject

/// 清理缓存
+ (void)cleanCache:(cleanCacheBlock)block;

/// 整个缓存目录的大小
+ (float)cacheSize;

/// 清除网页缓存
+ (void)cleanWebViewCache;

@end
