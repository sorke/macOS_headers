//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCBannerExtensionViewController.h"

#import "NSTextViewDelegate.h"

@class NSString, NSTextView;

@interface NCBannerReplyViewController : NCBannerExtensionViewController <NSTextViewDelegate>
{
    BOOL _hasText;
    NSTextView *_replyTextView;
}

@property(nonatomic) NSTextView *replyTextView; // @synthesize replyTextView=_replyTextView;
- (void)textDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)handeCancelButtonPress;
- (BOOL)handleActionButtonPress;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)firstResponder;
- (_Bool)ready;
- (id)expandedActionTitle;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

