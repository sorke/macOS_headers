//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@class CALayer;

@interface NCIdentityImageView : NSImageView
{
    CALayer *_maskLayer;
    CALayer *_innerGlow;
    _Bool _layersSetup;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)awakeFromNib;

@end

