//
//  HBBaseScrollViewController.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/8/21.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <HBBasicLib/HBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBBaseScrollViewController : HBBaseViewController

@property (nonatomic, strong) UIScrollView *scrollView;

/// 容器视图
@property (nonatomic, strong) UIView *containerView;

@end

NS_ASSUME_NONNULL_END
