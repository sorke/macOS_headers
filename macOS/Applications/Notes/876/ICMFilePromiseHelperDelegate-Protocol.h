//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ICMFilePromiseHelper, NSArray;

@protocol ICMFilePromiseHelperDelegate <NSObject>
- (void)filePromiseHelperDidCancel:(ICMFilePromiseHelper *)arg1;
- (void)filePromiseHelper:(ICMFilePromiseHelper *)arg1 didRecieveFiles:(NSArray *)arg2 dropPoint:(struct CGPoint)arg3;
@end

