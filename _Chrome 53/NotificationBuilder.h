//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NotificationBuilder : NSObject
{
    struct scoped_nsobject<NSMutableDictionary> notificationData_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)buildDictionary;
- (id)buildUserNotification;
- (void)setIncognito:(BOOL)arg1;
- (void)setProfileId:(id)arg1;
- (void)setNotificationId:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setTag:(id)arg1;
- (void)setButtons:(id)arg1 secondaryButton:(id)arg2;
- (void)setIcon:(id)arg1;
- (void)setContextMessage:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

