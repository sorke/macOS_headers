//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUTraceableResource : NSObject
{
    NSMutableArray *_tokens;
    NSMutableArray *_timeoutBlocks;
    NSHashTable *_monitoredTokens;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _printTimeoutAsError;
    NSString *_name;
}

@property(nonatomic) BOOL printTimeoutAsError; // @synthesize printTimeoutAsError=_printTimeoutAsError;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)p_tokenSerializationDescriptionFromQueueWithIndentLevel:(unsigned long long)arg1;
- (id)tokenSerializationDescriptionWithIndentLevel:(unsigned long long)arg1;
- (id)tokenSerializationDescription;
- (void)scheduleRelinquishTimeoutForToken:(id)arg1 isForTemporaryRelinquish:(BOOL)arg2;
- (void)removeToken:(id)arg1 isForTemporaryRelinquish:(BOOL)arg2;
- (void)addToken:(id)arg1 isForTemporaryRelinquish:(BOOL)arg2;
- (void)temporarilyRelinquishForToken:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)didRelinquishResourceWithToken:(id)arg1;
- (id)willAcquireResourceWithIntent:(id)arg1 timeout:(double)arg2;
- (id)willAcquireResourceWithIntent:(id)arg1 timeout:(double)arg2 context:(id)arg3;
- (id)initWithName:(id)arg1;
- (id)init;

@end

