//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAShapeLayer, NSTextField, NSTrackingArea;
@protocol NSObject;

@interface TMAActivityLogBannerView : NSView
{
    NSTextField *_leftTextField;
    NSTextField *_rightTextField;
    CAShapeLayer *_backgroundLayer;
    id <NSObject> _target;
    SEL _selector;
    NSTrackingArea *_trackingArea;
}

+ (id)bannerViewFromNIB;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) id <NSObject> target; // @synthesize target=_target;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) NSTextField *rightTextField; // @synthesize rightTextField=_rightTextField;
@property(nonatomic) NSTextField *leftTextField; // @synthesize leftTextField=_leftTextField;
- (void)p_resetView;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)pressButton;
- (id)buttonAttributes;
- (id)normalAttributes;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;
- (id)mouseDownColor;
- (id)hoverColor;
- (id)backgroundColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

