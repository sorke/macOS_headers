//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCustomImageRep.h"

@class NSColor;

@interface LocationBarImageRep : NSCustomImageRep
{
    int iconId_;
    NSColor *fillColor_;
}

+ (void)drawLocationBarIconHTTPSValidForScale:(int)arg1;
+ (void)drawLocationBarIconHTTPSInvalidForScale:(int)arg1;
+ (void)drawLocationBarIconHTTPForScale:(int)arg1;
+ (void)drawLocationBarIcon:(id)arg1;
+ (id)imageForId:(int)arg1 color:(unsigned int)arg2;
@property(retain, nonatomic) NSColor *fillColor; // @synthesize fillColor=fillColor_;
@property(nonatomic) int iconId; // @synthesize iconId=iconId_;
- (void)dealloc;

@end

