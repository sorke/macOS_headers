//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface NVServiceURLTableCellView : NSTableCellView
{
    NSString *_defaultsKey;
    NSString *_url;
    NSTextField *_URLTextField;
    NSButton *_radioButton;
}

@property(retain, nonatomic) NSButton *radioButton; // @synthesize radioButton=_radioButton;
@property(retain, nonatomic) NSTextField *URLTextField; // @synthesize URLTextField=_URLTextField;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *defaultsKey; // @synthesize defaultsKey=_defaultsKey;
- (void).cxx_destruct;
- (void)makeActive:(id)arg1;

@end

