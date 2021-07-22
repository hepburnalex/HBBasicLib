//
//  MTAlert.h
//  HBBasicLib
//
//  Created by Hepburn on 2018/7/26.
//  Copyright © 2018年 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MTAlert : NSObject

/// 提示框（带输入框）
+(void)showAlertWithTitle:(NSString *_Nullable)title message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel ok:(NSString *_Nullable)ok inputBlock:(void (^_Nullable)(UITextField *_Nullable textField))inputBlock clickBlock:(void (^_Nullable)(NSInteger tag, NSString *_Nullable text))clickBlock root:(UIViewController *_Nullable)root;

/// 提示框（带输入框，占位）
+(void)showAlertWithTitle:(NSString *_Nullable)title message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel ok:(NSString *_Nullable)ok placeholder:(NSString *_Nullable)placeholder clickBlock:(void (^_Nullable)(NSInteger tag, NSString *_Nullable text))clickBlock root:(UIViewController *_Nullable)root;

/// 提示框（确定/取消按钮，回调，根控制器）
+(void)showAlertWithTitle:(NSString *_Nullable)title message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel ok:(NSString *_Nullable)ok clickBlock:(void (^_Nullable)(NSInteger tag))clickBlock root:(UIViewController *_Nullable)root;

/// 提示框（确定/取消按钮，回调）
+(void)showAlertWithTitle:(NSString *_Nullable)title  message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel ok:(NSString *_Nullable)ok clickBlock:(void (^_Nullable)(NSInteger tag))clickBlock;

/// 提示框（取消按钮，根控制器）
+(void)showAlertWithTitle:(NSString *_Nullable)title  message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel  root:(UIViewController *_Nullable)root;

/// 提示框（只有标题）
+(void)showAlertWithTitle:(NSString *_Nullable)title root:(UIViewController *_Nullable)root;

/// 底部选择器
+(void)showSheetWithTitle:(NSString *_Nullable)title  message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel ok:(NSArray *_Nullable)okArray clickBlock:(void (^_Nullable)(NSInteger tag))clickBlock;

/// 底部选择器（根控制器）
+(void)showSheetWithTitle:(NSString *_Nullable)title  message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel ok:(NSArray *_Nullable)okArray clickBlock:(void (^_Nullable)(NSInteger tag))clickBlock root:(UIViewController *_Nullable)root;

@end

NS_ASSUME_NONNULL_END

