//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPropertyPhysicalSizeExtractor.h"

@interface TPropertyInfoWindowSizeExtractor : TPropertyPhysicalSizeExtractor
{
    _Bool _shouldGetItemCount;
}

- (id)computeValue;
- (_Bool)isWaitingForPendingNode:(const struct TFENode *)arg1;
- (int)extractValueFromNode:(const struct TFENode *)arg1;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (void)flush;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (id)defaultValue;
- (id)init;

@end

