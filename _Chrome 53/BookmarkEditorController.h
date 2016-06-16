//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/BookmarkEditorBaseController.h>

@class NSString, NSTextField;

@interface BookmarkEditorController : BookmarkEditorBaseController
{
    const struct BookmarkNode *node_;
    struct scoped_nsobject<NSString> initialUrl_;
    NSString *displayURL_;
    NSTextField *urlField_;
    NSTextField *nameTextField_;
}

+ (id)keyPathsForValuesAffectingOkEnabled;
@property(copy, nonatomic) NSString *displayURL; // @synthesize displayURL=displayURL_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)urlFieldColor;
- (id)didCommit;
- (BOOL)okEnabled;
- (struct GURL)GURLFromUrlField;
- (void)nodeRemoved:(const struct BookmarkNode *)arg1 fromParent:(const struct BookmarkNode *)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithParentWindow:(id)arg1 profile:(struct Profile *)arg2 parent:(const struct BookmarkNode *)arg3 node:(const struct BookmarkNode *)arg4 url:(const struct GURL *)arg5 title:(const basic_string_61b65554 *)arg6 configuration:(int)arg7;

@end

