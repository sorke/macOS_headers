//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TScriptableWindowController.h"

@class NSToolbar, TAdvancedPaneController, TGeneralPaneController, TSidebarPaneController, TTagsPaneController;

@interface TPreferencesWindowController : TScriptableWindowController
{
    NSToolbar *_toolbar;
    TGeneralPaneController *_generalPaneController;
    TTagsPaneController *_tagsPaneController;
    TSidebarPaneController *_sidebarPaneController;
    TAdvancedPaneController *_advancedPaneController;
    long long _currentPane;
    double _toolbarOffset;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)preferencesWindow;
+ (id)show;
+ (id)instance;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)selectPaneAtIndex:(long long)arg1;
- (id)controllerForPaneAtIndex:(long long)arg1;
- (id)currentPaneController;
- (void)configureToolbar;
- (int)paneTypeForIndex:(long long)arg1;
- (long long)indexForPaneType:(int)arg1;
- (void)cancel:(id)arg1;
- (void)setPane:(int)arg1;
- (int)pane;
- (void)advanced:(id)arg1;
- (void)sidebar:(id)arg1;
- (void)tags:(id)arg1;
- (void)general:(id)arg1;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)dealloc;
- (unsigned int)finderScriptingModelKind;
- (void)windowDidLoad;
- (id)init;

@end

