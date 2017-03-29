//
//  MBProgressHUD+SAAdditions.h
//  
//
//  Created by Alex on 6/12/14.
//  Copyright (c) 2014 SAlex. All rights reserved.
//

#import "MBProgressHUD.h"

@interface MBProgressHUD (SAAdditions)

+ (MBProgressHUD *)showHUDAddedWithMessage:(NSString *)message
                              theSuperView:(UIView *)view
                                  animated:(BOOL)animated;

+ (void)hideHUDForViewWithStatus:(BOOL)isSuccess
                         message:(NSString *)message
                    theSuperView:(UIView *)view
                        animated:(BOOL)animated;

@end
