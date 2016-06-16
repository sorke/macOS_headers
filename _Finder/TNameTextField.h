//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTextField.h"

@class NSImage;

@interface TNameTextField : TTextField
{
    id <TNameTextFieldDelegate> _nameFieldDelegate;
    _Bool _becomingFirstResponder;
    _Bool _shouldEdit;
}

@property(nonatomic) _Bool shouldEdit; // @synthesize shouldEdit=_shouldEdit;
@property(nonatomic) id <TNameTextFieldDelegate> nameFieldDelegate; // @synthesize nameFieldDelegate=_nameFieldDelegate;
- (void)removeTrackingAreas;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)updateBadgeImage;
- (void)updateTagImage;
- (void)setBadgeImageFunc:(function_2a606626)arg1;
- (void)setTagImageFunc:(function_2a606626)arg1;
- (void)setProgressState:(unsigned int)arg1 amount:(unsigned int)arg2;
- (void)setActionBtnAction:(SEL)arg1;
- (void)setActionBtnTarget:(id)arg1;
- (void)setShowEjectButton:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasBadgeImage;
@property(readonly, nonatomic) _Bool hasTagImage;
@property(nonatomic) _Bool forceSpaceForBadgeImage; // @dynamic forceSpaceForBadgeImage;
@property(nonatomic) _Bool forceSpaceForTagImage; // @dynamic forceSpaceForTagImage;
@property struct CGSize iconSize; // @dynamic iconSize;
@property(retain) NSImage *thumbnail; // @dynamic thumbnail;
- (void)setNode:(const struct TFENode *)arg1;
- (void)prepareForReuse;
- (id)fontSmoothingBackgroundColor;
- (void)finalize;
- (void)dealloc;

@end

