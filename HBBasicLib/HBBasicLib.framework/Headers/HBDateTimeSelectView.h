//
//  HBDateTimeSelectView.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/9/17.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 日期时间选择控件
@interface HBDateTimeSelectView : UIView

@property (nonatomic, strong) UIDatePicker *pickerView;
/// 标题
@property (nonatomic, strong) UILabel *titleLabel;
/// 是否是日期
@property (nonatomic, assign) BOOL isDate;
/// 最大时间
@property (nonatomic, strong) NSDate *maxDate;
/// 最小时间
@property (nonatomic, strong) NSDate *minDate;
/// 时间选择回调
@property (nonatomic, strong) void(^onTimeSelect)(HBDateTimeSelectView *sender, NSString *dateStr);
/// 日期选择回调
@property (nonatomic, strong) void(^onDateSelect)(HBDateTimeSelectView *sender, NSString *timeStr);
/// 取消回调
@property (nonatomic, strong) void(^onCancelSelect)(void);


/// 设置当前显示的时间
/// @param dateTime 时间（格式：yyyy-MM-dd 或者 hh:mm）
- (void)refreshView:(NSString *)dateTime;

@end

NS_ASSUME_NONNULL_END
