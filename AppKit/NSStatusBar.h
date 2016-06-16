//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSStatusBar : NSObject
{
    id _items;
    void *_fReserved1;
    void *_fReserved2;
    long long _registeredForNote;
}

+ (BOOL)_performKeyEquivalent:(id)arg1;
+ (id)systemStatusBar;
- (void)_statusItemIsDeallocing:(id)arg1;
- (BOOL)_performKeyEquivalent:(id)arg1;
- (BOOL)_updatesDisabled;
- (void)_setUpdatesDisabled:(BOOL)arg1;
- (void)_requestStatusBarAdjustmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setLengthOfStatusItem:(id)arg1 to:(double)arg2;
- (void)_removeStatusItem:(id)arg1;
- (void)_insertStatusItem:(id)arg1 withPriority:(long long)arg2;
- (void)_adjustStatusItem:(id)arg1;
- (void)_insertObjectInItemArray:(id)arg1;
- (void)_removeObjectFromItemArray:(id)arg1;
- (void)_activeMenuBarDrawingStyleDidChange:(id)arg1;
- (void)_updateItemsWithAppearanceChange;
- (void)_updateItemsWithChangedActiveDisplay;
- (void)_menuBarThemeDidChange:(id)arg1;
- (void)_menuBarTranslucencyDidChange:(id)arg1;
- (void)_activeDisplayDidChange:(id)arg1;
- (void)_setRegisteredForNotifications:(BOOL)arg1;
- (id)_exitFullScreenItemForSpaceID:(unsigned long long)arg1;
- (id)_statusItemWithLength:(double)arg1 withPriority:(long long)arg2;
- (id)_lockName;
- (id)_name;
@property(readonly) double thickness;
@property(readonly, getter=isVertical) BOOL vertical;
- (void)removeStatusItem:(id)arg1;
- (id)statusItemWithLength:(double)arg1;
- (void)dealloc;
- (id)init;
- (void)_withAdjustmentDeferred:(CDUnknownBlockType)arg1;
- (id)_replicantKeys;
- (void)_replicateStatusItemsForScreenParameters;
- (id)_statusItems;
- (long long)backgroundStyleForHighlight:(BOOL)arg1;
- (void)drawBackgroundInRect:(struct CGRect *)arg1 inView:(id)arg2 highlight:(BOOL)arg3;
- (double)_lengthForSize:(struct CGSize)arg1;
- (struct CGSize)_initialOffset;
- (long long)_direction;
- (long long)_placement;
- (id)_createStatusItemControlInWindow:(id)arg1;
- (id)_createStatusItemWindow;
- (void)_CGSsetSystemStatusBarWindowSubitemOffsets:(id)arg1 forWindow:(id)arg2;
- (struct CGRect)_CGSgetWindowFrame:(id)arg1;
- (void)_CGSremoveWindow:(id)arg1;
- (void)_CGSinsertWindow:(id)arg1 withPriority:(long long)arg2 withSpaceID:(unsigned long long)arg3 withDisplayID:(id)arg4 withFlags:(unsigned int)arg5;
- (void)_CGSreregisterWindow:(id)arg1 withPriority:(long long)arg2 withSpaceID:(unsigned long long)arg3 withDisplayID:(id)arg4 withFlags:(unsigned int)arg5;

@end

