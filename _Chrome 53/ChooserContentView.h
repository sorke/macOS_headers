//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface ChooserContentView : NSView
{
    scoped_nsobject_0ef9b51e titleView_;
    struct scoped_nsobject<NSScrollView> scrollView_;
    struct scoped_nsobject<NSTableColumn> tableColumn_;
    struct scoped_nsobject<NSTableView> tableView_;
    scoped_nsobject_6cadfeaf connectButton_;
    scoped_nsobject_6cadfeaf cancelButton_;
    scoped_nsobject_02675140 separator_;
    scoped_nsobject_0ef9b51e message_;
    scoped_nsobject_6cadfeaf helpButton_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)helpButton;
- (id)cancelButton;
- (id)connectButton;
- (id)tableView;
- (scoped_nsobject_6cadfeaf)createHelpButton;
- (scoped_nsobject_0ef9b51e)createMessage;
- (scoped_nsobject_02675140)createSeparator;
- (scoped_nsobject_6cadfeaf)createCancelButton;
- (scoped_nsobject_6cadfeaf)createConnectButton;
- (scoped_nsobject_6cadfeaf)createButtonWithTitle:(id)arg1;
- (scoped_nsobject_0ef9b51e)createChooserTitle:(id)arg1;
- (id)initWithChooserTitle:(id)arg1;

@end

