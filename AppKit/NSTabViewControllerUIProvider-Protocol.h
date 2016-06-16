//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSObject.h"

@class NSArray, NSTabView, NSTabViewController, NSTabViewItem, NSView, NSWindow;

@protocol NSTabViewControllerUIProvider <NSObject, NSCoding>
@property __weak NSTabViewController *tabViewController;
- (void)tearDown;
- (void)setUpForTabView:(NSTabView *)arg1 inContainer:(NSView *)arg2;

@optional
- (long long)_associatedTabStyle;
- (void)selectTabViewItemAtIndex:(long long)arg1;
- (void)removeTabView:(NSTabViewItem *)arg1 atIndex:(unsigned long long)arg2 newSelectedIndex:(long long)arg3;
- (void)insertTabView:(NSTabViewItem *)arg1 atIndex:(unsigned long long)arg2 newSelectedIndex:(long long)arg3;
- (void)setTabViewItemsFrom:(NSArray *)arg1 to:(NSArray *)arg2 newSelectedIndex:(long long)arg3;
- (void)tabViewContainerWillMoveFromWindow:(NSWindow *)arg1 toWindow:(NSWindow *)arg2;
@end

