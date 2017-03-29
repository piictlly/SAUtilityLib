//
//  NSURL+SAAdditions.h
//
//
//  Created by SAlex on 20-9-14.
//  Copyright (c) 2014 SAlex. All rights reserved.
//

#import <Foundation/Foundation.h>

NSString * SAURLEncodedURLPath(NSString *path);

NSString * SAURLEncodedStringFromUnescapedStringWithEncoding(NSString *string, NSStringEncoding encoding);

NSString * SAQueryStringFromParametersWithEncoding(NSDictionary *parameters, NSStringEncoding encoding);

NSDictionary * SAParametersFromEscapedQueryStringWithEncoding(NSString *escapedQueryString, NSStringEncoding encoding);

NSString * SAUnescapedStringFromURLEncodedStringWithEncoding(NSString *string, NSStringEncoding encoding);

@interface NSURL (SAAdditions)

+ (NSURL *)URLWithBaseURL:(NSURL *)theBaseURL
                     path:(NSString *)thePath 
          queryDictionary:(NSDictionary *)theParameters;

- (NSDictionary *)queryDictionary;

@end
