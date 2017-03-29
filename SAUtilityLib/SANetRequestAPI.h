//
//  SANetRequestAPI.h
//  weego
//
//  Created by Alex on 13-11-12.
//  Copyright (c) 2013年 SAlex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>
#import <AFNetworking/AFHTTPRequestOperationManager.h>
#import <AFNetworking/UIButton+AFNetworking.h>
#import <AFNetworking/UIImageView+AFNetworking.h>

// direct returned from server
typedef void (^SANetCompletionBlock) (id theJSON, NSError *theError);

@interface SANetRequestAPI : AFHTTPRequestOperationManager

+ (instancetype)shared;

+ (instancetype)shared:(NSString *)baseURL;

// HTTP GET
- (id)get:(NSString *)path
    param:(NSDictionary *)param
   finish:(SANetCompletionBlock)block;

// HTTP PUT
- (id)put:(NSString *)path
    param:(NSDictionary *)param
   finish:(SANetCompletionBlock)block;

// HTTP POST
- (id)post:(NSString *)path
     param:(NSDictionary *)param
    finish:(SANetCompletionBlock)block;

@end
