//
//  SAAlertView.h
//  
//
//  Created by Alex on 6/12/14.
//  Copyright (c) 2014 SAlex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^SAAlertViewBlock)(void);

typedef void (^SAAlertViewWithTextInputBlock)(NSString *in1, NSString *in2);

/**
 Blocks based alert view. Substitution of `UIAlertView`.
 */
@interface SAAlertView : NSObject <UIAlertViewDelegate>

/**
 Shows alert view on the window with given title, message, button titles, 
 confirmation and cancellation blocks.
 */
+ (void)showWithTitle:(NSString *)aTitle 
              message:(NSString *)aMessage
    cancelButtonTitle:(NSString *)aCancelButtonTitle
   confirmButtonTitle:(NSString *)aConfirmButtonTitle
         confirmation:(SAAlertViewBlock)aConfirmation
         cancellation:(SAAlertViewBlock)aCancellation;

/**
 This is a convenience method that calls 
 `-showWithTitle:message:cancelButtonTitle:confirmButtonTitle:confirmation:cancellation`
 with "确定" as confirm button title and "取消" as cancel button title.
 */
+ (void)showWithTitle:(NSString *)aTitle 
              message:(NSString *)aMessage 
         confirmation:(SAAlertViewBlock)aConfirmation
         cancellation:(SAAlertViewBlock)aCancellation;

/**
 This is a convenience method that 
 add alert view style support
 */
+ (void)showWithTitle:(NSString *)aTitle
              message:(NSString *)aMessage
            alertType:(UIAlertViewStyle)aStyle
         confirmation:(SAAlertViewWithTextInputBlock)aConfirmation
         cancellation:(SAAlertViewBlock)aCancellation;

+ (void)showWithError:(NSError *)error;

@end
