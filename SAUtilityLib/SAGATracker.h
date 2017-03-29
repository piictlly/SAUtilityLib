//
//  SAGATracker.h
//
//
//  Created by Alex on 7/23/14.
//  Copyright (c) 2014 SAlex. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SAUtilityHeader.h"

@interface SAGATracker : NSObject

/**
 *  global tracker object
 *
 *  @return singleton object
 */
+ (SAGATracker *)shared:(NSString *)trackID;

/**
 *  track view
 *
 *  @param screenName view`s name
 */
- (void)trackView:(NSString *)screenName;

/**
 *  track url like 'http://some.server/login'
 *
 *  @param modelURLString url
 */
- (void)trackModelURL:(NSString *)modelURLString;

/**
 *  track special event, like button click event.
 *
 *  @param category for login event, category can be 'Login'
 *  @param action   for button event, action is 'click'
 *  @param label    for button event, label is 'email login'
 *  @param value    for button event, value can be a retry times
 */
- (void)trackEventWithCategory:(NSString *)category
                        action:(NSString *)action
                         label:(NSString *)label
                         value:(NSNumber *)value;

/**
 *  track social share etc.
 *
 *  @param snsName like 'twitter'
 *  @param action  like 'share'
 *  @param target  like '@somebody'
 */
- (void)trackSocialWithName:(NSString *)snsName
                     action:(NSString *)action
                     target:(NSString *)target;

@end
