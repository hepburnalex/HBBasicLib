//
//  PhotoSelectManager.h
//  HBBasic
//
//  Created by Hepburn Alex on 13-5-30.
//  Copyright (c) 2013年 Hepburn Alex. All rights reserved.
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

- (BOOL)TakePhoto:(BOOL)bCamera;

@end
