//
//  SAListModelManager.h
//
//
//  Created by Alex on 1/7/14.
//  Copyright (c) 2014 SAlex. All rights reserved.
//

#import "SABaseModelManager.h"

// list data process block
typedef id (^SAProcessListJSONBlock) (NSDictionary *objects);

/**
 *  List mode request manager
 */
@interface SAListModelManager : SABaseModelManager

// perpagesize
@property (nonatomic, readwrite) NSInteger perPageSize;

// is have more data
@property (nonatomic, readwrite, getter = isNextToEnd) BOOL nextToEnd;

// specific parameters
@property (nonatomic, strong) NSMutableDictionary *extraParam;

// per-page count and page-index
@property (nonatomic, readwrite)  NSInteger iLimit;
@property (nonatomic, readwrite)  NSInteger iOffset;

// refresh request process
@property (nonatomic, strong) SAProcessListJSONBlock refreshJsonBlock;

// loadMore request process
@property (nonatomic, strong) SAProcessListJSONBlock loadMoreJsonBlock;

// loadMore request
- (void)fetchNext;

@end
