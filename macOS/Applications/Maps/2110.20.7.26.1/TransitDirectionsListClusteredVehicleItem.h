//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TransitDirectionsListItem.h"

@class GEOComposedTransitTripRouteLeg;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListClusteredVehicleItem : TransitDirectionsListItem
{
    GEOComposedTransitTripRouteLeg *_clusteredLeg;
}

@property(readonly, nonatomic) GEOComposedTransitTripRouteLeg *clusteredLeg; // @synthesize clusteredLeg=_clusteredLeg;
- (void).cxx_destruct;
- (id)initWithClusteredRouteLeg:(id)arg1;

@end

