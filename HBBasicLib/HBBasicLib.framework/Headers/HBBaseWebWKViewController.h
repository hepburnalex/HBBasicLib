//
//  HBBaseWebWKViewController.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/12/6.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <HBBasicLib/HBBaseViewController.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol HBBaseWebWKViewControllerDelegate <NSObject>

/// JS调用OC事件
/// @param name 方法名
/// @param params 参数
- (void)webViewJSActionSelect:(NSString *)name params:(nullable id)params;

/// webView开始加载url
/// @param urlStr 请求url
- (BOOL)webViewShouldStartLoadWithUrl:(NSString *)urlStr;

/// 处理URL
- (void)applicationOpenUrl:(NSURL *)url;

@end

@interface HBBaseWebWKViewController : HBBaseViewController<HBBaseWebWKViewControllerDelegate, WKNavigationDelegate, WKScriptMessageHandler>

/// JS交互
@property (nonatomic, strong) NSArray *JSActionNames;
@property (nonatomic, assign) BOOL isJSCoreEnable;
/// WebView
@property (nonatomic, strong) WKWebView *webView;
/// 加载网址
@property (nonatomic, strong) NSString *urlStr;
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
/// 监听的urlScheme
@property (nonatomic, strong) NSString *urlScheme;
/// 在新页面显示链接
@property (nonatomic, strong) BOOL(^OnShowNextView)(NSString *urlstr);
/// JS调用OC事件
@property (nonatomic, strong) void(^OnWebJSActionSelect)(HBBaseWebWKViewController *ctrl, NSString *name, id params);

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

/// 执行JS方法
- (void)runJSAction:(NSString *)jsaction block:(void(^)(NSString *result))block;

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
