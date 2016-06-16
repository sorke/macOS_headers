//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSGraphicsContext, NSString, NSTrackingArea, NSWindow;

@interface NSEvent : NSObject <NSCopying, NSCoding>
{
    unsigned long long _type;
    struct CGPoint _location;
    unsigned int _modifierFlags;
    id _WSTimestamp;
    double _timestamp;
    long long _windowNumber;
    NSWindow *_window;
    NSGraphicsContext *_context;
    union {
        struct {
            int eventNumber;
            int clickCount;
            float pressure;
            double deltaX;
            double deltaY;
            int subtype;
            short buttonNumber;
            short reserved1;
            int reserved2[3];
        } mouse;
        struct {
            NSString *keys;
            NSString *unmodKeys;
            unsigned short keyCode;
            char isARepeat;
            int eventFlags;
            int reserved[5];
        } key;
        struct {
            int eventNumber;
            long long trackingNumber;
            void *userData;
            int reserved[6];
        } tracking;
        struct {
            double deltaX;
            double deltaY;
            double deltaZ;
            short subtype;
            short reserved1;
            int reserved2[6];
        } scrollWheel;
        struct {
            double deltaX;
            double deltaY;
            double deltaZ;
            int reserved[7];
        } axisGesture;
        struct {
            short subtype;
            char gestureEnded;
            char reserved;
            int value;
            float percentage;
            int reserved2[7];
        } miscGesture;
        struct {
            int subtype;
            long long data1;
            long long data2;
            int reserved[6];
        } misc;
        int tabletPointData[14];
        int tabletProximityData[14];
    } _data;
    void *_eventRef;
    void *reserved1;
    void *reserved2;
}

+ (id)_touchesFromSet:(id)arg1 matchingPhase:(unsigned long long)arg2 inView:(id)arg3 includeResting:(BOOL)arg4;
+ (void)stopPeriodicEvents;
+ (void)_stopPeriodicEventsForSource:(id)arg1;
+ (void)startPeriodicEventsAfterDelay:(double)arg1 withPeriod:(double)arg2;
+ (BOOL)isSwipeTrackingFromScrollEventsEnabled;
+ (void)_fluidSwipeTrackingBehaviorChanged;
+ (id)_delayedEventMatchingMask:(unsigned long long)arg1 pull:(BOOL)arg2;
+ (void)_discardCursorEventsForWindowNumber:(long long)arg1 criteria:(long long)arg2;
+ (void)_discardEventsForTrackingArea:(id)arg1 window:(id)arg2;
+ (void)_discardEventsForTrackingArea:(id)arg1;
+ (void)_discardEventsWithMask:(unsigned long long)arg1 eventTime:(unsigned long long)arg2;
+ (void)_discardEventsFromSubthread:(id)arg1;
+ (void)_discardEventsMatchingMask:(unsigned long long)arg1 beforeTime:(unsigned long long)arg2 inQueue:(unsigned long long)arg3;
+ (void)_resetDiscardMask;
+ (float)standardRotationThreshold;
+ (double)standardMagnificationThreshold;
+ (void)_resetDeviceCapabilityCaches;
+ (void)_resetDefaults;
+ (BOOL)isMouseCoalescingEnabled;
+ (void)setMouseCoalescingEnabled:(BOOL)arg1;
+ (id)eventWithCGEvent:(struct __CGEvent *)arg1;
+ (id)eventWithEventRef:(const void *)arg1;
+ (id)_eventWithEventRefInternal:(const void *)arg1;
+ (id)_eventWithCGSEvent:(struct _CGSEventRecord)arg1;
+ (void)removeMonitor:(id)arg1;
+ (id)_sendEventToObservers:(id)arg1;
+ (id)addLocalMonitorForEventsMatchingMask:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)addGlobalMonitorForEventsMatchingMask:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
+ (double)keyRepeatInterval;
+ (double)keyRepeatDelay;
+ (double)doubleClickInterval;
+ (unsigned long long)pressedMouseButtons;
+ (unsigned long long)modifierFlags;
+ (struct CGPoint)mouseLocation;
+ (void)_clearCancelledTouches;
+ (id)_eventsCancellingTouchesForWindow:(id)arg1;
+ (id)otherEventWithType:(unsigned long long)arg1 location:(struct CGPoint)arg2 modifierFlags:(unsigned long long)arg3 timestamp:(double)arg4 windowNumber:(long long)arg5 context:(id)arg6 subtype:(short)arg7 data1:(long long)arg8 data2:(long long)arg9;
+ (id)enterExitEventWithType:(unsigned long long)arg1 location:(struct CGPoint)arg2 modifierFlags:(unsigned long long)arg3 timestamp:(double)arg4 windowNumber:(long long)arg5 context:(id)arg6 eventNumber:(long long)arg7 trackingNumber:(long long)arg8 userData:(void *)arg9;
+ (id)keyEventWithType:(unsigned long long)arg1 location:(struct CGPoint)arg2 modifierFlags:(unsigned long long)arg3 timestamp:(double)arg4 windowNumber:(long long)arg5 context:(id)arg6 characters:(id)arg7 charactersIgnoringModifiers:(id)arg8 isARepeat:(BOOL)arg9 keyCode:(unsigned short)arg10;
+ (id)_quickLookEventWithLocation:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2 timestamp:(double)arg3 windowNumber:(long long)arg4 context:(id)arg5 eventNumber:(long long)arg6;
+ (id)mouseEventWithType:(unsigned long long)arg1 location:(struct CGPoint)arg2 modifierFlags:(unsigned long long)arg3 timestamp:(double)arg4 windowNumber:(long long)arg5 context:(id)arg6 eventNumber:(long long)arg7 clickCount:(long long)arg8 pressure:(float)arg9;
+ (void)initialize;
+ (id)_navigationEventWithCommand:(long long)arg1 data:(long long)arg2 windowNumber:(long long)arg3;
+ (id)_nextConcurrentEventMatchingMask:(unsigned long long)arg1;
+ (void)_removeConcurrentEventMonitor:(id)arg1;
+ (id)_addConcurrentEventMonitorMatchingMask:(unsigned long long)arg1 identifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (BOOL)_isConcurrentEventProcessingOn;
+ (void)_updateMainThreadEventFilter;
+ (void)_registerForConcurrentEventProcessing;
+ (void)_startConcurrentEventProcessing;
+ (BOOL)_isConcurrentEventProcessingSupported:(id *)arg1;
@property(readonly) unsigned long long associatedEventsMask;
- (BOOL)_isTouchesEnded;
- (id)touchesMatchingPhase:(unsigned long long)arg1 inView:(id)arg2;
- (id)_touchesMatchingPhase:(unsigned long long)arg1 inView:(id)arg2 includeResting:(BOOL)arg3;
@property(readonly, getter=isEnteringProximity) BOOL enteringProximity;
@property(readonly) unsigned long long pointingDeviceType;
@property(readonly) unsigned long long capabilityMask;
@property(readonly) unsigned long long uniqueID;
@property(readonly) unsigned long long pointingDeviceSerialNumber;
@property(readonly) unsigned long long vendorPointingDeviceType;
@property(readonly) unsigned long long systemTabletID;
@property(readonly) unsigned long long pointingDeviceID;
@property(readonly) unsigned long long tabletID;
@property(readonly) unsigned long long vendorID;
@property(readonly) id vendorDefined;
@property(readonly) float tangentialPressure;
@property(readonly) float rotation;
@property(readonly) struct CGPoint tilt;
@property(readonly) unsigned long long buttonMask;
@property(readonly) long long absoluteZ;
@property(readonly) long long absoluteY;
@property(readonly) long long absoluteX;
@property(readonly) unsigned long long deviceID;
- (id)_eventCancellingTouches;
- (id)_eventRelativeToWindow:(id)arg1;
- (struct CGSize)_velocity;
- (struct CGSize)velocity;
- (long long)_gestureAxis;
- (void)trackSwipeEventWithOptions:(unsigned long long)arg1 dampenAmountThresholdMin:(double)arg2 max:(double)arg3 usingHandler:(CDUnknownBlockType)arg4;
- (void)_trackSwipeEventWithOptions:(unsigned long long)arg1 dampenAmountThresholdMin:(double)arg2 max:(double)arg3 trackingDistance:(double)arg4 axis:(long long)arg5 velocityFilterClass:(Class)arg6 usingHandler:(CDUnknownBlockType)arg7;
@property(readonly) long long pressureBehavior;
@property(readonly) long long stage;
- (long long)gestureAxis;
- (double)progress;
@property(readonly) double stageTransition;
- (double)gestureAmount;
@property(readonly) unsigned long long phase;
@property(readonly, getter=isDirectionInvertedFromDevice) BOOL directionInvertedFromDevice;
- (double)deviceDeltaZ;
- (double)deviceDeltaY;
- (double)deviceDeltaX;
- (BOOL)_continuousScroll;
- (unsigned long long)_cgsEventTime;
- (long long)_nxeventTime;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (long long)_scrollPhase;
- (void *)_eventRef;
- (BOOL)isGesture;
@property(readonly) long long data2;
@property(readonly) long long data1;
@property(readonly) short subtype;
@property(readonly) void *userData;
@property(readonly) NSTrackingArea *trackingArea;
@property(readonly) long long trackingNumber;
@property(readonly) unsigned short keyCode;
@property(readonly, getter=isARepeat) BOOL ARepeat;
- (void)_postDelayed;
- (void)_postAtStart:(BOOL)arg1;
- (void)_postFromSubthread:(BOOL)arg1;
- (void)_setTouches:(id)arg1;
- (void)_setEventRef:(void *)arg1;
- (BOOL)_isDeadkey;
@property(readonly, copy) NSString *charactersIgnoringModifiers;
- (BOOL)_matchesKeyEquivalent:(id)arg1 modifierMask:(unsigned long long)arg2;
@property(readonly, copy) NSString *characters;
@property(readonly) double magnification;
@property(readonly) unsigned long long momentumPhase;
- (long long)_scrollCount;
- (void)_resetScrollAcceleration;
- (double)_unacceleratedScrollingDeltaY;
- (double)_unacceleratedScrollingDeltaX;
@property(readonly) double scrollingDeltaY;
@property(readonly) double scrollingDeltaX;
@property(readonly) BOOL hasPreciseScrollingDeltas;
@property(readonly) double deltaZ;
@property(readonly) double deltaX;
@property(readonly) double deltaY;
- (double)_eventRecordDelta:(long long)arg1;
@property(readonly) long long buttonNumber;
@property(readonly) float pressure;
@property(readonly) long long clickCount;
@property(readonly) long long eventNumber;
@property(readonly) NSGraphicsContext *context;
@property(readonly) long long windowNumber;
@property(readonly) NSWindow *window;
@property(readonly) double timestamp;
@property(readonly) unsigned long long modifierFlags;
@property(readonly) struct CGPoint locationInWindow;
@property(readonly) unsigned long long type;
- (struct _CGSEventRecord)_cgsEventRecord;
- (id)_initWithCGSEvent:(struct _CGSEventRecord)arg1 eventRef:(void *)arg2;
- (id)_initWithCGEvent:(struct __CGEvent *)arg1 eventRef:(void *)arg2;
- (void)_initTouches;
- (void)_initAuxiliaryData;
@property(readonly) struct __CGEvent *CGEvent;
@property(readonly) const void *eventRef;
- (const void *)_eventRefInternal;
- (id)_initWithEventRefInternal:(const void *)arg1;
- (void)_setSynthesizedKeyEvent:(BOOL)arg1;
- (BOOL)_isSynthesizedKeyEvent;
- (void)_fixCommandAlphaShifts;
- (long long)command;

@end

