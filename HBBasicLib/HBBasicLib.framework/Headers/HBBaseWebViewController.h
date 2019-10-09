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
@property (nonatomic, strong) NSString *userAgent;
@property (nonatomic, strong) NSString *urlStr;
@property (nonatomic, strong) NSString *htmlStr;

@end

NS_ASSUME_NONNULL_END
