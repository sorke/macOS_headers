//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SpinRecord : NSObject
{
    unsigned short _type;
    int _pid;
    int _percent_cpu;
    int _duration;
    int _wakeups_rate;
    unsigned long long _thread_id;
}

@property unsigned short type; // @synthesize type=_type;
@property int wakeups_rate; // @synthesize wakeups_rate=_wakeups_rate;
@property int duration; // @synthesize duration=_duration;
@property int percent_cpu; // @synthesize percent_cpu=_percent_cpu;
@property unsigned long long thread_id; // @synthesize thread_id=_thread_id;
@property int pid; // @synthesize pid=_pid;

@end

