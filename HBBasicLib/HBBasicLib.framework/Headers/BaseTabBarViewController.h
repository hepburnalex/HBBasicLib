//
//  BaseTabBarViewController.h
//  HYJ
//
//  Created by Hepburn on 2019/6/10.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseTabBarViewController : UITabBarController

@property (nonatomic, strong) UIFont *tabItemFont;
@property (nonatomic, strong) UIColor *tabItemColor;
@property (nonatomic, strong) UIColor *tabItemSelectedColor;
@property (nonatomic, strong) UIColor *tabBackColor;
@property (nonatomic, readonly) NSArray<NSString *> *controllerNames;
@property (nonatomic, assign) BOOL isInteractivePopEnable;

-(void)createTabBarViewController:(NSArray<NSString *> *)viewControllerNames
                           titles:(nullable NSArray *)titles
                       imageNames:(NSArray *)imageNames
                 selectImageNames:(NSArray *)selectImageNames;

@end

NS_ASSUME_NONNULL_END
