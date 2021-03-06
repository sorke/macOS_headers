//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorImagingFontPopupButton.h"

@class NSMenuItem, TSKDocumentRoot;

@interface TMAInspectorFontFamilyPopupButton : TMAInspectorImagingFontPopupButton
{
    TSKDocumentRoot *_documentRoot;
    BOOL _observingRecentFontsChanged;
    NSMenuItem *_highlightedMenuItem;
    BOOL _hasRecentFontMenuItems;
    BOOL _hasBlankMenuItem;
    BOOL _displaysFamilyMembers;
    CDUnknownBlockType _fontSelectedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fontSelectedBlock; // @synthesize fontSelectedBlock=_fontSelectedBlock;
@property(nonatomic) BOOL displaysFamilyMembers; // @synthesize displaysFamilyMembers=_displaysFamilyMembers;
@property(nonatomic) BOOL hasBlankMenuItem; // @synthesize hasBlankMenuItem=_hasBlankMenuItem;
- (void).cxx_destruct;
- (void)p_fontsChanged:(id)arg1;
- (void)p_menuEndedTracking:(id)arg1;
- (void)p_menuWillDisplay:(id)arg1;
- (void)p_familyMenuItemSelected:(id)arg1;
- (id)p_displayNameForFontFace:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)setValue:(id)arg1;
- (void)p_updateStateForFamilyMemberMenu:(id)arg1 forFontFamily:(id)arg2;
- (void)p_updateMenuItemStateForValue:(id)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)p_handleRecentFontsChangedNotification:(id)arg1;
- (void)selectBlankMenuItem;
- (id)selectedValueFromBinding;
- (void)p_updateFontFamilyMenuUsingFonts:(id)arg1 synchronous:(BOOL)arg2;
- (void)updateFontFamilyMenuUsingFonts:(id)arg1;
- (void)p_buildRecentFontsAndRasterize:(BOOL)arg1;
- (id)p_blankItemTitleWithColor:(id)arg1;
- (void)p_stopObservingRecentFontsChangedNotification;
- (void)p_observeRecentFontsChangedNotification;
@property(nonatomic) TSKDocumentRoot *documentRoot;
- (void)setDocumentRoot:(id)arg1 withFonts:(id)arg2;
- (void)p_setDocumentRoot:(id)arg1 withFonts:(id)arg2;

@end

