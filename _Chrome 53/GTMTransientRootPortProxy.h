//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/GTMTransientRootProxy.h>

@class NSPort;

@interface GTMTransientRootPortProxy : GTMTransientRootProxy
{
    NSPort *receivePort_;
    NSPort *sendPort_;
}

+ (id)rootProxyWithReceivePort:(id)arg1 sendPort:(id)arg2 protocol:(id)arg3 requestTimeout:(double)arg4 replyTimeout:(double)arg5;
- (void)dealloc;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 protocol:(id)arg3 requestTimeout:(double)arg4 replyTimeout:(double)arg5;
- (id)makeConnection;

@end

