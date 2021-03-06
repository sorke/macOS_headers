//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/CPCopying-Protocol.h>
#import <CorePDF/NSCopying-Protocol.h>

@class CPZoneBorder;

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying>
{
    struct CGRect intersectionRect;
    CPZoneBorder *intersectingBorder;
    BOOL forwardVector;
    BOOL backwardVector;
}

- (long long)comparePositionLengthwise:(id)arg1;
- (BOOL)backwardVector;
- (void)setBackwardVector:(BOOL)arg1;
- (BOOL)forwardVector;
- (void)setForwardVector:(BOOL)arg1;
- (id)intersectingBorder;
- (void)setIntersectingBorder:(id)arg1;
- (struct CGRect)intersectionRect;
- (void)setIntersectionRect:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initSuper;

@end

