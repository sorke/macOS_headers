//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBrowserCell.h"

@class NSMatrix;

@interface BookmarkTreeBrowserCell : NSBrowserCell
{
    const struct BookmarkNode *bookmarkNode_;
    NSMatrix *matrix_;
    id target_;
    SEL action_;
}

- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)target;
@property(nonatomic) NSMatrix *matrix; // @synthesize matrix=matrix_;
- (void)setBookmarkNode:(const struct BookmarkNode *)arg1;
- (const struct BookmarkNode *)bookmarkNode;

@end

