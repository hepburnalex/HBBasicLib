//
//  Header.h
//  HBBasic
//
//  Created by Hepburn on 2019/7/1.
//  Copyright © 2019 Hepburn. All rights reserved.
//

#ifndef Header_h
#define Header_h

#define UIViewAutoresizingFlexibleFourMargin UIViewAutoresizingFlexibleLeftMargin|UIViewAutoresizingFlexibleRightMargin|UIViewAutoresizingFlexibleTopMargin|UIViewAutoresizingFlexibleBottomMargin

#define UIViewAutoresizingFlexibleFullMargin UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight

#ifndef kScreenWidth
#define kScreenWidth    [UIScreen mainScreen].bounds.size.width
#endif

#ifndef kScreenHeight
#define kScreenHeight   [UIScreen mainScreen].bounds.size.height
#endif
#define kStatusBarHeight    [[UIApplication sharedApplication] statusBarFrame].size.height

#define iOS_Version     [[UIDevice currentDevice] systemVersion].floatValue

#define kCurVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

#define WS(weakSelf)  __weak __typeof (&*self)weakSelf = self

//路径
#define kDocumentPath [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define kLibraryPath  [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define kCachesPath   [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) objectAtIndex:0]

//设置不同步icloud
#define AddSkipBackupAttributeToItemAtPath(filePathString) \
{ \
NSURL* URL= [NSURL fileURLWithPath: filePathString]; \
if([[NSFileManager defaultManager] fileExistsAtPath: [URL path]]){ \
[URL setResourceValue: [NSNumber numberWithBool: YES] forKey: NSURLIsExcludedFromBackupKey error: nil]; \
} \
}

///字体
#define UIBoldFont(a) [UIFont fontWithName:@"Helvetica-Bold" size:CGFloatAutoFit(a)]
#define UISystemFont(a) [UIFont systemFontOfSize:CGFloatAutoFit(a)]

#define CGFloatAutoFit(a) round(a*(MIN(kScreenWidth, kScreenHeight)/375.))
#define CGFAF(a) round(a*(MIN(kScreenWidth, kScreenHeight)/320.))

//图片
#define UIIMAGE_NAME(a) [UIImage imageNamed:a]

//颜色
#ifndef UICOLORHEX
#define UICOLORHEX(_hex_)   [UIColor colorWithHexStr:_hex_]
#endif

#define UICOLORWHITE(x)     [UIColor colorWithWhite:x alpha:1.0]

#define MAS_TOP(x, y)       make.top.mas_equalTo(x).offset(y)
#define MAS_LEFT(x, y)      make.left.mas_equalTo(x).offset(y)
#define MAS_BOTTOM(x, y)    make.bottom.mas_equalTo(x).offset(y)
#define MAS_RIGHT(x, y)     make.right.mas_equalTo(x).offset(y)
#define MAS_CENTERX(x, y)   make.centerX.mas_equalTo(x).offset(y)
#define MAS_CENTERY(x, y)   make.centerY.mas_equalTo(x).offset(y)
#define MAS_CENTER(x)       make.center.mas_equalTo(x)
#define MAS_WIDTH(x)        make.width.mas_equalTo(x)
#define MAS_HEIGHT(x)       make.height.mas_equalTo(x)
#define MAS_SIZE(x)         make.width.height.mas_equalTo(x)
#define MAS_SIZES(w, h)     make.width.mas_equalTo(w);make.height.mas_equalTo(h)
#define MAS_EDGES(x)        make.edges.mas_equalTo(x)

#define MAS_LARGERWIDTH(x)  make.width.greaterThanOrEqualTo(x)
#define MAS_LARGERHEIGHT(x) make.height.greaterThanOrEqualTo(x)
#define MAS_LESSWIDTH(x)    make.width.lessThanOrEqualTo(x)
#define MAS_LESSHEIGHT(x)   make.height.lessThanOrEqualTo(x)

#define MAS_TOPBOTTOM(x, y)         make.top.bottom.mas_equalTo(x).offset(y)
#define MAS_LEFTRIGHT(x, y)         make.left.right.mas_equalTo(x).offset(y)
#define MAS_TOPLEFT(x, y)           make.top.left.mas_equalTo(x).offset(y)
#define MAS_TOPRIGHT(x, y)          make.top.right.mas_equalTo(x).offset(y)
#define MAS_TOPLEFTRIGHT(x, y)      make.top.left.right.mas_equalTo(x).offset(y)
#define MAS_BOTTOMLEFT(x, y)        make.bottom.left.mas_equalTo(x).offset(y)
#define MAS_BOTTOMRIGHT(x, y)       make.bottom.right.mas_equalTo(x).offset(y)
#define MAS_BOTTOMLEFTRIGHT(x, y)   make.bottom.left.right.mas_equalTo(x).offset(y)
#define MAS_FOURFIT(x)              make.top.bottom.left.right.mas_equalTo(x)

#define MAS_HORVIEWS(_width, _padding, _views, _root) [HBMasonry mas_HorizontalViews:_width :_padding :_views :_root]



#endif /* Header_h */
