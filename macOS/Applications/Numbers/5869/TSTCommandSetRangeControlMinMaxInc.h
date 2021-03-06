//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class TSTCellDiffMap, TSTCellUIDList;

@interface TSTCommandSetRangeControlMinMaxInc : TSTTableCommand <GSSPAutoEncodable>
{
    double _minimum;
    double _maximum;
    double _increment;
    TSTCellUIDList *_cellUIDList;
    TSTCellDiffMap *_cellDiffMap;
    BOOL _definedMinimum;
    BOOL _definedMaximum;
    BOOL _definedIncrement;
    BOOL _definedCellUIDList;
    BOOL _definedCellDiffMap;
    TSTCellDiffMap *_inverseCellDiffMap;
    BOOL _isFirstCommit;
}

- (void).cxx_destruct;
- (BOOL)isValidForCommit;
- (id)affectedArrayOfTableInfoForGSTCommandWrapper;
- (id)affectedArrayOfCellUIDListForGSTCommandWrapper;
- (id)cellUIDList;
- (void)redoWork;
- (void)undoWork;
- (id)makeInverse;
- (void)rollbackWork;
- (BOOL)supportsCollaboration;
- (id)actionString;
- (void)commitWork;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 increment:(double)arg3;
- (id)initWithTableInfo:(id)arg1 uidList:(id)arg2 increment:(double)arg3;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 minimum:(double)arg3;
- (id)initWithTableInfo:(id)arg1 uidList:(id)arg2 minimum:(double)arg3;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 maximum:(double)arg3;
- (id)initWithTableInfo:(id)arg1 uidList:(id)arg2 maximum:(double)arg3;
- (id)initWithTableInfo:(id)arg1 cellDiffMap:(id)arg2;
- (id)initWithTableInfo:(id)arg1 uidList:(id)arg2 changingMax:(BOOL)arg3 maximum:(double)arg4 changingMin:(BOOL)arg5 minimum:(double)arg6 changingInc:(BOOL)arg7 increment:(double)arg8 cellDiffMap:(id)arg9;
- (void)populateGSSPCmdTableSetRangeControlMinMaxInc:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

