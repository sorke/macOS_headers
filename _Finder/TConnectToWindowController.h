//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TScriptableWindowController.h"

#import "NSMenuDelegate.h"

@class NSProgressIndicator, NSString, NSWindow, TButton, TConnectToFavoriteTextField, TPopUpButton, TTableView, TTextField;

@interface TConnectToWindowController : TScriptableWindowController <NSMenuDelegate>
{
    TButton *_addBookmarkButton;
    TButton *_removeBookmarkButton;
    TPopUpButton *_recentsMenuButton;
    TTextField *_urlField;
    TButton *_helpButton;
    TButton *_connectToButton;
    TButton *_browseButton;
    NSProgressIndicator *_progressIndicator;
    TConnectToFavoriteTextField *_promptLabel;
    TTextField *_favoritesLabel;
    TTableView *_favoritesTable;
    NSWindow *_connectToWindow;
    struct TNSRef<TFavoriteServersTableViewController *> _controller;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)validateConnectTo:(id)arg1;
+ (void)show;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)loadSavedURLData;
- (void)loadSavedFrameData;
- (void)saveData;
- (void)clearRecentServers:(id)arg1;
- (void)refreshRecentServers;
- (void)selectRecentServer:(id)arg1;
- (void)helpButtonPressed:(id)arg1;
- (void)browseServers:(id)arg1;
- (void)urlTextChanged;
- (void)urlTextAccepted:(id)arg1;
- (id)_stringForAcceptableSchemes;
- (id)_stringForScheme:(id)arg1;
- (void)favoriteSelected:(const struct TSharedFileListItem *)arg1;
- (void)bookmarkSelected:(struct __CFURL *)arg1;
- (void)removeSelectedBookmarks:(id)arg1;
- (void)addBookmarkTo:(id)arg1;
- (void)addBookmark:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)cancel:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

