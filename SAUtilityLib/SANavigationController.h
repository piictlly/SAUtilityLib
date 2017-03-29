//
//  SANavigationController.h
//
//
//  Created by Alex on 6/12/14.
//  Copyright (c) 2014 SAlex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SANavigationController : UINavigationController <UIGestureRecognizerDelegate>

@property (nonatomic,assign) BOOL isMoving;
@property (nonatomic,assign) BOOL isRightDirection_;
@property (nonatomic,assign) BOOL canDrunk;

@end
