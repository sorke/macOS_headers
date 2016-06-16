//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface NSDraggingDestinationView : NSView
{
    NSColor *_color;
    long long _feedbackStyle;
    long long _draggingDestinationStyle;
    long long _backgroundStyle;
    BOOL _flashing;
}

@property BOOL flashing; // @synthesize flashing=_flashing;
@property long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property long long draggingDestinationStyle; // @synthesize draggingDestinationStyle=_draggingDestinationStyle;
@property long long feedbackStyle; // @synthesize feedbackStyle=_feedbackStyle;
@property(copy) NSColor *color; // @synthesize color=_color;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

