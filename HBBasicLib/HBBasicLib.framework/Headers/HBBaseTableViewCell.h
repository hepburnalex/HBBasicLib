//
//  HBBaseTableViewCell.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/6/12.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBBaseTableViewCell : UITableViewCell

@property (nonatomic, strong) id model;
@property (nonatomic, strong) UIView *lineView;

- (void)ResetViewSize;
/// 显示底部下划线
- (void)showBottomLineView:(CGFloat)margin;

@end

NS_ASSUME_NONNULL_END
