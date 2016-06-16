//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSImage, NSString;

@interface TDesktopViewDataSourceItem : NSObject <NSCopying>
{
    struct TFENode _node;
    struct TNSRef<NSImage *> _icon;
    struct TString _itemInfoText;
    _Bool _selected;
    struct TNSRef<NSObject<NSCopying>*> _sortValue;
    struct TString _displayNameForSort;
    struct TString _rawNameForSort;
    unsigned int _volumeIsMaskForSort;
}

+ (id)keyPathsForValuesAffectingData;
@property(getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateSortValuesWithNodeSortingData:(const struct TNodeSortingData *)arg1 sortProperty:(unsigned int)arg2;
- (void)getSortValuesForSort:(struct TDesktopViewDataSourceItemSortValues *)arg1;
@property(readonly) _Bool inlineProgressCanCancel; // @dynamic inlineProgressCanCancel;
@property(readonly) unsigned int inlineProgressState; // @dynamic inlineProgressState;
@property(readonly) unsigned long long inlineProgressPercentComplete; // @dynamic inlineProgressPercentComplete;
@property(readonly, getter=isDimmed) _Bool dimmed; // @dynamic dimmed;
- (void)setItemInfoTextNoKVO:(id)arg1;
- (void)setItemInfoText:(id)arg1;
@property(readonly) NSString *itemInfoText; // @dynamic itemInfoText;
@property(readonly) NSArray *tagColorIndexes; // @dynamic tagColorIndexes;
@property(readonly) NSString *displayName; // @dynamic displayName;
- (void)setIconNoKVO:(id)arg1;
- (void)setIcon:(id)arg1;
@property(readonly, retain) NSImage *icon; // @dynamic icon;
@property(readonly, retain) NSDictionary *data; // @dynamic data;
- (const struct TFENode *)node;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNode:(const struct TFENode *)arg1 fetchIconAtSize:(unsigned long long)arg2;
- (id)initWithNode:(const struct TFENode *)arg1;

@end

