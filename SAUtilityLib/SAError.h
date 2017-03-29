//
//  SAError.h
//
//
//  Created by Alex on 13-11-13.
//  Copyright (c) 2013年 SAlex. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  业务自定义错误定义
 */
@interface SAError : NSError

+ (id)emptyAPIURLError;

+ (id)pagingError;

+ (id)emptyJSONError;

+ (id)emptyQueryStringError;

+ (id)emptyObjectError;

+ (id)userNotLoggedInError;

- (id)initWithProperties:(NSDictionary *)aDictionary;

- (id)initWithJSON:(id)theJSON;

- (id)initWithError:(NSError *)anError;

- (id)initWithErrorCode:(NSInteger)anErrorCode
                message:(NSString *)aMessage;

@end
