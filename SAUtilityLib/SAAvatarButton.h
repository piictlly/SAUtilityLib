//
//  SAAvatarButton.h
//
//
//  Created by Alex on 6/12/14.
//  Copyright (c) 2014 SAlex. All rights reserved.
//

#import "SAUtilityHeader.h"

typedef enum {
  SAAvatarImageSize40,
} SAAvatarImageSize;

@interface SAAvatarButton : UIButton

@property (nonatomic, readwrite) BOOL maskEnabled;
@property (nonatomic, readonly, strong) NSString *uid;
@property (nonatomic, assign, readwrite) SAAvatarImageSize avatarSize;
@property (nonatomic, strong, readwrite) UIImage *placeholderImage;

- (id)initWithAvatarSize:(SAAvatarImageSize)avatarSize;

- (void)bindWithObject:(NSDictionary *)theObject;

@end
