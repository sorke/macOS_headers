//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSScrollingConcurrentVBLPreprocessFilter.h>

@class _NSScrollingConcurrentEventMonitor, _NSScrollingRubberbandFilter;

__attribute__((visibility("hidden")))
@interface _NSScrollingConcurrentEventVBLPreprocessFilter : _NSScrollingConcurrentVBLPreprocessFilter
{
    _NSScrollingConcurrentEventMonitor *_eventMonitor;
    _NSScrollingRubberbandFilter *_rubberbandFilter;
    BOOL _isStretched;
}

@property(retain, nonatomic) _NSScrollingConcurrentEventMonitor *eventMonitor; // @synthesize eventMonitor=_eventMonitor;
- (void)scrollingVBLMonitor:(id)arg1 synchronizeForVBLSerialNumber:(unsigned long long)arg2 timestamp:(double)arg3 updateDuration:(double)arg4;
- (void)dealloc;
- (id)initWithConstantData:(id)arg1;

@end

