//
//  SAStyleSheet.h
//
//
//  Created by Alex on 13-11-22.
//  Copyright (c) 2013年 SAlex. All rights reserved.
//

#import "SAUtilityHeader.h"

typedef enum {
  SAStyleFontSize10,    // 10px
  SAStyleFontSize11,    // 11px
  SAStyleFontSize12,    // 12px
  SAStyleFontSize13,    // 13px
  SAStyleFontSize14,    // 14px
  SAStyleFontSize15,    // 15px
  SAStyleFontSize16,
  SAStyleFontSize17,
  SAStyleFontSize18,
  SAStyleFontSize19,
  SAStyleFontSize20,
  SAStyleFontSize21,
  SAStyleFontSize22,
    SAStyleFontSize23,
    SAStyleFontSize24,
    SAStyleFontSize25,
    SAStyleFontSize26
} SAStyleFontSize;

@interface UIFont (SAStyle)

+ (UIFont *)SAFontWithSize:(SAStyleFontSize)fontSize;

+ (UIFont *)SABoldVVFontWithSize:(SAStyleFontSize)fontSize;

@end
