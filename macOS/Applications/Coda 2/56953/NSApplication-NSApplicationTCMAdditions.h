//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

@interface NSApplication (NSApplicationTCMAdditions)
- (void)terminateForRestart:(id)arg1;
- (id)valueInScriptedModesWithName:(id)arg1;
- (id)valueInScriptedModesWithUniqueID:(id)arg1;
- (id)scriptedModes;
- (void)setScriptSelection:(id)arg1;
- (id)scriptSelection;
- (id)TCM_handleSeeScriptCommand:(id)arg1;
- (id)TCM_handlePrintScriptCommand:(id)arg1;
- (id)TCM_handleOpenScriptCommand:(id)arg1;
@end

