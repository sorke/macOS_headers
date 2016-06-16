//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSString;

@interface OmniboxPopupTableController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    struct scoped_nsobject<NSArray> array_;
    long long hoveredIndex_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)setHighlightedRow:(long long)arg1;
- (long long)highlightedRow;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithMatchResults:(const struct AutocompleteResult *)arg1 tableView:(id)arg2 popupView:(const struct OmniboxPopupViewMac *)arg3 answerImage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

