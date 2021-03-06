//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/NSCopying-Protocol.h>
#import <Mail/NSObject-Protocol.h>

@class MFMailAccount, NSArray, NSString;

@protocol MFUIMailbox <NSCopying, NSObject>
@property(readonly) BOOL isVisibleFlaggedMailbox;
@property int type;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
- (BOOL)isPlaceholder;
- (NSString *)accountURLString;
- (MFMailAccount *)account;
- (BOOL)isSmartMailbox;
- (BOOL)isStore;
- (NSArray *)children;
- (BOOL)hasChildren;
- (unsigned long long)numberOfChildren;
- (unsigned long long)displayCount;
- (BOOL)isContainer;
- (NSString *)extendedDisplayName;
- (NSString *)displayName;
- (NSString *)persistentIdentifier;
@end

