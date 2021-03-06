//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TimeMachine/DeltaMarker.h>

@class NSString;

@interface DeltaDeletionMarker : DeltaMarker
{
    unsigned long long _inodeForOriginal;
    NSString *_inodeForOriginalKey;
}

@property(retain, nonatomic) NSString *inodeForOriginalKey; // @synthesize inodeForOriginalKey=_inodeForOriginalKey;
@property unsigned long long inodeForOriginal; // @synthesize inodeForOriginal=_inodeForOriginal;
- (void)dealloc;
- (void)additionalRemoveMarkAction;
- (void)additionalCreationAction;
- (BOOL)additionalValidation;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 loadXAttrs:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

