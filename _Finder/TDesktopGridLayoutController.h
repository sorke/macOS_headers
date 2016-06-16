//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TDesktopGridLayoutController : NSObject
{
    struct vector<TScreenToGridLayoutPair, std::__1::allocator<TScreenToGridLayoutPair>> _screenToGridLayoutMap;
    struct CGSize _gridSize;
    struct CGRect _anchoredGridCellFrame;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearAllItemLocations;
- (id)gridLayoutForScreen:(id)arg1;
- (void)syncWithScreens:(id)arg1;
- (void)_buildOccupiedGridMap:(const vector_e1abc270 *)arg1 inIndexesToTryToSnap:(id)arg2 outIndexesToSnap:(id)arg3 outIndexesToPlace:(id)arg4;
- (_Bool)_findAvailableAnchorPoints:(vector_e1abc270 *)arg1 count:(unsigned long long)arg2;
- (_Bool)findAvailableAnchorPoints:(vector_e1abc270 *)arg1 count:(unsigned long long)arg2 occupiedAnchorPoints:(const vector_e1abc270 *)arg3;
- (_Bool)snapIndexes:(id)arg1 ofAnchorPointsToGrid:(vector_e1abc270 *)arg2 unique:(_Bool)arg3;
- (struct CGPoint)anchorForIndex:(unsigned long long)arg1;
- (struct CGPoint)_anchorForIndex:(unsigned long long)arg1 totalNumGridSpots:(unsigned long long)arg2;
@property struct CGRect anchoredGridCellFrame; // @synthesize anchoredGridCellFrame=_anchoredGridCellFrame;

@end

