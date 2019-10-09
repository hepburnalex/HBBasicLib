//
//  QRCodeView.h
//  eIDLedger
//
//  Created by Hepburn on 2018/7/25.
//  Copyright © 2018年 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QRCodeView : UIImageView

- (void)ShowQRCode:(NSString *)string color:(UIColor *)color size:(CGFloat)size;
- (void)ShowQRCode:(NSString *)string color:(UIColor *)color;
- (void)ShowQRCode:(NSString *)string;

@end
