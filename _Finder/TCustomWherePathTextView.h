//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class TWherePathTextField;

@interface TCustomWherePathTextView : NSTextView
{
    TWherePathTextField *_activeParentView;
}

@property(nonatomic) TWherePathTextField *activeParentView; // @synthesize activeParentView=_activeParentView;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;

@end

