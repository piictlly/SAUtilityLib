//
//  SAActionSheet.h
//
//
//  Created by Alex on 13-11-26.
//  Copyright (c) 2013年 SAlex. All rights reserved.
//

#import "SAUtilityHeader.h"

typedef void (^SAActionSheetBlock)(NSString *buttonTitle);

@interface SAActionSheet : NSObject <UIActionSheetDelegate>

+ (void)showWithTitle:(NSString *)aTitle
      didDismissBlock:(SAActionSheetBlock)didDismissBlock
    cancelButtonTitle:(NSString *)theCancelButtonTitle
    destructiveButtonTitle:(NSString *)theDestructiveButtonTitle
    otherButtonTitles:(NSString *)otherButtonTitles, ... NS_REQUIRES_NIL_TERMINATION;

+ (void)showWithTitle:(NSString *)aTitle
      didDismissBlock:(SAActionSheetBlock)didDismissBlock
    otherButtonTitles:(NSString *)otherButtonTitles, ... NS_REQUIRES_NIL_TERMINATION;

+ (void)showWithTitle:(NSString *)aTitle  
    cancelButtonTitle:(NSString *)theCancelButtonTitle 
destructiveButtonTitle:(NSString *)theDestructiveButtonTitle 
    otherButtonTitles:(NSArray *)otherButtonTitles
      didDismissBlock:(SAActionSheetBlock)didDismissBlock;

+ (void)showWithTitle:(NSString *)aTitle
    otherButtonTitles:(NSArray *)otherButtonTitles
      didDismissBlock:(SAActionSheetBlock)didDismissBlock;

@end
