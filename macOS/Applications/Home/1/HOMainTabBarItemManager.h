//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFRoomItemProvider, HOMainTabItemProvider;

@interface HOMainTabBarItemManager : HFItemManager
{
    HFRoomItemProvider *_roomItemProvider;
    HOMainTabItemProvider *_tabItemProvider;
}

@property(retain, nonatomic) HOMainTabItemProvider *tabItemProvider; // @synthesize tabItemProvider=_tabItemProvider;
@property(retain, nonatomic) HFRoomItemProvider *roomItemProvider; // @synthesize roomItemProvider=_roomItemProvider;
- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;

@end

