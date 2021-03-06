//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/VNObservationsCacheKeyProviding-Protocol.h>
#import <Vision/VNSequencedRequestSupporting-Protocol.h>
#import <Vision/VNWarningRecorder-Protocol.h>

@class NSArray, NSDictionary, NSString, VNProcessingDevice, VNWarningRecorder;
@protocol MTLDevice, OS_dispatch_queue, OS_dispatch_semaphore;

@interface VNRequest : NSObject <VNWarningRecorder, VNObservationsCacheKeyProviding, VNSequencedRequestSupporting, NSCopying>
{
    NSString *_requestName;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_options;
    VNWarningRecorder *_warningRecorder;
    NSObject<OS_dispatch_semaphore> *_cancellationSemaphore;
    NSObject<OS_dispatch_queue> *_cancellationQueue;
    unsigned long long _revision;
    unsigned long long _cachedResolvedRevision;
    unsigned long long _detectionLevel;
    VNProcessingDevice *_processingDevice;
    unsigned long long _metalContextPriority;
    BOOL _preferBackgroundProcessing;
    BOOL _dumpIntermediateImages;
    BOOL _cancellationTriggered;
    NSArray *_results;
    unsigned long long _modelFileBackingStore;
}

+ (unsigned long long)compatibleRevisionForDependentRequestOfClass:(Class)arg1 beingPerformedByRevision:(unsigned long long)arg2;
+ (const CDStruct_d47b9615 *)dependentRequestCompatability;
+ (unsigned long long)resolvedRevisionForRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
+ (unsigned long long)currentRevision;
+ (unsigned long long)defaultRevision;
+ (id)supportedRevisions;
+ (id)_introspectionBuiltSupportedRevisions;
+ (unsigned long long)_defaultRevisionForBuildVersion:(int)arg1;
+ (BOOL)getOptionalInputFacesArray:(id *)arg1 inOptions:(id)arg2 error:(id *)arg3;
+ (BOOL)getOptionalArray:(id *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id *)arg5;
+ (BOOL)getFloatValue:(float *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id *)arg5;
+ (BOOL)getFloatValue:(float *)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (BOOL)getDoubleValue:(double *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id *)arg5;
+ (BOOL)getDoubleValue:(double *)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (BOOL)getRequiredObject:(id *)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id *)arg5;
+ (BOOL)getOptionalObject:(id *)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id *)arg5;
+ (BOOL)defaultRequestInstanceWarmUpPerformer:(id)arg1 error:(id *)arg2;
+ (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (id)requestWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)requestWithName:(id)arg1 options:(id)arg2;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *requestName; // @synthesize requestName=_requestName;
@property(nonatomic) unsigned long long modelFileBackingStore; // @synthesize modelFileBackingStore=_modelFileBackingStore;
@property BOOL cancellationTriggered; // @synthesize cancellationTriggered=_cancellationTriggered;
@property(retain) NSObject<OS_dispatch_semaphore> *cancellationSemaphore; // @synthesize cancellationSemaphore=_cancellationSemaphore;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (unsigned long long)compatibleRevisionForDependentRequest:(id)arg1;
- (unsigned long long)resolvedRevision;
@property(nonatomic) unsigned long long revision; // @synthesize revision=_revision;
- (BOOL)validateImageBuffer:(id)arg1 ofNonZeroWidth:(unsigned long long *)arg2 andHeight:(unsigned long long *)arg3 error:(id *)arg4;
@property(nonatomic) unsigned long long detectionLevel;
@property(copy, nonatomic) VNProcessingDevice *processingDevice;
@property(nonatomic) unsigned long long metalContextPriority; // @synthesize metalContextPriority=_metalContextPriority;
@property(nonatomic) BOOL usesCPUOnly;
@property(nonatomic) BOOL disallowsGPUUse;
@property(retain, nonatomic) id <MTLDevice> preferredMetalContext;
@property(nonatomic) BOOL dumpIntermediateImages;
@property(nonatomic) BOOL preferBackgroundProcessing;
- (void)cancel;
- (id)warnings;
- (id)valueForWarning:(id)arg1;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (CDUnknownBlockType)resultsSortingComparator;
- (void)setResults:(id)arg1;
- (BOOL)internalCancelInContext:(id)arg1 error:(id *)arg2;
- (BOOL)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (BOOL)validateConfigurationAndReturnError:(id *)arg1;
- (BOOL)performInContext:(id)arg1 error:(id *)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (void)copyStateOfRequest:(id)arg1;
- (id)newDefaultRequestInstance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (BOOL)hasCancellationHook;
- (void)setValue:(id)arg1 forRequestOption:(id)arg2;
- (id)valueForPrivateOption:(id)arg1;
- (void)setValue:(id)arg1 forPrivateOption:(id)arg2;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (id)observationsCacheKey;
- (long long)dependencyProcessingOrdinality;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

