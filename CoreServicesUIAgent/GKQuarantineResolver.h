//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSAlertDelegate.h"

@class NSMutableArray, NSString, NSURL;

@interface GKQuarantineResolver : NSObject <NSAlertDelegate>
{
    long long _state;
    id <GKQuarantineResolverDelegate> _delegate;
    NSURL *_appURL;
    NSURL *_dmgURL;
    NSURL *_serverURL;
    NSString *_volumeMountPoint;
    NSURL *_backlinkURL;
    NSString *_agentIdentifier;
    struct __LSASN *_appASN;
    struct AuthorizationOpaqueRef *_authorization;
    BOOL _allowUnsigned;
    unsigned int _itemsType;
    NSMutableArray *_items;
    NSMutableArray *_itemsWhichAreOK;
    NSMutableArray *_itemsWhichAreMalware;
    NSMutableArray *_itemsToActuallyOpen;
    unsigned long long offsetOfItemBeingChecked;
    NSMutableArray *_malwareResultDicts;
    NSString *_riskCategory;
    CDStruct_4c969caf _clientAuditToken;
    int _sandboxStatus;
    NSMutableArray *_xProtectAnalysisObjects;
    CDUnknownBlockType _analysisFeedbackBlock;
}

+ (struct __LSASN *)copyASNFromProperties:(id)arg1;
+ (id)alertIcon;
- (void).cxx_destruct;
- (void)showGKAlertForPath:(id)arg1;
- (void)resolve;
- (void)handleMoveToTrashError:(id)arg1 forPath:(id)arg2 isEject:(BOOL)arg3;
- (void)malwareChecksFinished;
- (void)handleButtonClicked:(long long)arg1 forMalwareInfoDictionary:(id)arg2;
- (void)submitProblemReportForMalwareResult:(id)arg1 buttonClicked:(long long)arg2;
- (void)saveRejectionRecordForMalwareResult:(id)arg1;
- (void)malwareCheckNextItem;
- (void)malwareCheckEnded:(id)arg1 result:(id)arg2 forURL:(id)arg3;
- (BOOL)handleSecAssessmentFeedbackForURL:(id)arg1 ofType:(id)arg2 infoDictionary:(id)arg3;
- (void)malwareChecksBegin;
- (BOOL)alertShowHelp:(id)arg1;
- (id)alertForPath:(id)arg1 malwareInfo:(id)arg2;
- (void)layoutAlertPreservingTextFieldAttributes:(id)arg1;
- (id)informativeTextFieldForAlert:(id)arg1;
- (void)denyAndShow;
- (void)deny;
- (void)denyWithoutSettingState;
- (void)approveUpdatingQuarantineTarget:(BOOL)arg1 recursively:(BOOL)arg2 volume:(BOOL)arg3;
- (void)beginResolution;
- (void)cancelOperation:(id)arg1;
@property long long state; // @dynamic state;
- (void)dealloc;
- (id)initWithProperties:(id)arg1 delegate:(id)arg2 clientAuditToken:(const CDStruct_4c969caf *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

