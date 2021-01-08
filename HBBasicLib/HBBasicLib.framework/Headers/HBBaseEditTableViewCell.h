//
//  HBBaseEditTableViewCell.h
//  HBBasicLib
//
//  Created by Hepburn on 2021/1/8.
//  Copyright © 2021 Hepburn. All rights reserved.
//

#import <HBBasicLib/NetImageView.h>
#import <HBBasicLib/HBBaseTableViewCell.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBBaseEditTableViewCell : HBBaseTableViewCell

@property (nonatomic, strong) NetImageView *avatarView;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *descLabel;
@property (nonatomic, strong) UITextField *textField;
@property (nonatomic, strong) void(^onTextChanged)(NSString *title, NSString *text);

/// 隐藏所有视图
- (void)hideAllViews;

/// 添加自定义视图
- (void)addCustomView:(UIView *)customView;

/// 更新标题
/// @param title 标题
/// @param height 高度
- (void)loadTitle:(NSString *)title height:(CGFloat)height;

/// 文本
/// @param title 标题
/// @param desc 描述
- (void)loadText:(NSString *)title desc:(NSString *)desc;

/// 输入框
/// @param title 标题
/// @param desc 描述
/// @param placeholder 占位
- (void)loadInput:(NSString *)title desc:(NSString *)desc placeholder:(NSString *)placeholder;

/// 图片
/// @param title 标题
/// @param imageurl 图片路径
- (void)loadImage:(NSString *)title imageurl:(NSString *)imageurl;

@end

NS_ASSUME_NONNULL_END
