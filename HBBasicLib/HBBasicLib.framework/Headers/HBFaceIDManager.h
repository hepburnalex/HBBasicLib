//
//  HBFaceIDManager.h
//  HBBasicLib
//  人脸/指纹扫描管理
//  Created by Hepburn on 2019/10/8.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBFaceIDManager : NSObject

@property (nonatomic, assign) BOOL isFaceIDEnable;

+ (instancetype)instance;
- (BOOL)checkValidate;
- (BOOL)showFaceIDView;

@end

NS_ASSUME_NONNULL_END

#define kMsg_FaceIDSuccess  @"kMsg_FaceIDSuccess"
