//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBrowserViewController;

@interface TMeetingRoomProgressController : NSObject
{
    struct TRecursiveMutex _lock;
    struct TFENode _targetNode;
    struct TNSRef<TQueuedPopoverController *> _popoverController;
    struct TNSRef<TAirDropPerson *> _airDropPerson;
    double _percentComplete;
    TBrowserViewController *_browserViewController;
    struct TNSRef<NSArrayController *> _allViewArrayController;
    struct TNotificationCenterObserver _viewWillMoveToWindowObserver;
    struct TNotificationCenterObserver _airDropLayoutChangedObserver;
    struct TNotificationCenterObserver _popoverWillCloseObserver;
    struct TKeyValueObserver _currentNWOperationEventObserver;
    struct TKeyValueObserver _bytesToCopyObserver;
    struct TKeyValueObserver _bytesCopiedObserver;
    struct TKeyValueBinder _percentCompleteBinder;
}

+ (void)unregisterProgressViewController:(id)arg1 forNode:(const struct TFENode *)arg2;
+ (void)registerProgressViewController:(id)arg1 forNode:(const struct TFENode *)arg2;
+ (void)startReceivingWithOperation:(struct __SFOperation *)arg1;
+ (void)startSendingNodes:(const struct TFENodeVector *)arg1 toReceiverNode:(const struct TFENode *)arg2;
+ (struct TString)stateTextForNode:(const struct TFENode *)arg1;
+ (_Bool)isPopoverShownForNode:(const struct TFENode *)arg1;
+ (_Bool)isPopoverShown;
+ (_Bool)isProgressForNode:(const struct TFENode *)arg1;
+ (void)showPopoverTransientForNode:(const struct TFENode *)arg1;
+ (void)tearDownControllers;
@property(readonly) double percentComplete; // @synthesize percentComplete=_percentComplete;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)closeInlineProgress;
- (_Bool)shouldShowInlineProgress;
- (void)showInlineProgress;
- (void)aboutToTearDownPopover;
- (void)popoverWillClose;
- (void)closePopover;
- (_Bool)shouldShowPopover:(_Bool *)arg1;
- (_Bool)isPopoverShown;
- (void)showPopoverLocked:(_Bool)arg1;
- (void)showPopoverTransient;
- (void)showPopover;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)browserViewWillMoveToWindow:(id)arg1;
- (void)browserViewLayoutChanged;
@property(nonatomic) TBrowserViewController *browserViewController; // @dynamic browserViewController;
- (id)getOrOpenBrowserViewController;
- (void)removeProgressViewController:(id)arg1;
- (void)addProgressViewController:(id)arg1;
- (struct TString)stateText;
- (void)setTargetNode:(const struct TFENode *)arg1;
- (void)update;
- (struct TFENode)targetNode;
- (void)cancel;
- (void)aboutToTearDown;
- (id)initWithTargetNode:(const struct TFENode *)arg1;
- (id)init;

@end

