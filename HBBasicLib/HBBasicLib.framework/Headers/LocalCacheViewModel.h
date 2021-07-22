//
//  LocalCacheViewModel.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/10/30.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <HBBasicLib/HBBasicLib.h>

NS_ASSUME_NONNULL_BEGIN

@interface LocalCacheViewModel : BaseViewModel

@property (nonatomic, strong) NSString *cacheModelName;
@property (nonatomic, strong) NSString *cacheName;

/// 从本地缓存加载数组
- (void)loadLocalCacheList:(NSString *)type;
/// 从本地缓存加载数组
- (NSArray *)loadLocalCaches:(NSString *)type;
/// 从本地缓存加载数组
- (NSArray *)loadLocalCaches:(NSString *)type cacheModelName:(NSString *)cacheModelName;
/// 保存数组到本地缓存
- (void)saveLocalCacheList:(NSString *)type;
/// 保存数组到本地缓存
- (void)saveLocalCaches:(NSArray *)models type:(NSString *)type;
/// 保存数组到本地缓存
- (void)saveLocalCaches:(NSArray *)models type:(NSString *)type cacheModelName:(NSString *)cacheModelName;

@end

NS_ASSUME_NONNULL_END
