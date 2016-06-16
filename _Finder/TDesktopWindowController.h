//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseBrowserWindowController.h"

@class TDesktopViewController, TDesktopWindow;

@interface TDesktopWindowController : TBaseBrowserWindowController
{
    struct TNSRef<TDesktopViewController *> _desktopViewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (unsigned int)finderScriptingModelKind;
- (struct TFENode)target;
- (id)activeBaseBrowserViewController;
@property(readonly, retain) TDesktopWindow *desktopWindow;
@property(readonly, retain) TDesktopViewController *desktopViewController; // @dynamic desktopViewController;
- (id)initForScreen:(id)arg1;

@end

