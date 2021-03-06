//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TitledCallPopUpButtonCell.h"

@class NSImage, NSString;

@interface SmallTitledCallPopUpButtonCell : TitledCallPopUpButtonCell
{
    NSImage *groupCallUpImage;
    NSImage *groupCallDownImage;
}

- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (id)fontForString:(id)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_imageForCurrentStateWithFrame:(struct CGRect)arg1;
- (id)splitCallUpMenuDownImageWithSize:(struct CGSize)arg1;
- (id)splitCallDownImageWithSize:(struct CGSize)arg1;
- (id)splitCallUpImageWithSize:(struct CGSize)arg1;
- (id)videoUpMenuDownImageWithSize:(struct CGSize)arg1;
- (id)videoDownImageWithSize:(struct CGSize)arg1;
- (id)videoUpImageWithSize:(struct CGSize)arg1;
- (id)groupUpMenuDownImageWithSize:(struct CGSize)arg1;
- (id)groupMenuDownImageWithSize:(struct CGSize)arg1;
- (id)groupMenuUpImageWithSize:(struct CGSize)arg1;
- (id)groupCallDownImageWithSize:(struct CGSize)arg1;
- (id)groupCallUpImageWithSize:(struct CGSize)arg1;
- (id)callDownImageWithSize:(struct CGSize)arg1;
- (id)callUpImageWithSize:(struct CGSize)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)commonTitledCallPopUpButtonCellInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

