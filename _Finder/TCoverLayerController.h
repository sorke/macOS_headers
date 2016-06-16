//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class CALayer, NSString, NSWindow;

@interface TCoverLayerController : NSObject <NSWindowDelegate>
{
    struct TNSRef<NSWindow *> _parentWindow;
    struct TNSRef<CALayer *> _rootLayer;
    _Bool _serverSide;
    struct TNSRef<NSWindow *> _hostWindow;
    struct CGRect _frame;
    unsigned int _surfaceID;
    struct TNSRef<CAContext *> _caContext;
}

+ (id)overlayController;
@property(nonatomic) _Bool serverSide; // @synthesize serverSide=_serverSide;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)hide;
- (void)show;
@property(readonly, retain, nonatomic) CALayer *rootLayer;
- (void)setUpLayerHost;
@property(retain, nonatomic) NSWindow *parentWindow;
- (void)windowDidMove:(id)arg1;
- (id)hostWindow;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

