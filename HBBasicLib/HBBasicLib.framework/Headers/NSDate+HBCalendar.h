//
//  NSDate+HBCalendar.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/10/17.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDate (HBCalendar)

@property (nonatomic, readonly) NSInteger year;
@property (nonatomic, readonly) NSInteger month;
@property (nonatomic, readonly) NSInteger day;
@property (nonatomic, readonly) NSInteger hour;
@property (nonatomic, readonly) NSInteger minute;
@property (nonatomic, readonly) NSInteger week;
/// 获取当月第一天的星期
@property (nonatomic, readonly) NSInteger firstWeekDayInMonth;
/// 获取当月天数
@property (nonatomic, readonly) NSInteger numberOfDaysInMonth;
@property (nonatomic, readonly) NSString *weekTitle;
/// 农历月
@property (nonatomic, readonly) NSString *chineseMonth;
/// 农历日
@property (nonatomic, readonly) NSString *chineseDay;
/// 获得当前 NSDate 对象的上个月的某一天（此处定为15号）的 NSDate 对象
@property (nonatomic, readonly) NSDate *previousMonthDate;
/// 获得当前 NSDate 对象的下个月的某一天（此处定为15号）的 NSDate 对象
@property (nonatomic, readonly) NSDate *nextMonthDate;
/// 本周第一天
@property (nonatomic, readonly) NSDate *firstDayInWeek;


/// 获得本周第一天
/// @param date 时间
+ (NSDate *)getWeekFirstDay:(NSDate *)date;

@end

NS_ASSUME_NONNULL_END
