//
//  SAUtilityHeader.h
//  SAUtilitySource
//
//  Created by Alex on 10/15/14.
//  Copyright (c) 2014 SAlex Individual. All rights reserved.
//

/**
 *  This repo is collection of utility method and network request.
 */

#import <Availability.h>

#ifndef __IPHONE_3_0
#warning "This project uses features only available in iOS SDK 3.0 and later."
#endif

#ifdef __OBJC__
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#endif

/// networking
#import <AFNetworking/AFNetworking.h>
#import <AFNetworking/AFHTTPRequestOperationManager.h>
#import <AFNetworking/UIButton+AFNetworking.h>
#import <AFNetworking/UIImageView+AFNetworking.h>

/// Memory Cache
#import <TMCache/TMCache.h>

/// popup tip view
#import <MBProgressHUD/MBProgressHUD.h>

// Google Analytics
#import <GAI.h>
#import <GAIFields.h>
#import <GAIDictionaryBuilder.h>

// UIDevice extension
#import <UIDevice-Hardware/UIDevice-Hardware.h>

#import "SADefines.h"
#import "SACacheManager.h"
#import "SANetRequestAPI.h"
#import "SABaseModelManager.h"
#import "SAObjectModelManager.h"
#import "SAListModelManager.h"
#import "SAError.h"
#import "SAAvatarButton.h"
#import "SANavigationController.h"
#import "SANavTabView.h"
#import "SAViewController.h"
#import "MBProgressHUD+SAAdditions.h"
#import "NSURL+SAAdditions.h"
#import "SAActionSheet.h"
#import "SAAlertView.h"
#import "SABrowserController.h"
#import "SAGATracker.h"
#import "SAStyleSheet.h"
#import "UIButton+Extensions.h"
#import "UIColor+Expanded.h"
#import "UIView+Bessel.h"
#import "UIView+SAAdditions.h"
#import "UIViewController+SAConvenient.h"
