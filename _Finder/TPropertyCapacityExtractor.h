//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IPropertyTextExtractor.h"

@interface TPropertyCapacityExtractor : IPropertyTextExtractor
{
}

- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;

@end

