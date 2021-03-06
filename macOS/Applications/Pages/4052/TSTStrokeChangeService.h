//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTCellDiffMap, TSTCellRegion, TSTStrokeChangeInformation, TSTTableInfo;

@interface TSTStrokeChangeService : NSObject
{
    unsigned int _strokeOrder;
    TSTTableInfo *_tableInfo;
    TSTCellDiffMap *_cellDiffMap;
    TSTCellRegion *_cellRegion;
    TSTStrokeChangeInformation *_strokeChangeInformation;
}

@property(nonatomic) unsigned int strokeOrder; // @synthesize strokeOrder=_strokeOrder;
@property(retain, nonatomic) TSTStrokeChangeInformation *strokeChangeInformation; // @synthesize strokeChangeInformation=_strokeChangeInformation;
@property(retain, nonatomic) TSTCellRegion *cellRegion; // @synthesize cellRegion=_cellRegion;
@property(retain, nonatomic) TSTCellDiffMap *cellDiffMap; // @synthesize cellDiffMap=_cellDiffMap;
@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (void)dealloc;
- (id)p_applyStrokeChangeToStroke:(id)arg1 fallbackStroke:(id)arg2;
- (BOOL)processNextCell:(id)arg1 withCellID:(struct TSUCellCoord)arg2;
- (id)commandForApplyingStrokeChange;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 stroke:(id)arg3 andPresetIndex:(unsigned long long)arg4;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 strokeChangeInformation:(id)arg3;

@end

