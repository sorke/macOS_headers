//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class NSError, VKLabelMarker, VKMapModel, VKOverlayPainter;
@protocol VKOverlay;

@protocol VKMapModelDelegate <NSObject>
- (void)mapModelDidUpdateMinMaxZoomLevel:(VKMapModel *)arg1;
- (void)mapModel:(VKMapModel *)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapModel:(VKMapModel *)arg1 selectedLabelMarkerWillDisappear:(VKLabelMarker *)arg2;
- (double)mapModelZoomScale:(VKMapModel *)arg1;
- (BOOL)mapModelInNav:(VKMapModel *)arg1;
- (BOOL)mapModelInNavAtDefaultZoom:(VKMapModel *)arg1;
- (void)mapModelDidFailLoadingTiles:(VKMapModel *)arg1 withError:(NSError *)arg2;
- (void)mapModelDidFinishLoadingTiles:(VKMapModel *)arg1;
- (void)mapModelDidStartLoadingTiles:(VKMapModel *)arg1;
- (void)mapModelDidBecomeFullyDrawn:(VKMapModel *)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapModelWillBecomFullyDrawn:(VKMapModel *)arg1;
- (void)mapModelDidBecomePartiallyDrawn:(VKMapModel *)arg1;
- (VKOverlayPainter *)mapModel:(VKMapModel *)arg1 painterForOverlay:(id <VKOverlay>)arg2;
- (void)mapModel:(VKMapModel *)arg1 needsPanByOffset:(struct CGPoint)arg2 relativeToScreenPoint:(struct CGPoint)arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(void (^)(void))arg6;

@optional
- (void)mapModel:(VKMapModel *)arg1 didUpdateContainsOverlay:(BOOL)arg2;
- (void)mapModel:(VKMapModel *)arg1 didUpdateNavigationPuckSize:(float)arg2;
@end

