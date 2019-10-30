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
@property (nonatomic, readonly) NSInteger firstWeekDayInMonth;
@property (nonatomic, readonly) NSInteger numberOfDaysInMonth;
@property (nonatomic, readonly) NSString *weekTitle;
/// 获得当前 NSDate 对象的上个月的某一天（此处定为15号）的 NSDate 对象
@property (nonatomic, readonly) NSDate * previousMonthDate;
/// 获得当前 NSDate 对象的下个月的某一天（此处定为15号）的 NSDate 对象
@property (nonatomic, readonly) NSDate * nextMonthDate;

@end

NS_ASSUME_NONNULL_END