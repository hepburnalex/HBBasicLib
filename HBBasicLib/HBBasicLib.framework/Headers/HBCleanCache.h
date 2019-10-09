//
//  HBCleanCache.m
//  HBBasic
//
//  Created by Hepburn on 2019/1/2.
//  Copyright © 2019 ihope. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^cleanCacheBlock)(void);

@interface HBCleanCache : NSObject

/* 清理缓存 */
+ (void)cleanCache:(cleanCacheBlock)block;

/* 整个缓存目录的大小 */
+ (float)cacheSize;


@end
