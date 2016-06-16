//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol FIFinderSyncExtensionProtocol <NSObject>
- (void)executeCommandWithMenuItemDictionary:(NSDictionary *)arg1 target:(NSDictionary *)arg2 items:(NSArray *)arg3;
- (void)executeCommand:(NSString *)arg1 target:(NSDictionary *)arg2 items:(NSArray *)arg3;
- (void)requestMenuItemsForTarget:(NSDictionary *)arg1 selectedItems:(NSArray *)arg2 menu:(unsigned long long)arg3 result:(void (^)(NSArray *))arg4;
- (void)requestBadgeIdentifierForURL:(NSString *)arg1;
- (void)stopWatchingDirectoryURL:(NSString *)arg1;
- (void)startWatchingDirectoryURL:(NSString *)arg1;
- (void)cleanUp;
- (void)begin;
@end

