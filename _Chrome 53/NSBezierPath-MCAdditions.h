//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBezierPath.h"

@interface NSBezierPath (MCAdditions)
+ (id)bezierPathWithCGPath:(struct CGPath *)arg1;
- (void)strokeInsideWithinRect:(struct CGRect)arg1;
- (void)strokeInside;
- (void)drawBlurWithColor:(id)arg1 radius:(double)arg2;
- (void)fillWithInnerShadow:(id)arg1;
- (id)pathWithStrokeWidth:(double)arg1;
@end

