//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CocoaCookieTreeNode : NSObject
{
    struct scoped_nsobject<NSString> title_;
    scoped_nsobject_9420f295 children_;
    struct scoped_nsobject<CocoaCookieDetails> details_;
    struct CookieTreeNode *treeNode_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)details;
- (id)description;
- (BOOL)isLeaf;
- (id)children;
- (id)mutableChildren;
- (struct TreeModelNode *)treeNode;
- (int)nodeType;
- (id)title;
- (void)rebuild;
- (id)initWithNode:(struct CookieTreeNode *)arg1;

@end

