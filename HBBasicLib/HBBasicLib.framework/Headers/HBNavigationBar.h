//
//  HBNavigationBar.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/8/22.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UINavigationBar (HBNavigationBar)

@property (nonatomic, assign) BOOL shadowHidden UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIFont *titleFont UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIColor *titleColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIColor *shadowColor UI_APPEARANCE_SELECTOR;

@property (nonatomic, readonly) UIImageView *shadowView;

@end

NS_ASSUME_NONNULL_END
