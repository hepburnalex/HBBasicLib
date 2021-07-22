//
//  HBContactManager.h
//  HBBasicLib
//
//  Created by Hepburn on 2021/1/20.
//  Copyright © 2021 Hepburn. All rights reserved.
//

#define USE_CONTACT


#import <Foundation/Foundation.h>

#ifdef USE_CONTACT
#import <ContactsUI/ContactsUI.h>
#endif

/// 通讯录管理
NS_ASSUME_NONNULL_BEGIN

@class HBContactManager;

@interface HBContactManager : NSObject

#ifdef USE_CONTACT
@property (nonatomic, strong, nullable) void(^didSelectContact)(CNMutableContact *selectContact);

+ (instancetype)instance;

/// 通讯录权限检查
/// @param block 回调
- (void)checkAddressBookAuthorization:(void (^)(bool isAuthorized))block;

/// 创建联系人记录
/// @param familyName 姓
/// @param givenName 名
/// @param mobiles 手机号
/// @param company 公司名
/// @param email 邮箱
/// @param address 地址
- (CNMutableContact *)createContact:(NSString *)familyName givenName:(NSString *)givenName mobiles:(NSArray *)mobiles company:(NSString *)company email:(NSString *)email address:(NSString *)address;

/// 编辑联系人记录
/// @param contact 联系人
/// @param familyName 姓
/// @param givenName 名
/// @param mobiles 手机号
/// @param company 公司名
/// @param email 邮箱
/// @param address 地址
- (void)updateContact:(CNMutableContact *)contact familyName:(NSString *)familyName givenName:(NSString *)givenName mobiles:(NSArray *)mobiles company:(NSString *)company email:(NSString *)email address:(NSString *)address;

/// 保存联系人到通讯录
/// @param contact 联系人
- (void)saveContact:(CNMutableContact *)contact;

/// 检索通讯录所有名字中姓氏包含关键字的联系人并删除
/// @param keyword 关键字
- (void)deleteContactByFamilyName:(NSString *)keyword;

/// 获取联系人列表
- (NSArray<CNContact *> *)getContactList:(NSString *)keyword;

/// 显示联系人页面
/// @param rootCtrl 父页面
/// @param contact 联系人
- (void)showContactView:(UIViewController *)rootCtrl contact:(CNMutableContact *)contact;

/// 显示联系人选择页面
/// @param rootCtrl 父页面
- (void)showContactPicker:(UIViewController *)rootCtrl;

#endif

@end

NS_ASSUME_NONNULL_END
