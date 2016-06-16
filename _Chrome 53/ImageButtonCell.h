//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@interface ImageButtonCell : NSButtonCell
{
    struct {
        int imageId;
        struct scoped_nsobject<NSImage> image;
    } image_[6];
    BOOL isMouseInside_;
}

@property(nonatomic) BOOL isMouseInside; // @synthesize isMouseInside=isMouseInside_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)showsBorderOnlyWhileMouseInside;
- (void)setShowsBorderOnlyWhileMouseInside:(BOOL)arg1;
- (id)imageForID:(long long)arg1 controlView:(id)arg2;
- (int)currentButtonState;
- (const struct ThemeProvider *)themeProviderForWindow:(id)arg1;
- (double)imageAlphaForWindowState:(id)arg1;
- (void)setImage:(id)arg1 forButtonState:(int)arg2;
- (void)setImageID:(long long)arg1 forButtonState:(int)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawImageWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)imageForState:(int)arg1 view:(id)arg2;
- (void)sharedInit;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

