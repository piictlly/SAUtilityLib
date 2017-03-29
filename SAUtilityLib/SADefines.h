//
//  SADefines.h
//
//
//  Created by Alex on 6/12/14.
//  Copyright (c) 2014 SAlex. All rights reserved.
//

#import "SAUtilityHeader.h"

#ifndef SAlex_SADefines_h
#define SAlex_SADefines_h

/// compare iOS Version
NSUInteger SASystemVersion();
#define SAIOS7 (SASystemVersion() >= 7)

/// app name & version & build_version
#define kSAAPPVERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define kSABUILDVERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]
#define kSAAPPName [[[NSBundle mainBundle] localizedInfoDictionary] objectForKey:@"CFBundleDisplayName"]
#define kSAAPPBUNDLEID [[NSBundle mainBundle] bundleIdentifier]

/// LocalizedString
#define _T(s) NSLocalizedString(@#s, @#s)

/// NSString format
#define SA_FORMAT(args...) [NSString stringWithFormat:args]

/// NSString compare
#define SA_STR_EQ(a, b) [a isEqualToString:b]
#define SA_STR_IS_EMPTY(a) (a == nil || STR_EQ(a, @""))

/// Status Bar height
#define kSAStatusBarHeight [UIApplication sharedApplication].statusBarFrame.size.height

/// Screen width & height
#define kSASCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define kSASCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

/// crashlytics

/// AVOSCloud

/// Google analytics

///-----------
/// Only print under Debug Mode NSLog(...).
///-----------

#ifdef DEBUG
#   define DLog(fmt, ...) {NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);}
#else
#   define DLog(...)
#endif

///--------------
/// Call Blocks if not nil.
///--------------

#define SAExecuteBlockIfNotNil(__KB_Block__, ...) { if (__KB_Block__) __KB_Block__(__VA_ARGS__); }

///--------------
/// GCD convenience.
///--------------

#define SAGCD_BACK(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block)
#define SAGCD_MAIN(block) dispatch_async(dispatch_get_main_queue(),block)

///--------------
/// NSURL convenience.
///--------------
#define URLFromStr(str)   [NSURL URLWithString:str]

///--------------
/// NSNotificationCenter method.
///--------------
void SAEvent(NSString *eventName,id data);
void SAListenEvent(NSString *eventName,id target,SEL method);
void SAForgetEvent(NSString *eventName,id target);

///--------------
/// Snap current screen
///--------------
UIImage *takeScreenshotAndClipIt();

///--------------
/// UIImage rotate
///--------------
UIImage* image_rotate(UIImage* src, UIImageOrientation orientation);

///--------------
/// 检测是否是简中语言设置
///--------------
BOOL isZHCNEnv();

///--------------
/// 格式化日期为特定字串
///--------------
NSString *SADateFormatter(NSTimeInterval selectedDate);

///--------------
/// 越狱设备
///--------------
BOOL isYueyu();

///--------------
/// 是否登录用户
///--------------
BOOL isLoggedUser();

///--------------
/// 是否需要显示向导页面
///--------------
BOOL isNeedWelcome();

///--------------
/// 返回已安装过的 APP 版本
///--------------
NSInteger getInstalledBuildCode();

#endif
