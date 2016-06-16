//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSImage;

__attribute__((visibility("hidden")))
@interface NCImageView : NSView
{
    CALayer *_imageMask;
    CALayer *_imageLayer;
    NSImage *_image;
}

@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize)intrinsicContentSize;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

