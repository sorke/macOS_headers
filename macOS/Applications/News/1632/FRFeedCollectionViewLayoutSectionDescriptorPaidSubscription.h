//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FRFeedCollectionViewLayoutSectionDescriptorForYou.h"

@interface FRFeedCollectionViewLayoutSectionDescriptorPaidSubscription : FRFeedCollectionViewLayoutSectionDescriptorForYou
{
    BOOL _subscriptionExpired;
    struct CGSize _subcriptionLabelSize;
}

@property(nonatomic) BOOL subscriptionExpired; // @synthesize subscriptionExpired=_subscriptionExpired;
@property(nonatomic) struct CGSize subcriptionLabelSize; // @synthesize subcriptionLabelSize=_subcriptionLabelSize;
- (id)subtitle;
- (id)subtitleFont;
- (id)titleFont;
- (long long)layoutType;

@end

