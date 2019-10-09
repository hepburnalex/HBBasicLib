//
//  HBTextView.h
//  HBBasic
//
//  Created by Hepburn on 2019/1/14.
//  Copyright © 2019 ihope. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^ChangeTextHeight)(NSString *text, CGFloat height, BOOL autoChangeHeight); /**< 改变输入框高度回调 */

@interface HBTextView : UITextView

@property (nonatomic, copy) NSString *placeholder; /**< 占位文字 */
@property (nonatomic, strong) UIColor *placeholderColor; /**< 占位文字颜色 */
@property (nonatomic, assign) NSInteger numberOfLines; /**< 行数 0-无限行 */
@property (nonatomic, copy) ChangeTextHeight changeTextHeightBlock;  /**< 改变输入框高度回调 */

@end
