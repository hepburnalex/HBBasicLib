//
//  HBCommentView.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/1/14.
//  Copyright © 2019 ihope. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBCommentView : UIView

/// 最小高度
@property (nonatomic, assign) CGFloat minHeight;

/// 顶部高度
@property (nonatomic, assign) CGFloat topHeight;

/// 评论内容
@property (nonatomic, strong) NSString *text;

/// 占位描述
@property (nonatomic, strong) NSString *placeholder;

/// 字体
@property (nonatomic, strong) UIFont *font;

/// 评论按钮
@property (nonatomic, strong) UIButton *sendBtn;

/// 发评论按钮
@property (nonatomic, copy) void(^onCommentSend)(NSString *text);

/// 显示键盘
- (void)showKeyboard;

@end

NS_ASSUME_NONNULL_END
