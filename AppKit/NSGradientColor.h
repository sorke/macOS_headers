//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSColor.h>

@class NSGradient;

@interface NSGradientColor : NSColor
{
    NSGradient *_gradient;
    struct CGImage *_patternImageRef;
    struct CGRect _destRect;
    struct CGColor *_patternColor;
}

- (struct CGColor *)CGColor;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)colorSpaceName;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (void)_updatePattern;
- (void)_updatePatternImage;
- (void)finalize;
- (void)dealloc;
- (id)initWithGradient:(id)arg1;

@end

