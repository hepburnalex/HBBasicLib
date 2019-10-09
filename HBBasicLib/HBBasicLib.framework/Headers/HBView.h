//
//  HBView.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/8/30.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (HBView)

@property(nonatomic, assign) CGFloat top;
@property(nonatomic, assign) CGFloat left;
@property(nonatomic, assign) CGFloat width;
@property(nonatomic, assign) CGFloat height;
@property(nonatomic, readonly) CGFloat bottom;
@property(nonatomic, readonly) CGFloat right;

@property(nonatomic, assign) BOOL shouldRasterize;
@property(nonatomic, assign) CGFloat cornerRadius;

- (void)setBorderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;
- (void)removeAllSubViews;

@end

NS_ASSUME_NONNULL_END
