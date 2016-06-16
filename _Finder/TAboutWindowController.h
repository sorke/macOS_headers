//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TScriptableWindowController.h"

@class NSImageView, NSTextField;

@interface TAboutWindowController : TScriptableWindowController
{
    NSImageView *_image;
    NSTextField *_finderFld;
    NSTextField *_experienceFld;
    NSTextField *_finderVersionFld;
    NSTextField *_desktopServicesVersionFld;
    NSTextField *_copyrightFld;
    NSTextField *_rightsFld;
    _Bool _extraInfo;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)aboutWindow;
+ (id)aboutWindowWithExtraInfo:(_Bool)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)windowDidLoad;
- (id)init;
- (void)getDesktopServicesVersion:(struct TString *)arg1 andBuild:(struct TString *)arg2;
- (void)getFinderVersion:(struct TString *)arg1 andBuild:(struct TString *)arg2 extraInfo:(_Bool)arg3;
- (void)displayAboutWindowWithExtraInfo:(_Bool)arg1;

@end

