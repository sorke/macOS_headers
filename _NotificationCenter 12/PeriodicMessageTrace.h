//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface PeriodicMessageTrace : NSObject
{
    NSMutableArray *_blocks;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (void)addBlock:(CDUnknownBlockType)arg1;
- (id)initWithDomain:(id)arg1 preference:(id)arg2;

@end

