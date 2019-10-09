//
//  BaseViewModel.h
//  HBBasic
//
//  Created by Hepburn on 2019/1/3.
//  Copyright © 2019 ihope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseViewModel : NSObject {
    
}

@property (nonatomic, assign) NSInteger page;
@property (nonatomic, weak) UIViewController *rootCtrl;
@property(nonatomic,strong) NSMutableArray *models;
@property(nonatomic,copy) void(^OnLoadListFinish)(BOOL bNoMore);
@property(nonatomic,copy) void(^OnLoadFinish)(int iType);
@property(nonatomic,copy) void(^OnLoadFail)(void);


- (id)initWithRoot:(UIViewController *)rootCtrl;

@end
