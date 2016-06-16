//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

#import "NSApplicationDelegate.h"
#import "NSMenuDelegate.h"

@class NSMenu, NSString, TArrangeByMenuController;

@interface TApplicationController : NSResponder <NSMenuDelegate, NSApplicationDelegate>
{
    struct TNSRef<id> _sharedIKContext;
    struct TNSRef<NSMutableSet *> _sharedIKContextClients;
    struct TApplicationEventHandler *_application;
    struct TUndoableActionManager *_undoableActionManager;
    long long _lastRecentFoldersMenuUpdate;
    NSMenu *_goMenu;
    NSMenu *_recentFoldersMenu;
    TArrangeByMenuController *_arrangeByMenuController;
    NSMenu *_dockMenu;
    struct TNSRef<TMidnightTimer *> _timerToUpdateStuffAtMidnight;
    struct TNSRef<TICloudAccountManager *> _iCloudAccountMonitor;
    _Bool _doBackupCheck;
    struct TNotificationCenterObserver _anyWindowBecameMainObserver;
    struct TNotificationCenterObserver _windowMenuDidSendActionObserver;
    struct TNotificationCenterObserver _logTaggingOpsFinderDayChangedObserver;
}

+ (void)updateFileMenu;
+ (id)helpMenu;
+ (id)windowMenu;
+ (id)viewMenu;
+ (id)editMenu;
+ (id)fileMenu;
+ (id)finderMenu;
+ (id)menubar;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)shouldForwardSelectorToGlobalWindowController:(SEL)arg1;
+ (id)sharedApplicationController;
+ (void)startQuitSequence;
@property(nonatomic) _Bool doBackupCheck; // @synthesize doBackupCheck=_doBackupCheck;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)applicationDockMenu:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)cmdBrowseOtherTimeMachineDisks:(id)arg1;
- (void)cmdEnterTimeMachine:(id)arg1;
- (void)cmdCycleWindows:(id)arg1;
- (_Bool)validateCycleWindows:(id)arg1;
- (void)cmdConnectTo:(id)arg1;
- (_Bool)validateConnectTo:(id)arg1;
- (void)cmdClearRecentFolders:(id)arg1;
- (_Bool)validateClearRecentFolders:(id)arg1;
- (void)cmdRecentFoldersItem:(id)arg1;
- (void)cmdRecentFolders:(id)arg1;
- (_Bool)validateRecentFolders:(id)arg1;
- (void)cmdSelectStartupDisk:(id)arg1;
- (_Bool)validateSelectStartupDisk:(id)arg1;
- (void)cmdToggleViewOptions:(id)arg1;
- (_Bool)validateToggleViewOptions:(id)arg1;
- (void)cmdShowClipboard:(id)arg1;
- (void)redo:(id)arg1;
- (_Bool)validateRedo:(id)arg1;
- (void)undo:(id)arg1;
- (_Bool)validateUndo:(id)arg1;
- (void)cmdSetLabel:(id)arg1;
- (_Bool)validateSetLabel:(id)arg1;
- (_Bool)validateQuickLook:(id)arg1;
- (void)cmdEmptyTrashSilently:(id)arg1;
- (_Bool)validateEmptyTrashSilently:(id)arg1;
- (void)cmdEmptyTrash:(id)arg1;
- (_Bool)validateEmptyTrash:(id)arg1;
- (void)cmdCloseTab:(id)arg1;
- (_Bool)validateCloseTab:(id)arg1;
- (void)cmdSwitchToSimpleFinder:(id)arg1;
- (void)switchToSimpleFinder;
- (_Bool)validateSwitchToSimpleFinder:(id)arg1;
- (void)cmdSwitchToFullFinder:(id)arg1;
- (_Bool)validateSwitchToFullFinder:(id)arg1;
- (void)cmdPreferences:(id)arg1;
- (void)cmdAbout:(id)arg1;
- (void)releaseImageCache;
- (void)resetInternalCacheVersionForNode:(const struct TFENode *)arg1;
- (void)detachImageCacheFromView:(id)arg1;
- (void)attachImageCacheToView:(id)arg1;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (void)menuNeedsUpdate:(id)arg1;
- (void)cmdShowHelp:(id)arg1;
- (BOOL)isHelpAppleComReachable;
- (void)cmdShowNewToMac:(id)arg1;
- (void)cmdShowWhatIsNewInOS:(id)arg1;
- (void)updateHelpMenu;
- (void)resetEditMenuItemTitles;
- (void)buildRecentFoldersMenu:(id)arg1;
- (void)configureMenuBar;
- (void)loadMenuBar;
- (void)configureDebugMenu;
- (void)configureHelpMenu;
- (void)windowMenuDidSendAction:(id)arg1;
- (void)configureWindowMenu;
- (void)configureGoMenu;
- (void)configureGoMenuIcons;
- (void)configureViewMenu;
- (void)configureEditMenu;
- (void)configureFileMenu;
- (void)configureTagsMenuItems;
- (void)configureArrangeByMenuItem;
- (void)configureOpenWithMenuItem;
- (void)configureFinderMenu;
- (void)configureTrashMenuItems;
- (id)setMenuDelegateForItem:(long long)arg1 inMenu:(id)arg2;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (short)handleAction:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

