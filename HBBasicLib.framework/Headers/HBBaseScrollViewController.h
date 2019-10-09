//
//  HBBaseScrollViewController.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/8/21.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <HBBasicLib/HBBasicLib.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBBaseScrollViewController : BaseADViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIView *containerView;

- (void)addTopView:(UIView *)topView height:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
