//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/AutofillPopupBaseViewCocoa.h>

#import "NSTextViewDelegate.h"

@class NSString;

@interface PasswordGenerationPopupViewCocoa : AutofillPopupBaseViewCocoa <NSTextViewDelegate>
{
    struct PasswordGenerationPopupController *controller_;
    struct scoped_nsobject<NSView> passwordSection_;
    scoped_nsobject_0ef9b51e passwordField_;
    scoped_nsobject_0ef9b51e passwordTitleField_;
    struct scoped_nsobject<NSImageView> keyIcon_;
    scoped_nsobject_02675140 divider_;
    scoped_nsobject_1b22b22f helpTextView_;
    struct ScopedCrTrackingArea helpTextTrackingArea_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)textFont;
- (id)boldFont;
- (struct CGSize)helpSizeForPopupWidth:(double)arg1;
- (id)textFieldWithText:(const basic_string_61b65554 *)arg1 attributes:(id)arg2;
- (id)passwordAttributes;
- (id)passwordTitleAttributes;
- (void)updatePassword;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)controllerDestroyed;
- (BOOL)isPointInPasswordBounds:(struct CGPoint)arg1;
- (void)updateBoundsAndRedrawPopup;
- (struct CGSize)preferredSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateTrackingAreas;
- (id)initWithController:(struct PasswordGenerationPopupController *)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

