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

/// SHA1
@property (nonatomic, readonly) NSString *SHA1String;

/// Base64加密
@property (nonatomic, readonly) NSString *base64EncString;

/// Base64解密
@property (nonatomic, readonly) NSData *base64DecData;
@property (nonatomic, readonly) NSString *base64DecString;

/// UrlEncode
@property (nonatomic, readonly) NSString *urlEncodeString;

/// UrlDecode
@property (nonatomic, readonly) NSString *urlDecodeString;

/// HMAC-SHA1加密
- (NSData *)HMACSHA1Encrypt:(NSString *)secret;

/// MD5
+ (NSString *)MD5EncryptText:(NSString *)text;

/// DES/ECB/PKCS5Padding解密
- (NSString *)DESECBDecrypt:(NSString*)key;

/// DES/CBC/PKCS5Padding解密
- (NSString *)DESCBCDecrypt:(NSString*)key iv:(NSString *)iv;

/// DES/ECB/PKCS5Padding加密
- (NSString *)DESECBEncrypt:(NSString *)key;

/// DES/CBC/PKCS5Padding加密
- (NSString *)DESCBCEncrypt:(NSString *)key iv:(NSString *)iv;

@end

NS_ASSUME_NONNULL_END
