//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TOpenSavePanelCallbacks.h"

@class TSavePanel;

@protocol TSavePanelCallbacks <TOpenSavePanelCallbacks>
- (void)savePanelDidEnd:(TSavePanel *)arg1 returnCode:(long long)arg2;
- (_Bool)validateName:(const struct TString *)arg1 inDestination:(const struct TFENode *)arg2;
@end

