//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TToolbarItem.h"

#import "NSMenuDelegate.h"

@class NSString;

@interface TPathToolbarItem : TToolbarItem <NSMenuDelegate>
{
}

- (void)validate;
- (void)menuNeedsUpdate:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1 entry:(const struct ToolbarItemInfo *)arg2 controller:(id)arg3 propertyList:(id)arg4 willBeInsertedIntoToolbar:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

