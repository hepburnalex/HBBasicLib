//
//  HBBaseWebWKViewController.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/12/6.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <HBBasicLib/HBBasicLib.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBBaseWebWKViewController : BaseADViewController

@property (nonatomic, strong) NSString *urlScheme;
@property (nonatomic, strong) WKWebView *webView;
@property (nonatomic, strong) NSString *urlStr;
@property (nonatomic, assign) BOOL isLockTitle;
@property (nonatomic, assign) BOOL isLocalCache;
@property (nonatomic, assign) BOOL isBounceEnable;

/// 网页格式化
/// @param content 网页内容
- (NSString *)getFullHtmlStr:(NSString *)content;

/// 通过标签名获取标签值
/// @param name 标签名
- (void)getJSTagByName:(NSString *)name block:(void(^)(NSString *result))block;

/// 获取网页标题
- (void)getJSTitle:(void(^)(NSString *result))block;

/// 获取网页的内容
- (void)getJSHTML:(void(^)(NSString *result))block;

/// web请求
/// @param urlstr 请求地址（优先）
/// @param htmlstr html数据
/// @param isLocalCache 是否本地缓存 
- (void)loadRequest:(nullable NSString *)urlstr html:(nullable NSString *)htmlstr isLocalCache:(BOOL)isLocalCache;

/// 注册userAgent
/// @param userAgent userAgent
+ (void)registerUserAgent:(NSString *)userAgent;

@end

NS_ASSUME_NONNULL_END
