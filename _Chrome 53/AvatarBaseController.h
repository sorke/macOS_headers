//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "HasWeakBrowserPointer.h"

@class BaseBubbleController, NSButton;

@interface AvatarBaseController : NSViewController <HasWeakBrowserPointer>
{
    struct Browser *browser_;
    scoped_nsobject_6cadfeaf button_;
    BaseBubbleController *menuController_;
    struct unique_ptr<ProfileAttributesUpdateObserver, std::__1::default_delete<ProfileAttributesUpdateObserver>> profileAttributesObserver_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)menuController;
- (void)updateErrorStatus:(BOOL)arg1;
- (void)updateAvatarButtonAndLayoutParent:(BOOL)arg1;
- (void)bubbleWillClose:(id)arg1;
- (void)buttonRightClicked:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (BOOL)isCtrlPressed;
- (void)showAvatarBubbleAnchoredAt:(id)arg1 withMode:(int)arg2 withServiceType:(int)arg3 fromAccessPoint:(int)arg4;
@property(readonly, nonatomic) NSButton *buttonView;
- (void)browserWillBeDestroyed;
- (void)dealloc;
- (id)initWithBrowser:(struct Browser *)arg1;

@end

