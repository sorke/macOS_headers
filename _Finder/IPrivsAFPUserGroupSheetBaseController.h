//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTextFieldDelegate.h"
#import "NSWindowDelegate.h"

@class NSNumber, NSString, TEditTextField, TPrivsTableViewMainController;

@interface IPrivsAFPUserGroupSheetBaseController : NSWindowController <NSWindowDelegate, NSTextFieldDelegate>
{
    TPrivsTableViewMainController *_tableViewController;
    TEditTextField *_editUserGroupTextFld;
    NSString *_enterUserGroupText;
    NSNumber *_userGroupRadioButtonValue;
    _Bool _userGroupRadioButtonShouldBeVisible;
    _Bool _okButtonShouldBeEnabled;
    struct TFENode _volume;
}

+ (id)controllerWithTableViewController:(id)arg1 volume:(const struct TFENode *)arg2;
@property(nonatomic) _Bool userGroupRadioButtonShouldBeVisible; // @synthesize userGroupRadioButtonShouldBeVisible=_userGroupRadioButtonShouldBeVisible;
@property(nonatomic) _Bool okButtonShouldBeEnabled; // @synthesize okButtonShouldBeEnabled=_okButtonShouldBeEnabled;
@property(retain, nonatomic) NSNumber *userGroupRadioButtonValue; // @synthesize userGroupRadioButtonValue=_userGroupRadioButtonValue;
@property(retain, nonatomic) NSString *enterUserGroupText; // @synthesize enterUserGroupText=_enterUserGroupText;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)enterUserGroupTextForIndex:(unsigned long long)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)handleOKButtonPressed:(const struct TIdentity *)arg1;
- (void)okButtonPressed:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)run;
- (void)windowWillClose:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

