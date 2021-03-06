//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXPrologueTransitioning-Protocol.h"

@class IPXBackgroundView, IPXButton, IPXPrologueButton, NSButton, NSImageView, NSLayoutConstraint, NSProgressIndicator, NSString, NSTextField, NSTimer, NSView, UXView, WebView;
@protocol IPXWelcomeViewControllerDelegate;

@interface IPXWelcomeViewController : IPXViewController <IPXPrologueTransitioning>
{
    BOOL _createdConstraints;
    NSTimer *_progressTimer;
    NSTextField *_titleField;
    NSTextField *_descriptionField;
    NSButton *_tourButton;
    IPXPrologueButton *_startButton;
    NSView *_leftSpaceView;
    UXView *_textAreaView;
    NSImageView *_imageView;
    NSView *_tourOverlayView;
    IPXBackgroundView *_tourBackgroundView;
    WebView *_tourWebView;
    IPXButton *_closeTourButton;
    NSProgressIndicator *_progressIndicator;
    NSLayoutConstraint *_topLayoutGuideConstraint;
    NSLayoutConstraint *_textAreaLeftConstraint;
    NSLayoutConstraint *_imageViewLeftConstraint;
    id <IPXWelcomeViewControllerDelegate> _delegate;
}

@property(retain) id <IPXWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSLayoutConstraint *imageViewLeftConstraint; // @synthesize imageViewLeftConstraint=_imageViewLeftConstraint;
@property(retain) NSLayoutConstraint *textAreaLeftConstraint; // @synthesize textAreaLeftConstraint=_textAreaLeftConstraint;
@property(retain) NSLayoutConstraint *topLayoutGuideConstraint; // @synthesize topLayoutGuideConstraint=_topLayoutGuideConstraint;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) IPXButton *closeTourButton; // @synthesize closeTourButton=_closeTourButton;
@property(retain) WebView *tourWebView; // @synthesize tourWebView=_tourWebView;
@property(retain) IPXBackgroundView *tourBackgroundView; // @synthesize tourBackgroundView=_tourBackgroundView;
@property(retain) NSView *tourOverlayView; // @synthesize tourOverlayView=_tourOverlayView;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain) UXView *textAreaView; // @synthesize textAreaView=_textAreaView;
@property(retain) NSView *leftSpaceView; // @synthesize leftSpaceView=_leftSpaceView;
@property(retain) IPXPrologueButton *startButton; // @synthesize startButton=_startButton;
@property(retain) NSButton *tourButton; // @synthesize tourButton=_tourButton;
@property(retain) NSTextField *descriptionField; // @synthesize descriptionField=_descriptionField;
@property(retain) NSTextField *titleField; // @synthesize titleField=_titleField;
- (void).cxx_destruct;
- (void)_accessibilityCloseTour;
- (void)_accessibilityOpenTour;
- (void)_progressTimerFired:(id)arg1;
- (void)_disarmProgressTimer;
- (void)_armProgressTimer;
- (id)_constraintsToDisableDuringAnimation;
- (id)animatedAssets;
- (void)animateDirection:(long long)arg1 forOperation:(long long)arg2 withDuration:(double)arg3 otherViewController:(id)arg4;
- (void)closeTour:(id)arg1;
- (void)openTour:(id)arg1;
- (void)confirm:(id)arg1;
- (void)_setShowProgress:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

