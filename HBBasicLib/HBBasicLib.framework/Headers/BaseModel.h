//
//  BaseModel.h
//  HBBaseClasses
//
//  Created by Hepburn on 2018/7/26.
//  Copyright © 2018年 Hepburn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseModel : NSObject

@property (nonatomic,copy) NSString *mID;
@property (nonatomic,copy) NSString *mHash;

+ (void)GetModel:(id)sender;

@end
