//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSISVariableDelegate.h"

@class NSISVariable;

@protocol NSISConstraint <NSISVariableDelegate>
- (id)secondItem;
- (id)firstItem;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(NSISVariable *)arg1;
@end

