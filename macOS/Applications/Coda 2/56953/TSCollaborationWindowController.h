//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImageView, NSProgressIndicator, NSTextField, NSView, NSWindow, TCMMMSession, TCMMMUser, TextDocument;

__attribute__((visibility("hidden")))
@interface TSCollaborationWindowController : NSWindowController
{
    NSWindow *window;
    NSView *requestView;
    NSTextField *requestTitleField;
    NSTextField *requestStatusField;
    NSImageView *requestUserImageView;
    NSButton *acceptButton;
    NSButton *declineButton;
    NSView *inviteView;
    NSTextField *inviteTitleField;
    NSTextField *inviteStatusField;
    NSProgressIndicator *inviteProgressBar;
    NSImageView *inviteUserImageView;
    NSButton *inviteAcceptButton;
    NSButton *inviteDeclineButton;
    TextDocument *document;
    TCMMMUser *user;
    TCMMMSession *session;
}

- (void)userDeniedJoinRequest;
- (void)updateSessionStatus;
- (void)updateProgress:(id)arg1;
- (id)session;
- (void)configureWindowForView:(id)arg1 titleField:(id)arg2;
- (void)declineInvitation:(id)arg1;
- (void)declineEditRequest:(id)arg1;
- (void)acceptInvitation:(id)arg1;
- (void)acceptEditRequest:(id)arg1;
- (void)dealloc;
- (id)initWithSessionEditRequest:(id)arg1 fromUser:(id)arg2;
- (id)initWithInvitationToDocument:(id)arg1 user:(id)arg2;

@end

