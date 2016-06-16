//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButtonCell.h"

#import "AutofillInputCell.h"

@class NSString;

@interface AutofillPopUpCell : NSPopUpButtonCell <AutofillInputCell>
{
    BOOL invalid_;
    NSString *defaultValue_;
}

@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=defaultValue_;
@property(nonatomic) BOOL invalid; // @synthesize invalid=invalid_;
@property(copy, nonatomic) NSString *fieldValue;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

