//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSIndexSet;

@interface NSRadialMenuContentView : NSView
{
}

- (id)_snapshotOfItemsAtIndexes:(id)arg1;
@property(getter=_nsib_isInDesignMode, setter=_nsib_setInDesignMode:) BOOL _nsib_inDesignMode;
- (long long)itemIndexAtLocation:(struct CGPoint)arg1;
- (void)setItem:(id)arg1 atIndex:(long long)arg2;
@property(copy) NSIndexSet *selectedItemIndexes;
@property long long selectedItemIndex;

@end

