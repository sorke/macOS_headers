//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NCNotificationWindow;

@interface NCPoof : NSObject
{
    NCNotificationWindow *_windowToPoof;
    CALayer *_poofLayer;
    double _duration;
}

+ (double)poofTime;
+ (void)poofWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NCNotificationWindow *windowToPoof; // @synthesize windowToPoof=_windowToPoof;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)go;
- (void)_addAnimationsToPoofs;
- (void)_setup;
- (void)_loadPoofLayersInAreaWithSize:(struct CGSize)arg1;
- (void)dealloc;

@end

