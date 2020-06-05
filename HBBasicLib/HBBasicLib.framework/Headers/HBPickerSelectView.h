//
//  HBPickerSelectView.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/10/31.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 单列选择控件
@interface HBPickerSelectView : UIView<UIPickerViewDelegate, UIPickerViewDataSource>

/// 选中的文字
@property (nonatomic, readonly) NSString *selectTitle;
/// 选中的索引
@property (nonatomic, assign) NSInteger selectIndex;
/// 展示的文字
@property (nonatomic, strong) NSArray *pickerTitles;
/// 字体
@property (nonatomic, strong) UIFont *textFont;
/// 文字颜色
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIPickerView *pickerView;
/// 选中事件
@property (nonatomic, strong) void(^OnPickerSelect)(HBPickerSelectView *sender, NSInteger index);


/// 加载展示的文字列表
/// @param titles 文字列表
- (void)reloadTitles:(NSArray *)titles;

@end

NS_ASSUME_NONNULL_END
