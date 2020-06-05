//
//  HBLanguageManager.h
//  HBBasicLib
//
//  Created by Hepburn on 2018/8/17.
//  Copyright © 2018年 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>

/// 语言管理
@interface HBLanguageManager : NSObject

/// 是否中文
@property(nonatomic, assign) BOOL isCNS;

+ (HBLanguageManager *)sharedInstance;

//返回table中指定的key的值
- (NSString *)getStringForKey:(NSString *)key withTable:(NSString *)table;

//设置当前语言
- (void)setLanguage:(NSString*)language;

#define LANGUAGE_CNS    @"zh-Hans"
#define LANGUAGE_EN     @"en"
#define LL(x)     [[HBLanguageManager sharedInstance] getStringForKey:x withTable:@"Localizable"]

@end
