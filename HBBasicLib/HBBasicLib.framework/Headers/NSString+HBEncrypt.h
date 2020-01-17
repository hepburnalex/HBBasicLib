//
//  NSString+Encrypt.h
//  HBBasicLib
//  加解密
//  Created by Hepburn on 2019/12/30.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (HBEncrypt)

/// MD5
@property (nonatomic, readonly) NSString *MD5String;

/// Base64加密
@property (nonatomic, readonly) NSString *base64EncString;

/// Base64解密
@property (nonatomic, readonly) NSData *base64DecData;
@property (nonatomic, readonly) NSString *base64DecString;

/// UrlEncode
@property (nonatomic, readonly) NSString *urlEncodeString;

/// UrlDecode
@property (nonatomic, readonly) NSString *urlDecodeString;
@end

NS_ASSUME_NONNULL_END
