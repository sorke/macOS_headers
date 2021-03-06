//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReportStamp.h"

@class NSFont;

@interface FBWaterfallStamp : FBReportStamp
{
    NSFont *_font;
    struct __CFDictionary *_fontAttributes;
    struct __CTFont *_labelFont;
    struct __CFDictionary *_labelAttributes;
    NSFont *_titleFont;
    struct __CFDictionary *_titleFontAttributes;
}

+ (void)sanitizePointSizes;
+ (void)setPointSize:(long long)arg1 atIndex:(long long)arg2;
+ (void)addPointSize;
+ (void)removePointSizeAtIndex:(long long)arg1;
+ (id)pointSizeAtIndex:(long long)arg1;
+ (long long)numberOfPointSizes;
+ (void)setShowInfo:(BOOL)arg1;
+ (id)_pointSizes;
- (id)description;
- (void)drawInView:(id)arg1;
- (BOOL)addFont:(id)arg1 info:(long long *)arg2;
- (void)dealloc;

@end

