//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNKPFReading-Protocol.h"

@class KNKPFAssetRequest, NSString;

@interface KNKPFAsset : NSObject <KNKPFReading>
{
    NSString *_webPath;
    NSString *_nativePath;
    NSString *_overridePath;
    long long _type;
    unsigned long long _index;
    NSString *_movieID;
    KNKPFAssetRequest *_assetRequest;
    struct CGSize _size;
}

@property(retain, nonatomic) KNKPFAssetRequest *assetRequest; // @synthesize assetRequest=_assetRequest;
@property(copy, nonatomic) NSString *movieID; // @synthesize movieID=_movieID;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *overridePath; // @synthesize overridePath=_overridePath;
@property(copy, nonatomic) NSString *nativePath; // @synthesize nativePath=_nativePath;
@property(copy, nonatomic) NSString *webPath; // @synthesize webPath=_webPath;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)stringFromType:(long long)arg1;
- (BOOL)readFromKPFDictionary:(id)arg1 error:(out id *)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

