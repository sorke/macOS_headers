//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBaseBrowserWindowController;

@interface TWindowCreationOptions : NSObject
{
    struct TNSRef<TBaseBrowserWindowController *> _targetWindowController;
    struct TFENodeVector _nodesToSelect;
    int _spawnOption;
    _Bool _makeActive;
    int _reuseFrontWindow;
    int _closeSpawningWindow;
    int _invertBrowseInPlace;
    shared_ptr_3b64c573 _spawnOrigin;
    _Bool _forceContainerWindow;
    _Bool _inheritBrowseStateFromTarget;
    _Bool _sendFolderAction;
    _Bool _ignoreExisting;
}

+ (id)optionsForModifiers:(unsigned long long)arg1 windowController:(id)arg2 allowTabs:(_Bool)arg3;
+ (id)optionsForModifiers:(unsigned long long)arg1 windowController:(id)arg2;
+ (id)windowOptions:(id)arg1 spawnOption:(int)arg2;
+ (id)defaultWindowOptions;
@property(nonatomic) _Bool ignoreExisting; // @synthesize ignoreExisting=_ignoreExisting;
@property(nonatomic) _Bool sendFolderAction; // @synthesize sendFolderAction=_sendFolderAction;
@property(nonatomic) _Bool inheritBrowseStateFromTarget; // @synthesize inheritBrowseStateFromTarget=_inheritBrowseStateFromTarget;
@property(nonatomic) _Bool forceContainerWindow; // @synthesize forceContainerWindow=_forceContainerWindow;
@property(nonatomic) shared_ptr_3b64c573 spawnOrigin; // @synthesize spawnOrigin=_spawnOrigin;
@property(nonatomic) int invertBrowseInPlace; // @synthesize invertBrowseInPlace=_invertBrowseInPlace;
@property(nonatomic) int closeSpawningWindow; // @synthesize closeSpawningWindow=_closeSpawningWindow;
@property(nonatomic) int reuseFrontWindow; // @synthesize reuseFrontWindow=_reuseFrontWindow;
@property(nonatomic) _Bool makeActive; // @synthesize makeActive=_makeActive;
@property(nonatomic) int spawnOption; // @synthesize spawnOption=_spawnOption;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getNodesToSelect:(struct TFENodeVector *)arg1;
- (void)setNodesToSelect:(const struct TFENodeVector *)arg1;
@property(nonatomic) TBaseBrowserWindowController *targetWindowController;

@end

