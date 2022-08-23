//
//  NetImageView.h
//  HBBasicLib
//
//  Created by hepburn on 11-10-28.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
    NetImageType_FullFill,
    NetImageType_CutFill,
    NetImageType_AutoSize,
    NetImageType_Center,
    NetImageType_Bottom,
    NetImageType_Top,
    NetImageType_Left,
    NetImageType_Right,
} NetImageType;

/// 网络图片加载
@interface NetImageView : UIImageView

/// 图片将要加载显示时的回调
@property (nonatomic, copy) UIImage *(^onImageWillShow)(NetImageView *imageView, UIImage *image);

/// 图片加载显示完毕后的回调
@property (nonatomic, copy) void(^onImageDidShow)(NetImageView *imageView, UIImage *image);

/// 图片下载成功的回调
@property (nonatomic, copy) void(^onLoadFinish)(NetImageView *imageView);

@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) long long downloadSize;
@property (nonatomic, assign) NetImageType imageType;

@property (nonatomic, strong) id userInfo;
@property (nonatomic, strong) NSString *localPath;
@property (nonatomic, strong) UIImage *defaultImage;
@property (nonatomic, readonly) BOOL isLoading;
@property (nonatomic, assign) BOOL isShowLoading;

/// 请求图片链接
/// @param urlstr 图片链接
- (void)loadImageByUrl:(NSString *)urlstr;

/// 取消请求
- (void)cancel;

/// 重新加载图片
- (void)reloadImage;

/// 获取图片本地路径
/// @param urlstr 图片链接
+ (NSString *)getLocalPathOfUrl:(NSString *)urlstr;

/// 获取图片缓存目录
+ (NSString *)imageCachePath;

/// 设置图片缓存目录
/// @param path 缓存路径
+ (void)setImageCachePath:(NSString *)path;

/// 注册图片加载时显示的loading视图
/// @param loadViewName 加载视图的类名
+ (void)registerLoadingView:(NSString *)loadViewName;

/// 下载图片
/// @param urlstr 图片链接
/// @param loadingBlock 加载回调
/// @param reloadBlock 刷新图片回调
/// @param finishBlock 加载完毕回调
+ (NSURLSessionDownloadTask *)downloadImageWithUrl:(NSString *)urlstr loading:(void(^)(BOOL))loadingBlock reload:(void (^)(NSString *))reloadBlock finish:(void (^)(void))finishBlock;

@end
