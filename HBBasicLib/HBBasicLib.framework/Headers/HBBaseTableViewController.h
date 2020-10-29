//
//  HBBaseTableViewController.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/6/12.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <HBBasicLib/HBBaseViewController.h>
#import <HBBasicLib/HBRefreshTableView.h>

NS_ASSUME_NONNULL_BEGIN

@protocol HBBaseTableViewControllerDelegate <NSObject>

@optional

/// 选中Cell时的事件
- (void)OnTableCellSelect:(NSIndexPath *)indexPath :(id)model;
/// 创建Cell时的事件
- (void)OnTableCellCreate:(UITableViewCell *)cell;
/// 加载Cell的model时的事件
- (void)OnTableCellLoad:(UITableViewCell *)cell index:(NSIndexPath *)indexPath model:(id)model;
/// 删除Cell的事件
- (void)OnTableCellDelete:(NSIndexPath *)indexPath :(id)model;

/// 重新加载
- (void)reloadTable;
/// 加载更多
- (void)loadMoreTable;

/// cell菜单按钮点击事件
- (void)OnTableCellEditActionSelect:(NSIndexPath *)indexPath model:(id)model title:(NSString *)title;

/// cell菜单按钮颜色
- (NSArray<UIColor *> *)tableViewEditActionsTitleColor:(NSIndexPath *)indexPath;

/// cell菜单按钮标题
- (NSArray<NSString *> *)tableViewEditActionsTitle:(NSIndexPath *)indexPath;

/// 是否启用cell菜单按钮
- (BOOL)tableViewEditActionsEnable:(NSIndexPath *)indexPath;

@end

@interface HBBaseTableViewController : HBBaseViewController<UITableViewDelegate, UITableViewDataSource, HBBaseTableViewControllerDelegate>

@property (nonatomic, strong) UIView *backView;
@property (nonatomic, strong) HBRefreshTableView *tableView;
@property (nonatomic, strong, nullable) UIView *tableHeaderView;
@property (nonatomic, assign) BOOL isShowHeader;
@property (nonatomic, assign) BOOL isShowFooter;
@property (nonatomic, assign) BOOL isShowSeparatorLine;
@property (nonatomic, assign) BOOL isShowCorner;
@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) CGFloat sectionHeaderHeight;
@property (nonatomic, assign) CGFloat sectionFooterHeight;

/// 注册cell
- (void)registerCellClass:(NSString *)classname;
- (void)registerCellClass:(NSString *)classname forSection:(NSInteger)section;
/// 刷新页面
- (void)reloadData;
/// 加载完毕后刷新
- (void)refreshView:(BOOL)bNoMore;
/// 追加Model
- (void)addModel:(id)model forSection:(NSInteger)section;
- (void)addModels:(NSArray *)models forSection:(NSInteger)section;
/// 加载Model
- (void)loadModels:(NSArray *)models forSection:(NSInteger)section;
/// 清除Model
- (void)cleanModelsForSection:(NSInteger)section;
- (void)cleanAllModels;

@end

NS_ASSUME_NONNULL_END
