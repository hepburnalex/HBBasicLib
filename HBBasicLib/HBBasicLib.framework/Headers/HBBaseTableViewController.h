//
//  HBBaseTableViewController.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/6/12.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import "BaseADViewController.h"
#import "HBRefreshTableView.h"

NS_ASSUME_NONNULL_BEGIN

@protocol HBBaseTableViewControllerDelegate <NSObject>

@optional
/* 选中Cell时的事件 */
- (void)OnTableCellSelect:(NSIndexPath *)indexPath :(id)model;
/* 创建Cell时的事件 */
- (void)OnTableCellCreate:(UITableViewCell *)cell;
/* 加载Cell的model时的事件 */
- (void)OnTableCellLoad:(UITableViewCell *)cell index:(NSIndexPath *)indexPath model:(id)model;
/* 重新加载 */
- (void)reloadTable;
/* 加载更多 */
- (void)loadMoreTable;

@end

@interface HBBaseTableViewController : BaseADViewController<UITableViewDelegate, UITableViewDataSource, HBBaseTableViewControllerDelegate>

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

/* 注册cell */
- (void)registerCellClass:(NSString *)classname;
- (void)registerCellClass:(NSString *)classname forSection:(NSInteger)section;
/* 刷新页面 */
- (void)reloadData;
/* 加载完毕后刷新 */
- (void)refreshView:(BOOL)bNoMore;

/* Model操作 */
- (void)addModel:(id)model forSection:(NSInteger)section;
- (void)addModels:(NSArray *)models forSection:(NSInteger)section;
- (void)loadModels:(NSArray *)models forSection:(NSInteger)section;
- (void)cleanModelsForSection:(NSInteger)section;
- (void)cleanAllModels;

/// 添加TopView
/// @param topView 顶部View
/// @param height 高度
- (void)addTopView:(UIView *)topView height:(CGFloat)height;

/// 添加BottomView
/// @param bottomView 底部View
/// @param height 高度
- (void)addBottomView:(UIView *)bottomView height:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
