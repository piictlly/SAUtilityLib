//
//  UIViewController+SAConvenient.h
//
//
//  Created by Alex on 6/12/14.
//  Copyright (c) 2014 SAlex. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SANavigationController;

@interface UIViewController (SAConvenient)

- (SANavigationController *)wrappedByNavigationController;

@end
