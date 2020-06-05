//
//  MTAlert.h
//  HBBasicLib
//
//  Created by Hepburn on 2018/7/26.
//  Copyright © 2018年 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MTAlert : NSObject

+(void)showAlertWithTitle:(NSString *_Nullable)title  message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel ok:(NSString *_Nullable)ok placeholder:(NSString *_Nullable)placeholder clickBlock:(void (^_Nullable)(NSInteger tag, NSString *_Nullable text))clickBlock root:(UIViewController *_Nullable)root;
+(void)showAlertWithTitle:(NSString *_Nullable)title  message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel ok:(NSString *_Nullable)ok clickBlock:(void (^_Nullable)(NSInteger tag))clickBlock;
+(void)showSheetWithTitle:(NSString *_Nullable)title  message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel ok:(NSArray *_Nullable)okArray clickBlock:(void (^_Nullable)(NSInteger tag))clickBlock;
+(void)showAlertWithTitle:(NSString *_Nullable)title  message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel ok:(NSString *_Nullable)ok clickBlock:(void (^_Nullable)(NSInteger tag))clickBlock root:(UIViewController *_Nullable)root;
+(void)showSheetWithTitle:(NSString *_Nullable)title  message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel ok:(NSArray *_Nullable)okArray clickBlock:(void (^_Nullable)(NSInteger tag))clickBlock root:(UIViewController *_Nullable)root;
+(void)showAlertWithTitle:(NSString *_Nullable)title  message:(NSString *_Nullable)message cancel:(NSString *_Nullable)cancel  root:(UIViewController *_Nullable)root;
+(void)showAlertWithTitle:(NSString *_Nullable)title root:(UIViewController *_Nullable)root;

@end

