//
//  HBBaseWebViewController.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/8/21.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <HBBasicLib/HBBasicLib.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBBaseWebViewController : BaseADViewController<UIWebViewDelegate>

@property (nonatomic, strong) UIWebView *webView;
/// 加载网址
@property (nonatomic, strong) NSString *urlStr;
/// 加载网页html
@property (nonatomic, strong) NSString *htmlStr;
/// 在新页面显示链接
@property (nonatomic, strong) void(^OnShowNextView)(NSString *urlstr);
/// 是否锁定标题
@property (nonatomic, assign) BOOL isLockTitle;
/// 是否本地缓存
@property (nonatomic, assign) BOOL isLocalCache;
/// 是否启用弹性边界
@property (nonatomic, assign) BOOL isBounceEnable;
/// 是否显示loading
@property (nonatomic, assign) BOOL isShowLoading;
/// 是否可以缩放
@property (nonatomic, assign) BOOL isScaleEnable;

/// 网页格式化
/// @param content 网页内容
- (NSString *)getFullHtmlStr:(NSString *)content;
/// 通过标签名获取标签值
/// @param name 标签名
- (NSString *)getJSTagByName:(NSString *)name;
/// 获取网页标题
- (NSString *)getJSTitle;
/// 获取网页的内容
- (NSString *)getJSHTML;

/// 网页请求事件（可重写）
/// @param urlstr 请求链接
/// @param htmlstr 加载网页文本
/// @param isLocalCache 是否本地缓存
- (void)loadRequest:(nullable NSString *)urlstr html:(nullable NSString *)htmlstr isLocalCache:(BOOL)isLocalCache;

/// 注册userAgent
/// @param userAgent userAgent
+ (void)registerUserAgent:(NSString *)userAgent;

@end

NS_ASSUME_NONNULL_END
