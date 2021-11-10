//
//  HBBasicLib.h
//  HBBasicLib
//
//  Created by Hepburn on 2019/7/1.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for HBBasicLib.
FOUNDATION_EXPORT double HBBasicLibVersionNumber;

//! Project version string for HBBasicLib.
FOUNDATION_EXPORT const unsigned char HBBasicLibVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <HBBasicLib/PublicHeader.h>



#ifndef HBBasicHeader_h
#define HBBasicHeader_h

/*
 * Utils
 */
#import <HBBasicLib/HBFaceIDManager.h>
#import <HBBasicLib/HBLocalNotificationManager.h>
#import <HBBasicLib/PhotoSelectManager.h>
#import <HBBasicLib/HBVideoManager.h>
#import <HBBasicLib/HBLanguageManager.h>
#import <HBBasicLib/HBLocationManager.h>
#import <HBBasicLib/HBContactManager.h>
#import <HBBasicLib/HBiCloudManager.h>

/*
 * BaseView
 */
#import <HBBasicLib/BaseADViewController.h>
#import <HBBasicLib/BaseTabBarViewController.h>
#import <HBBasicLib/BaseNavigationController.h>
#import <HBBasicLib/HBBaseViewController.h>
#import <HBBasicLib/HBBaseScrollViewController.h>
//#import <HBBasicLib/HBBaseWebViewController.h>
#import <HBBasicLib/HBBaseWebWKViewController.h>
#import <HBBasicLib/HBBasePageViewController.h>
#import <HBBasicLib/HBBaseVideoViewController.h>

/*
 * HBTableView
 */
#import <HBBasicLib/HBBaseTableView.h>
#import <HBBasicLib/HBBaseTableViewController.h>
#import <HBBasicLib/HBRefreshTableView.h>
#import <HBBasicLib/HBBaseTableViewCell.h>
#import <HBBasicLib/HBBaseEditTableViewCell.h>

/*
 * HBCollectionView
 */
#import <HBBasicLib/HBBaseCollectionViewCell.h>
#import <HBBasicLib/HBBaseCollectionViewController.h>
#import <HBBasicLib/HBBaseCollectionViewLayout.h>
#import <HBBasicLib/HBBaseCollectionReusableView.h>
#import <HBBasicLib/HBRefreshCollectionView.h>

/*
 * Model
 */
#import <HBBasicLib/BaseModel.h>
#import <HBBasicLib/BaseViewModel.h>
#import <HBBasicLib/LocalCacheViewModel.h>

/*
 * View
 */
#import <HBBasicLib/HBView.h>
#import <HBBasicLib/HBButton.h>
#import <HBBasicLib/HBLabel.h>
#import <HBBasicLib/HBAttributesLabel.h>
#import <HBBasicLib/HBSearchBar.h>
#import <HBBasicLib/HBNavigationBar.h>
#import <HBBasicLib/HBTextView.h>
#import <HBBasicLib/HBTextField.h>
#import <HBBasicLib/HBMoneyTextField.h>
#import <HBBasicLib/HBPageScrollView.h>
#import <HBBasicLib/HBTabButtonView.h>
#import <HBBasicLib/HBTabNavSelectView.h>
#import <HBBasicLib/HBTabScrollSelectView.h>
#import <HBBasicLib/HBCheckCodeView.h>
#import <HBBasicLib/NetImageView.h>
#import <HBBasicLib/UIImageView+Gif.h>
#import <HBBasicLib/QRCodeView.h>
#import <HBBasicLib/MTAlert.h>
#import <HBBasicLib/HBMasonry.h>
#import <HBBasicLib/CircleProgressView.h>
#import <HBBasicLib/HBCircleProgress.h>
#import <HBBasicLib/HBMoviePlayerView.h>
#import <HBBasicLib/HBDateTimeSelectView.h>
#import <HBBasicLib/HBPickerSelectView.h>
#import <HBBasicLib/HBMultiPickerSelectView.h>
#import <HBBasicLib/HBCommentView.h>
#import <HBBasicLib/HBPageAutoScrollView.h>

/*
 * Extend
 */
#import <HBBasicLib/UIImage+Extend.h>
#import <HBBasicLib/HBColor.h>
#import <HBBasicLib/NSString+HBDate.h>
#import <HBBasicLib/NSString+HBEncrypt.h>
#import <HBBasicLib/NSData+HBEncrypt.h>
#import <HBBasicLib/NSDate+HBCalendar.h>
#import <HBBasicLib/NSString+HBValidate.h>
#import <HBBasicLib/NSMutableAttributedString+Extend.h>
#import <HBBasicLib/NSArray+Extend.h>
#import <HBBasicLib/HBCleanCache.h>
#import <HBBasicLib/HBBasicHeader.h>

#endif /* HBBasicHeader_h */

