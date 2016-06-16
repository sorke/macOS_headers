//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TNodeObserverProtocol.h"

@class NSString, TBrowserContainerController, TWindowHistoryEntry;

@interface TWindowHistory : NSObject <TNodeObserverProtocol>
{
    struct TNSRef<NSMutableArray *> _historyList;
    long long _historyPosition;
    struct TNodeObserverCocoaBridge *_nodeObserver;
    TBrowserContainerController *_controller;
}

@property(nonatomic) long long historyPosition; // @synthesize historyPosition=_historyPosition;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeMoved:(const struct TFENode *)arg2;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeDeleted:(const struct TFENode *)arg2 fromObservedNode:(const struct TFENode *)arg3;
- (id)currentEntry;
- (void)updateCurrentEntryWindowState:(id)arg1;
- (void)startObservingNodes:(const struct TFENodeVector *)arg1;
- (void)stopObservingNodes:(const struct TFENodeVector *)arg1;
- (void)removeNodeFromHistory:(const struct TFENode *)arg1;
- (void)addToHistory:(const struct TFENodeVector *)arg1 windowState:(id)arg2;
@property(readonly, nonatomic) TWindowHistoryEntry *next;
@property(readonly, nonatomic) TWindowHistoryEntry *previous;
@property(readonly, nonatomic) _Bool atEnd;
@property(readonly, nonatomic) _Bool atBeginning;
- (long long)endPosition;
- (void)removeEntry:(id)arg1;
- (id)entryAtPosition:(long long)arg1;
@property(readonly, nonatomic) long long entryCount;
- (void)aboutToTearDown;
- (void)dealloc;
- (id)initWithBrowserContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

