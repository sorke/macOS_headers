//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSUIMessageHandler.h"

@interface CSUILoadSharedListHandler : CSUIMessageHandler
{
}

+ (BOOL)canBeUsedBySandboxedApplications;
+ (BOOL)isSharedListForAppKey:(id)arg1 allowedForRequestingXPCConnection:(id)arg2;
- (void)handleMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)loadSharedList;

@end

