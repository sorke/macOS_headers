//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NCRemoteViewHostViewControllerDelegate-Protocol.h"

@class NCNotificationHostViewController, NSString, NSUserNotification;

@protocol NCNotificationHostViewControllerDelegate <NCRemoteViewHostViewControllerDelegate>
- (void)remoteNotificationController:(NCNotificationHostViewController *)arg1 dismissNotificationWithActivation:(long long)arg2 actionIdentifier:(NSString *)arg3;
- (NSUserNotification *)remoteNotificationControllerRepresentedNotification:(NCNotificationHostViewController *)arg1;
@end

