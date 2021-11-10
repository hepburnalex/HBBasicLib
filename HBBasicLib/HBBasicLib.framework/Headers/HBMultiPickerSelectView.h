//
//  HBMultiPickerSelectView.h
//  HBBasicLib
//
//  Created by Hepburn on 2021/11/2.
//  Copyright © 2021 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HBMultiPickerSelectView : UIView<UIPickerViewDelegate, UIPickerViewDataSource>

/// 列数
@property (nonatomic, assign) NSInteger columnCount;

@property (nonatomic, strong) UIPickerView *pickerView;
/// 选中的索引
@property (nonatomic, strong) NSArray<NSNumber *> *selectIndexs;
/// 字体
@property (nonatomic, strong) UIFont *textFont;
/// 文字颜色
@property (nonatomic, strong) UIColor *textColor;
/// 获取每列的文字
@property (nonatomic, strong) NSArray *(^titlesInComponent)(NSInteger index);
/// 选中事件
@property (nonatomic, strong) void(^onPickerSelect)(HBMultiPickerSelectView *sender, NSArray<NSNumber *> *selectIndexs);

/// 加载展示的文字列表
- (void)reloadTitles;

@end

NS_ASSUME_NONNULL_END
