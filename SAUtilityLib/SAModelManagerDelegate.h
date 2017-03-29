//
//  SAModelManagerDelegate.h
//  SAUtilitySource
//
//  Created by Alex on 10/15/14.
//  Copyright (c) 2014 SAlex Individual. All rights reserved.
//

/**
 *  Base class for server request returned process protocol to heritage
 */
@protocol SABaseModelManagerDelegate <NSObject>

@end

/**
 *  Single object returned process delegate
 */
@protocol SAObjectModelManagerDelegate <SABaseModelManagerDelegate>

- (void)objectModelFinishingLoading:(id)data
                          fromCache:(BOOL)isCache
                              error:(SAError *)error
                             sender:(id)sender;
@end

/**
 *  Array objects returned process delegate
 */
@protocol SAListModelManagerDelegate <SABaseModelManagerDelegate>

- (void)listModelFinishingRefresh:(id)data
                        fromCache:(BOOL)isCache
                            error:(SAError *)error
                           sender:(id)sender;

- (void)listModelFinishingLoadMore:(id)data
                         fromCache:(BOOL)isCache
                             error:(SAError *)error
                            sender:(id)sender;

@end

/**
 *  Base class for server request returned data base proecee protocal
 */
@protocol SABaseModelManagerProtocol <NSObject>

// to force implement
@required

// is sending request
@property (nonatomic, readwrite, getter = isLoading) BOOL loading;

// request URL
@property (nonatomic, strong, readonly) NSString *requestURL;

// send the request
- (void)fetch;

- (void)post;

- (void)put;

// cancel queued request
- (void)cancelFetching;

@end
