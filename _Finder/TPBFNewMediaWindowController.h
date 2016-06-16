//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSImageView, NSString, TTextField;

@interface TPBFNewMediaWindowController : NSWindowController <NSWindowDelegate>
{
    NSImageView *_iconView;
    TTextField *_subTextField;
    unsigned long long _estimatedPBFSize;
    struct TFENode _pbfNode;
    NSString *_subText;
    struct CGSize _subTextFieldSize;
}

+ (_Bool)isWaitingForNewMedia;
+ (id)controller;
@property(nonatomic) unsigned long long estimatedPBFSize; // @synthesize estimatedPBFSize=_estimatedPBFSize;
@property(nonatomic) struct TFENode pbfNode; // @synthesize pbfNode=_pbfNode;
@property(retain, nonatomic) NSString *subText; // @synthesize subText=_subText;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)viewFrameChanged:(id)arg1;
- (void)newMediaInserted;
- (void)cancel:(id)arg1;
- (long long)runModal;
- (void)windowWillClose:(id)arg1;
- (void)dealloc;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

