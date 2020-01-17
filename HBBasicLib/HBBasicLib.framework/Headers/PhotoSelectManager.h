//
//  PhotoSelectManager.h
//  HBBasicLib
//  拍照/相册管理
//  Created by Hepburn on 2019/10/8.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoSelectManager : NSObject

@property (nonatomic, copy) void(^OnPhotoSelect)(UIImage *image);
@property (nonatomic, copy) void(^OnImageSelect)(NSString *imagepath);
@property (nonatomic, assign) UIViewController *rootCtrl;
@property (nonatomic, assign) int imageWidth;
@property (nonatomic, assign) int imageHeight;
@property (nonatomic, assign) BOOL isEdit;
@property (nonatomic, assign) BOOL isFrontCamera;
@property (nonatomic, assign) float imageQuality;

- (BOOL)takePhoto:(BOOL)bCamera;

@end
