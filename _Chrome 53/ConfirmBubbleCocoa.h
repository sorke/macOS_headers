//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSTextViewDelegate.h"

@class ConfirmBubbleController, NSString;

@interface ConfirmBubbleCocoa : NSView <NSTextViewDelegate>
{
    NSView *parent_;
    ConfirmBubbleController *controller_;
    struct scoped_nsobject<NSImageView> icon_;
    scoped_nsobject_2ce0c752 titleLabel_;
    scoped_nsobject_2ce0c752 messageLabel_;
    scoped_nsobject_6cadfeaf okButton_;
    scoped_nsobject_6cadfeaf cancelButton_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)closeBubble;
- (void)performLayout;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)ok:(id)arg1;
- (void)close:(id)arg1;
- (void)cancel:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithParent:(id)arg1 controller:(id)arg2;
- (void)clickLink;
- (void)clickCancel;
- (void)clickOk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

