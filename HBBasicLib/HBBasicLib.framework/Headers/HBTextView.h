//
//  HBTextView.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/1/14.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

/// 改变输入框高度回调
typedef void (^ChangeTextHeight)(NSString *text, CGFloat height, BOOL autoChangeHeight);


/// 自定义多行文本输入控件
@interface HBTextView : UITextView
/// 占位文字
@property (nonatomic, copy) NSString *placeholder;
/// 占位文字颜色
@property (nonatomic, strong) UIColor *placeholderColor;
/// 行数 0-无限行
@property (nonatomic, assign) NSInteger numberOfLines;
/// 改变输入框高度回调
@property (nonatomic, copy) ChangeTextHeight changeTextHeightBlock;

@end
