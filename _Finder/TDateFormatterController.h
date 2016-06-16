//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TDateFormatterController : NSObject
{
    struct TNSRef<TValidatingDateFormatter *> _shortDateTimeFormatter;
    struct TNSRef<TValidatingDateFormatter *> _shortDateTimeFormatterRelative;
    struct TNSRef<TValidatingDateFormatter *> _shortDateOnlyFormatter;
    struct TNSRef<TValidatingDateFormatter *> _shortDateOnlyFormatterRelative;
    struct TNSRef<TValidatingDateFormatter *> _mediumDateTimeFormatter;
    struct TNSRef<TValidatingDateFormatter *> _mediumDateTimeFormatterRelative;
    struct TNSRef<TValidatingDateFormatter *> _mediumDateOnlyFormatter;
    struct TNSRef<TValidatingDateFormatter *> _mediumDateOnlyFormatterRelative;
    struct TNSRef<TValidatingDateFormatter *> _longDateTimeFormatter;
    struct TNSRef<TValidatingDateFormatter *> _longDateTimeFormatterRelative;
    struct TNSRef<TValidatingDateFormatter *> _fullDateTimeFormatter;
    struct TNSRef<TValidatingDateFormatter *> _fullDateTimeFormatterRelative;
    struct TNSRef<TValidatingDateFormatter *> _fullDateOnlyFormatter;
    struct TNSRef<TValidatingDateFormatter *> _fullDateOnlyFormatterRelative;
    struct TNSRef<TValidatingDateFormatter *> _timeOnlyFormatter;
    struct TNSRef<TValidatingDateFormatter *> _fileNameTimeFormatter;
    struct TNSRef<TValidatingDateFormatter *> _fileNameDateTimeFormatter;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _observers;
}

+ (id)dateFormatterController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (id)fileNameDateTimeFormatter;
- (id)fileNameTimeFormatter;
- (id)timeOnlyFormatter;
- (id)fullDateOnlyFormatter:(_Bool)arg1;
- (id)fullDateTimeFormatter:(_Bool)arg1;
- (id)longDateTimeFormatter:(_Bool)arg1;
- (id)mediumDateOnlyFormatter:(_Bool)arg1;
- (id)mediumDateTimeFormatter:(_Bool)arg1;
- (id)shortDateTimeFormatter:(_Bool)arg1;
- (id)shortDateOnlyFormatter:(_Bool)arg1;
- (id)init;

@end

