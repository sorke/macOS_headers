//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSProgress, NSString;

@interface RDLibraryUpgraderLogger : NSObject
{
    NSString *_name;
    NSDate *_date;
    NSString *_key;
    struct {
        double virtualSize;
        double residentSize;
        double residentSizeMax;
    } _memoryInfo;
    NSProgress *_progress;
}

+ (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4;
+ (void)tearDown;
+ (void)setup;
- (void).cxx_destruct;
- (void)stop;
- (id)memoryUsage;
- (id)initWithName:(id)arg1 PPTKey:(id)arg2 progress:(id)arg3;

@end

