//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCollectionsLayoutSection.h"

@interface IPXMemoriesLayoutSection : IPXCollectionsLayoutSection
{
    struct CGRect _bounds;
}

@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (BOOL)shouldInvalidateLayoutForBoundsChangeFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (void)prepareInBounds:(struct CGRect)arg1 withPlacement:(unsigned long long)arg2;

@end

