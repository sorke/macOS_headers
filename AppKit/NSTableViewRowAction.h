//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSColor, NSString;

@interface NSTableViewRowAction : NSObject <NSCopying>
{
    long long _style;
    NSString *_title;
    CDUnknownBlockType _handler;
    NSColor *_backgroundColor;
}

+ (id)rowActionWithStyle:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=_handler) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy) NSString *title; // @synthesize title=_title;
@property long long style; // @synthesize style=_style;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)_initWithStyle:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

