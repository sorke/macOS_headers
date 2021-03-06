//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

@interface NineSliceView : NSView
{
    NSImage *_image;
    struct NSEdgeInsets _imageCapInsets;
}

@property struct NSEdgeInsets imageCapInsets; // @synthesize imageCapInsets=_imageCapInsets;
@property(retain) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBackgroundImage:(id)arg1 withLeftCap:(double)arg2 withTopCap:(double)arg3 withRightCap:(double)arg4 withBottomCap:(double)arg5;

@end

