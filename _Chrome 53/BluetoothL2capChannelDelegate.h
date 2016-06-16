//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IOBluetoothL2CAPChannelDelegate.h"

@interface BluetoothL2capChannelDelegate : NSObject <IOBluetoothL2CAPChannelDelegate>
{
    struct BluetoothL2capChannelMac *channel_;
}

- (void)l2capChannelQueueSpaceAvailable:(id)arg1;
- (void)l2capChannelReconfigured:(id)arg1;
- (void)l2capChannelClosed:(id)arg1;
- (void)l2capChannelData:(id)arg1 data:(void *)arg2 length:(unsigned long long)arg3;
- (void)l2capChannelWriteComplete:(id)arg1 refcon:(void *)arg2 status:(int)arg3;
- (void)l2capChannelOpenComplete:(id)arg1 status:(int)arg2;
- (id)initWithChannel:(struct BluetoothL2capChannelMac *)arg1;

@end

