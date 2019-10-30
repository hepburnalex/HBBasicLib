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
@property (nonatomic, readonly) NSString *shortDateTime;
//Encrypt
@property (nonatomic, readonly) NSString *MD5String;

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
