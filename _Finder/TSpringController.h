//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TSpringController : NSObject
{
    id <TSpringDelegate> _delegate;
    long long _stage;
    struct TFENode _target;
    struct CGRect _anchorRect;
    struct TNSRef<NSTimer *> _timer;
    short _dragModifiers;
    struct CGPoint _dragGlobalMouseLoc;
    unsigned int _dragAttributes;
    _Bool _runSpringStageFinalAction;
}

+ (double)windowSpringDelay;
+ (_Bool)isWindowSpringingEnabled;
+ (double)springDelay;
+ (_Bool)isSpringingEnabled;
+ (void)cancelSpringing;
+ (void)setRunSpringStageFinalAction:(_Bool)arg1;
+ (_Bool)runSpringStageFinalAction;
+ (_Bool)springImmediatelyWithoutBlink;
+ (_Bool)springImmediately;
@property _Bool runSpringStageFinalAction; // @synthesize runSpringStageFinalAction=_runSpringStageFinalAction;
@property(nonatomic) struct CGPoint globalMouse; // @synthesize globalMouse=_dragGlobalMouseLoc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)springNow;
- (void)advanceSpringStage;
- (_Bool)commandKeyDown;
- (_Bool)springBlinkOff;
- (void)clearSpringTarget;
- (void)setSpringTarget:(const struct TFENode *)arg1;
- (void)startSpringTimer;
- (void)stopSpringTimer;
- (void)dealloc;
- (id)initWithSpringDelegate:(id)arg1;

@end

