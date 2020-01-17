//
//  NSString+HBDate.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/9/12.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    HBDateFormatType_YYYYMMDDHHMMSS,
    HBDateFormatType_YYYYMMDDHHMM,
    HBDateFormatType_YYYYMMDD,
    HBDateFormatType_HHMMSS,
    HBDateFormatType_HHMM,
    HBDateFormatType_MMDDHHMM,
    HBDateFormatType_MMDD
} HBDateFormatType;

@interface NSString (HBDate)

@property (nonatomic, readonly) NSDate *dateTime;
@property (nonatomic, readonly) NSTimeInterval timeInterval;
@property (nonatomic, readonly) NSString *YYYYMMDDHHMMTime;
@property (nonatomic, readonly) NSString *YYYYMMDDTime;
@property (nonatomic, readonly) NSString *HHMMTime;
@property (nonatomic, readonly) NSString *HHMMSSTime;
@property (nonatomic, readonly) NSString *MMDDHHMMTime;
@property (nonatomic, readonly) NSString *MMDDTime;
/// 短时间显示（一小时内显示 1小时内，当天显示HH:mm，更早的显示MM-dd）
@property (nonatomic, readonly) NSString *shortDateTime;
/// 精简时间显示（当天显示HH:mm，更早的显示yyyy-MM-dd HH:mm）
@property (nonatomic, readonly) NSString *simplifiedDateTime;

+ (NSDate *)dateTimeFromString:(NSString *)timeStr;
+ (NSString *)stringFromDateTime:(NSDate *)datetime;
+ (NSString *)stringFromTimeInterval:(NSTimeInterval)interval;
+ (NSTimeInterval)timeIntervalFromString:(NSString *)timeStr;
+ (NSDate *)dateTimeFromString:(NSString *)timeStr formatType:(HBDateFormatType)formatType;
+ (NSString *)stringFromDateTime:(NSDate *)datetime formatType:(HBDateFormatType)formatType;
//+ (NSString *)weekFromDate:(NSDate *)date;
//+ (NSInteger)monthFromDate:(NSDate *)date;
//+ (NSInteger)getNumberOfDaysInMonth:(NSDate *)date;

@end
