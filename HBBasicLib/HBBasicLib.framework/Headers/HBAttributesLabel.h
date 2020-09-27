//
//  HBAttributesLabel.h
//  HBBasicLib
//
//  Created by Hepburn on 2020/8/20.
//  Copyright © 2020 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol RichTextDelegate <NSObject>

@optional

- (void)didClickRichText:(NSString *)string range:(NSRange)range index:(NSInteger)index;

@end

@interface HBAttributesLabel : UILabel

@property (nonatomic, assign) BOOL enabledClickEffect;
@property (nonatomic, strong) UIColor *clickEffectColor;
@property (nonatomic, strong) id<RichTextDelegate> delegate;
 
- (void)clickRichTextWithStrings:(NSArray <NSString *> *)strings clickAction:(void(^)(NSString *string, NSRange range, NSInteger index))clickAction;

- (void)clickRichTextWithStrings:(NSArray <NSString *> *)strings delegate:(id<RichTextDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
