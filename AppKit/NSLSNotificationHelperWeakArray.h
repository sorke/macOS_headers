//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSLSNotificationHelper.h>

@class NSPointerArray;

@interface NSLSNotificationHelperWeakArray : NSLSNotificationHelper
{
    NSPointerArray *_observers;
}

- (BOOL)isNonEmpty;
- (BOOL)removeEntryAndReturnIfEmpty:(id)arg1;
- (BOOL)addEntryAndReturnIfWasEmpty:(id)arg1;
- (void)dealloc;

@end

