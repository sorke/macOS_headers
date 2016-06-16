//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BookmarkBarController;

@interface BookmarkContextMenuCocoaController : NSObject
{
    BookmarkBarController *bookmarkBarController_;
    struct unique_ptr<BookmarkContextMenuDelegateBridge, std::__1::default_delete<BookmarkContextMenuDelegateBridge>> bridge_;
    const struct BookmarkNode *bookmarkNode_;
    struct unique_ptr<BookmarkContextMenuController, std::__1::default_delete<BookmarkContextMenuController>> bookmarkContextMenuController_;
    struct scoped_nsobject<MenuController> menuController_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelTracking;
- (void)willExecuteCommand:(int)arg1;
- (id)menuForBookmarkBar;
- (id)menuForBookmarkNode:(const struct BookmarkNode *)arg1;
- (struct BookmarkModel *)bookmarkModel;
- (void)createMenuControllers:(struct BookmarkModel *)arg1;
- (id)initWithBookmarkBarController:(id)arg1;

@end

