//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTableViewItem.h"

@class NSString;

@interface TBackupVolumeTableViewItem : TTableViewItem
{
    struct TFENode _node;
    NSString *_displayName;
    struct TIconRef _icon;
}

@property(readonly, retain) NSString *displayName; // @synthesize displayName=_displayName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct TIconRef *)icon;
- (const struct TFENode *)node;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithNode:(const struct TFENode *)arg1;

@end

