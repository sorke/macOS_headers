//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/ImageButtonCell.h>

@class BrowserActionsController;

@interface BrowserActionCell : ImageButtonCell
{
    BrowserActionsController *browserActionsController_;
}

@property(nonatomic) BrowserActionsController *browserActionsController; // @synthesize browserActionsController=browserActionsController_;
- (const struct ThemeProvider *)themeProviderForWindow:(id)arg1;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

