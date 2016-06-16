//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTableViewItem.h"

@class NSString;

@interface TSearchCriteriaTableViewItem : TTableViewItem
{
    NSString *_attributeName;
    NSString *_localizedAttributeName;
    NSString *_localizedAttributeDescription;
    unsigned long long _dataType;
    _Bool _inMenu;
}

@property _Bool inMenu; // @synthesize inMenu=_inMenu;
@property unsigned long long dataType; // @synthesize dataType=_dataType;
@property(copy) NSString *localizedAttributeDescription; // @synthesize localizedAttributeDescription=_localizedAttributeDescription;
@property(copy) NSString *localizedAttributeName; // @synthesize localizedAttributeName=_localizedAttributeName;
@property(copy) NSString *attributeName; // @synthesize attributeName=_attributeName;
- (void)dealloc;
- (id)initWithAttributeName:(const struct TString *)arg1;

@end

