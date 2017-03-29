//
//  SANavTabView.h
//
//
//  Created by Alex on 10/9/14.
//  Copyright (c) 2014 SAlex. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SAUtilityHeader.h"

typedef enum {
  SANavTabViewUseButtonTypeOnlyLeft = 0,
  SANavTabViewUseButtonTypeLeftAndRight,
  SANavTabViewUseButtonTypeAll
} SANavTabViewUseButtonType;

@protocol SANavTabViewDelegate;

/**
 *  NavTitleButton
 */
@interface SANavTabView : UIView

@property (nonatomic, strong, readwrite) UIButton *leftTabButton;
@property (nonatomic, strong, readwrite) UIButton *middleTabButton;
@property (nonatomic, strong, readwrite) UIButton *rightTabButton;

@property (nonatomic, readwrite, weak) id <SANavTabViewDelegate> delegate;

/**
 *  use Left or Left + Right or Left + Middle + Right
 *
 *  @param type @SANavTabViewUseButtonType
 */
- (void)setUseButtonType:(SANavTabViewUseButtonType)aType;

- (void)didClickLeftTabButton:(UIButton *)button;
- (void)didClickMiddleTabButton:(UIButton *)button;
- (void)didClickRightTabButton:(UIButton *)button;

@end

@protocol SANavTabViewDelegate <NSObject>

@required
- (void)tabView:(SANavTabView *)tabView didClickLeftButton:(UIButton *)theLeftButton;
- (void)tabView:(SANavTabView *)tabView didClickMiddleButton:(UIButton *)theMiddleButton;
- (void)tabView:(SANavTabView *)tabView didClickRightButton:(UIButton *)theRightButton;

@end
