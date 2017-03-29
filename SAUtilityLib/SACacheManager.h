//
//  SAMemCache.h
//  Weego
//
//  Created by Alex on 8/3/14.
//  Copyright (c) 2014 me.weego. All rights reserved.
//

#import <Foundation/Foundation.h>

// save data to cache block
typedef void (^SABooleanCompletionBlock)(BOOL result, NSError *error);

// fetch from cache
typedef void (^SAFetchFromCacheCompletionBlock)(id obj, NSError *error);

@interface SACacheManager : NSObject

+ (instancetype)shared;

// fetch objects from TMCache
- (void)getObjectForKey:(NSString *)theCachekey
         withCompletion:(SAFetchFromCacheCompletionBlock)completion;

// save objects to TMCache
- (void)saveObject:(id)object
            forKey:(NSString *)theCachekey
        completion:(SABooleanCompletionBlock)completion;

// clean TMCache
+ (void)removeAll;

// remove speical cache
+ (void)removeByCacheKey:(NSString *)theCacheKey;

@end
