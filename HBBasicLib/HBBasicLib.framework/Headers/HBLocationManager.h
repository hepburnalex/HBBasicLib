//
//  HBLocationManager.h
//  HBBasicLib
//
//  Created by Hepburn on 2020/3/3.
//  Copyright © 2020 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

//#define USE_CONTACT

#ifdef USE_CONTACT
#import <CoreLocation/CoreLocation.h>

typedef enum {
    HBLocationManagerType_Normal,
    HBLocationManagerType_Once,
    HBLocationManagerType_Always
} HBLocationManagerType;

NS_ASSUME_NONNULL_BEGIN

/// 定位服务
@interface HBLocationManager : NSObject<CLLocationManagerDelegate>

@property (nonatomic, assign) HBLocationManagerType locationType;
@property (nonatomic, readonly) BOOL isChina;         //是否是中国
@property (nonatomic, readonly) CGFloat latitude;
@property (nonatomic, readonly) CGFloat longitude;
@property (nonatomic, readonly) NSString *city;       //城市
@property (nonatomic, readonly) NSString *country;    //国家
@property (nonatomic, readonly) NSString *province;   //省份（直辖市该字段为空）
@property (nonatomic, readonly) NSString *district;   //区
@property (nonatomic, readonly) NSString *address;    //详细地址
@property (nonatomic, strong) void(^onLoadAddress)(BOOL success);   //反地理位置编码回调
@property (nonatomic, strong) void(^onLoadLocation)(CGFloat latitude, CGFloat longitude);
@property (nonatomic, strong) CLLocationManager *locationManager;

/// 开始定位服务
- (void)startLocation;
/// 停止定位服务
- (void)stopLocation;

+ (instancetype)instance;

#else

NS_ASSUME_NONNULL_BEGIN

@interface HBLocationManager : NSObject

#endif

@end

NS_ASSUME_NONNULL_END
