//
//  SABrowserController.h
//
//
//  Created by Alex on 13-11-26.
//  Copyright (c) 2013年 SAlex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "SAUtilityHeader.h"

@interface SABrowserController : UIViewController <UIWebViewDelegate>

@property (nonatomic, strong, readwrite) UIWebView *webView;

@property (nonatomic, strong, readwrite) UIBarButtonItem *backButtonItem;
@property (nonatomic, strong, readwrite) UIBarButtonItem *forwardButtonItem;
@property (nonatomic, strong, readwrite) UIBarButtonItem *stopButtonItem;
@property (nonatomic, strong, readwrite) UIBarButtonItem *refreshButtonItem;
@property (nonatomic, strong, readwrite) UIBarButtonItem *moreActionButtonItem;
@property (nonatomic, strong, readwrite) UIBarButtonItem *loadingActivityIndicatorItem;

- (void)openURL:(NSURL*)URL;

- (void)openRequest:(NSURLRequest*)request;

@property (nonatomic, readonly) NSURL *URL;

@end
