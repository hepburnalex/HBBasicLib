//
//  HBBaseCollectionViewController.h
//  HBCollectionView
//
//  Created by Hepburn on 2018/12/20.
//  Copyright © 2018 Hepburn. All rights reserved.
//

#import "HBBaseViewController.h"
#import "HBRefreshCollectionView.h"
#import "HBBaseCollectionViewLayout.h"
#import "HBBaseCollectionReusableView.h"
#import "HBBaseCollectionViewCell.h"

NS_ASSUME_NONNULL_BEGIN

@protocol HBBaseCollectionViewControllerDelegate <NSObject>

@optional
// cell点击事件
- (void)onCollectionCellSelect:(NSIndexPath *)indexPath :(id)model;
// cell加载事件
- (void)onCollectionCellLoad:(HBBaseCollectionViewCell *)cell :(NSIndexPath *)indexPath :(id)model;
// header加载事件
- (void)onCollectionHeaderLoad:(HBBaseCollectionReusableView *)headerView :(NSIndexPath *)indexPath;
// footer加载事件
- (void)onCollectionFooterLoad:(HBBaseCollectionReusableView *)footerView :(NSIndexPath *)indexPath;
// 重新加载
- (void)reloadCollection;
// 加载更多
- (void)loadMoreCollection;

@end

@interface HBBaseCollectionViewController : HBBaseViewController<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HBBaseCollectionViewControllerDelegate>

@property (nonatomic, strong) UIView *backView;
@property (nonatomic, strong) HBRefreshCollectionView *collectionView;
@property (nonatomic, assign) BOOL isShowHeader;
@property (nonatomic, assign) BOOL isShowFooter;

// 加载布局
- (HBBaseCollectionViewLayout *)loadCollectionViewLayout:(NSString *)layoutname;
// 加载布局
- (void)loadCollectionLayout:(UICollectionViewLayout *)layout;
// 加载默认布局
- (void)loadDefaultLayout:(CGSize)size :(UIEdgeInsets)edgeInset;
// 加载模型
- (void)loadSectionModels:(NSArray *)models cellname:(NSString *)cellname section:(NSInteger)section;
// 加载模型
- (void)loadSectionModels:(NSArray *)models cellname:(NSString *)cellname section:(NSInteger)section header:(NSString *__nullable)header footer:(NSString *__nullable)footer;
// 清空模型
- (void)cleanModels;
// 刷新页面
- (void)reloadData;
// 加载完毕后刷新
- (void)refreshView:(BOOL)bNoMore;

@end

NS_ASSUME_NONNULL_END
