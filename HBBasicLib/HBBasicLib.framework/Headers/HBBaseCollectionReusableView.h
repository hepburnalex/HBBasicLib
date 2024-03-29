//
//  BaseCollectionReusableView.h
//  HYJ
//
//  Created by Hepburn on 2019/6/13.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBBaseCollectionReusableView : UICollectionReusableView

@property(nonatomic, assign) BOOL isHeightAutoAdjust;
@property(nonatomic, strong) id model;

+ (CGFloat)viewHeight;

@end

NS_ASSUME_NONNULL_END
