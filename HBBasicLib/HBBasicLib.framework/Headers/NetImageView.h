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

@interface NetImageView : UIImageView {
    UIActivityIndicatorView *mActView;
}

@property (nonatomic, copy) UIImage *(^OnImageWillLoad)(NetImageView *imageView, UIImage *image);
@property (nonatomic, copy) void(^OnImageDidLoad)(NetImageView *imageView);
@property (nonatomic, copy) void(^OnLoadFinish)(NetImageView *imageView);

@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) long long downloadSize;
@property (nonatomic, assign) NetImageType imageType;

@property (nonatomic, strong) id userInfo;
@property (nonatomic, strong) NSString *localPath;
@property (nonatomic, strong) UIImage *defaultImage;
@property (nonatomic, readonly) BOOL isLoading;
@property (nonatomic, assign) BOOL isShowLoading;

- (void)GetImageByStr:(NSString *)path;
- (void)Cancel;

+ (NSString *)GetLocalPathOfUrl:(NSString *)urlstr;
+ (NSString *)imageCachePath;
+ (void)setImageCachePath:(NSString *)path;
+ (void)registerLoadingView:(NSString *)loadViewName;

@end
