//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKImageBrowserCellOffscreenRenderer.h"

@interface TIconViewCellOffscreenRenderer : IKImageBrowserCellOffscreenRenderer
{
    _Bool _hasFocus;
    _Bool _backgroundIsWhite;
    _Bool _backgroundIsDark;
    _Bool _disableTwoLineTitles;
}

- (_Bool)backgroundIsDark;
- (void)setBackgroundIsDark:(_Bool)arg1;
- (_Bool)backgroundIsWhite;
- (void)setBackgroundIsWhite:(_Bool)arg1;
- (_Bool)hasFocus;
- (void)setDisableTwoLineTitles:(_Bool)arg1;
- (_Bool)disableTwoLineTitles;
- (void)spaceOutCellsAtDropLocation;
- (void)setHasFocus:(_Bool)arg1;

@end

