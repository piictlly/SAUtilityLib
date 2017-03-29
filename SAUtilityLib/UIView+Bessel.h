//
//  UIView+Bessel.h
//  Weego
//
//  Created by Alex on 10/9/14.
//  Copyright (c) 2014 me.weego. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Bessel)

-(void)besselFromPoint:(CGPoint)fromPt
               toPoint:(CGPoint)toPt
              duration:(float)duration;

-(void)besselFromPoint:(CGPoint)fromPt
               toPoint:(CGPoint)toPt
              duration:(float)duration
               scaleTo:(float)scale;

@end
