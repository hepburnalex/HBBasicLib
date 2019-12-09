//
//  HBPageScrollView.h
//  HBBasicLib
//
//  Created by Hepburn on 2018/10/18.
//  Copyright © 2018年 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HBPageScrollView;

@protocol HBPageScrollViewDelegate<NSObject>

- (NSInteger)numberOfPagesInScroll:(HBPageScrollView *)pageView;
- (UIView *)scrollPage:(HBPageScrollView *)pageView viewAtIndex:(NSInteger)index;

@optional
- (void)scrollPage:(HBPageScrollView *)pageView showPage:(UIView *)view manual:(BOOL)isManual;
- (void)scrollPage:(HBPageScrollView *)pageView hidePage:(UIView *)view;

@end

typedef enum {
    HBPageScrollType_Normal,
    HBPageScrollType_Scale
} HBPageScrollType;

typedef NS_OPTIONS(NSInteger, HBPageScrollDirection) {
    HBPageScrollDirection_Vertical   = 1 << 0,
    HBPageScrollDirection_Horizonal  = 1 << 1
};

@interface HBPageScrollView : UIView

@property (nonatomic, assign) id<HBPageScrollViewDelegate> delegate;
@property (nonatomic, assign) NSInteger currentIndex;
@property (nonatomic, assign) HBPageScrollType pageType;
@property (nonatomic, assign) HBPageScrollDirection pageDirection;
@property (nonatomic, readonly) NSInteger pageCount;

- (void)reloadData;
- (void)cleanScrollOffset;

@end
