//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMenu, NSOpenPanel, NSPasteboard, NSPathComponentCell, NSPathControl, NSPathControlItem;

@protocol NSPathControlDelegate <NSObject>

@optional
- (void)pathControl:(NSPathControl *)arg1 willPopUpMenu:(NSMenu *)arg2;
- (void)pathControl:(NSPathControl *)arg1 willDisplayOpenPanel:(NSOpenPanel *)arg2;
- (BOOL)pathControl:(NSPathControl *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2;
- (unsigned long long)pathControl:(NSPathControl *)arg1 validateDrop:(id <NSDraggingInfo>)arg2;
- (BOOL)pathControl:(NSPathControl *)arg1 shouldDragPathComponentCell:(NSPathComponentCell *)arg2 withPasteboard:(NSPasteboard *)arg3;
- (BOOL)pathControl:(NSPathControl *)arg1 shouldDragItem:(NSPathControlItem *)arg2 withPasteboard:(NSPasteboard *)arg3;
@end

