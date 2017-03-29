//
//  SABaseModelManager.h
//
//
//  Created by Alex on 13-11-12.
//  Copyright (c) 2013年 SAlex. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SANetRequestAPI.h"
#import "SACacheManager.h"
#import "SAError.h"
#import "SAModelManagerDelegate.h"

// common process server returned data
typedef id (^SAProcessJSONBlock) (id jsonData);

// query single object from api
typedef void (^SAObjectCompletionBlock)(id object, BOOL isFromCache, NSError *error);

// query array object from api
typedef void (^SAArrayCompletionBlock)(NSArray *array, BOOL isFromCache, NSError *error);

/**
 *  Server request returned data base class
 */
@interface SABaseModelManager : NSObject<SABaseModelManagerProtocol>

// base url *must set*
@property (nonatomic, strong) NSString *baseURL;

// result key
@property (nonatomic, strong) NSString *resultKey;

// net request for cancelFetching method
@property (nonatomic, readwrite, strong) AFHTTPRequestOperation *request;

@property (nonatomic, readwrite, copy)   NSString *path;

// salex cache manager
@property (nonatomic, strong, readwrite) SACacheManager *cacheManager;

@property (nonatomic, readwrite, assign) BOOL useCache;

@property (nonatomic, readwrite, weak) id<SABaseModelManagerDelegate> delegate;

// request param
@property (nonatomic, strong, readwrite) NSMutableDictionary *parameters;

// business-specific process returned data
@property (nonatomic, copy) SAProcessJSONBlock jsonBlock;

// setup request URL
- (id)initWithPath:(NSString *)thePath useCache:(BOOL)useCache;

// expose for 子类
-(void)delegateLoading:(id)data
             fromCache:(BOOL)fromCache
                 error:(SAError *)error
                sender:(SABaseModelManager*)sender;

@end
