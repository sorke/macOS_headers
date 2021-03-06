//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface NSCachedFetchRequestThunk : NSObject
{
    NSSQLiteStatement *_limitedStatement;
    NSSQLiteStatement *_unlimitedStatement;
    id _connection;
}

@property(retain, nonatomic) NSSQLiteStatement *unlimitedStatement; // @synthesize unlimitedStatement=_unlimitedStatement;
@property(retain, nonatomic) NSSQLiteStatement *limitedStatement; // @synthesize limitedStatement=_limitedStatement;
- (void)clearCaches;
- (void)dealloc;
- (id)initForConnection:(id)arg1;

@end

