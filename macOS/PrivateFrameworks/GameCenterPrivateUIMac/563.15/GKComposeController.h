//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class GKChallenge, GKDimmingView, GKDimmingWindow, NSArray, NSLayoutConstraint, NSString, NSTextField, NSView;
@protocol GKComposeControllerDelegate;

@interface GKComposeController : NSViewController
{
    id <GKComposeControllerDelegate> _delegate;
    NSArray *_players;
    NSString *_defaultMessage;
    GKChallenge *_challenge;
    NSTextField *_titleLabel;
    NSTextField *_recipientField;
    NSTextField *_challengeField;
    NSTextField *_messageField;
    NSView *_challengeView;
    NSLayoutConstraint *_messageFieldYConstraint;
    GKDimmingView *_dimmingView;
    GKDimmingWindow *_dimmingWindow;
}

@property(retain) GKDimmingWindow *dimmingWindow; // @synthesize dimmingWindow=_dimmingWindow;
@property(retain) GKDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property NSLayoutConstraint *messageFieldYConstraint; // @synthesize messageFieldYConstraint=_messageFieldYConstraint;
@property NSView *challengeView; // @synthesize challengeView=_challengeView;
@property NSTextField *messageField; // @synthesize messageField=_messageField;
@property NSTextField *challengeField; // @synthesize challengeField=_challengeField;
@property NSTextField *recipientField; // @synthesize recipientField=_recipientField;
@property NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(retain) NSString *defaultMessage; // @synthesize defaultMessage=_defaultMessage;
@property(retain) NSArray *players; // @synthesize players=_players;
- (void)windowDidBecomeKey:(id)arg1;
- (void)close;
- (void)showComposeInWindow:(id)arg1;
- (void)dimWindow:(id)arg1;
- (void)dimView:(id)arg1;
- (void)showInWindow:(id)arg1;
- (void)showInView:(id)arg1;
- (void)validateReadyToSend;
- (void)controlTextDidChange:(id)arg1;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
@property id <GKComposeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setupChallengeView;
- (void)addRecipients:(id)arg1;
- (void)addRecipientPlayers:(id)arg1;
- (void)setupLayer;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

