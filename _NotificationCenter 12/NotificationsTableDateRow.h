//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSTextField, _TtC21NotificationCenterApp28NotificationsTableController;

__attribute__((visibility("hidden")))
@interface NotificationsTableDateRow : NSViewController
{
    // Error parsing type: , name: dateLabel
    // Error parsing type: , name: deleteButton
    // Error parsing type: , name: model
    // Error parsing type: , name: owner
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)deleteClicked:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak _TtC21NotificationCenterApp28NotificationsTableController *owner; // @synthesize owner;
@property(nonatomic, retain) NSButton *deleteButton; // @synthesize deleteButton;
@property(nonatomic, retain) NSTextField *dateLabel; // @synthesize dateLabel;

@end

