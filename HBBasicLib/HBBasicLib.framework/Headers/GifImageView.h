//
//  GifImageView.h
//  HBBaseClasses
//
//  Created by Hepburn on 2019/6/5.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - GifImageInfo

@interface GifImageInfo : NSObject

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, assign) float width;
@property (nonatomic, assign) float height;
@property (nonatomic, assign) float delayTime;

@end

#pragma mark - GifImageView

@interface GifImageView : UIImageView

- (void)LoadGifImage:(NSString *)path;
+ (void)makeGif:(NSArray<GifImageInfo *> *)images output:(NSString *)path;
+ (void)makeVideoGif:(NSString *)videoPath start:(float)startTime duration:(float)duration output:(NSString *)path completion:(void (^)(void))block;
@end

NS_ASSUME_NONNULL_END
