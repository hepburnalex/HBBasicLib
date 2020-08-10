//
//  NSData+HBEncrypt.h
//  HBBasicLib
//
//  Created by Hepburn on 2020/8/3.
//  Copyright © 2020 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (HBEncrypt)

@property (nonatomic, readonly) NSString *base64EncString;

/// AES加密
/// @param data 待加密数据
/// @param key 密钥
+ (NSData *)AES128Encrypt:(NSData *)data key:(NSString *)key;

/// AES解密
/// @param data 待解密数据
/// @param key 密钥
+ (NSData *)AES128Decrypt:(NSData *)data key:(NSString *)key;

/// AES加密
/// @param key 密钥
- (NSData *)AES128EncryptData:(NSString *)key;

/// AES解密
/// @param key 密钥
- (NSData *)AES128DecryptData:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
