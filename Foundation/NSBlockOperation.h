//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray;

@interface NSBlockOperation : NSOperation
{
    id _private2;
    void *_reserved2;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSArray *executionBlocks;
- (void)main;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

