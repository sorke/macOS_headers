//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPMetadataPattern : NSObject
{
    struct __MDSimpleQueryEvaluator *_queryEval;
    NSString *_queryString;
}

@property(readonly) NSString *queryString; // @synthesize queryString=_queryString;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)matches:(id)arg1;
- (id)mutableFilterResults:(id)arg1;
- (id)filterResults:(id)arg1;
- (id)initWithQuery:(id)arg1;

@end

