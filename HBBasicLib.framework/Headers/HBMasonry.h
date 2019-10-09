//
//  HBMasonry.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/9/10.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBMasonry : NSObject

+ (void)mas_HorizontalViews:(int)width :(int)padding :(NSArray<UIView *> *)views :(UIView *)rootView;

@end

NS_ASSUME_NONNULL_END
