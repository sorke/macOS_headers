//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer;

@interface NCNotificationTabContainer : NSView
{
    CALayer *_dividerLine;
    _Bool _showDivider;
}

@property(nonatomic) _Bool showDivider; // @synthesize showDivider=_showDivider;
- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end

