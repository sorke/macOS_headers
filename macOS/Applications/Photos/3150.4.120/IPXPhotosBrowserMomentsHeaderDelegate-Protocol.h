//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXPhotosBrowserMomentsHeader;

@protocol IPXPhotosBrowserMomentsHeaderDelegate <NSObject>
- (BOOL)photosBrowserMomentsHeader:(IPXPhotosBrowserMomentsHeader *)arg1 isSectionHitByWindowPoint:(struct CGPoint)arg2;
- (void)photosBrowserMomentsHeader:(IPXPhotosBrowserMomentsHeader *)arg1 shareAction:(id)arg2;
- (void)photosBrowserMomentsHeader:(IPXPhotosBrowserMomentsHeader *)arg1 addAction:(id)arg2;
- (void)photosBrowserMomentsHeader:(IPXPhotosBrowserMomentsHeader *)arg1 playAction:(id)arg2;

@optional
- (void)photosBrowserMomentsHeader:(IPXPhotosBrowserMomentsHeader *)arg1 overviewAction:(id)arg2;
@end

