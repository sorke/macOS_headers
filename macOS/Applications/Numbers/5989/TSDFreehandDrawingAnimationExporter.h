//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDFreehandDrawingInfo, TSDImager;

@interface TSDFreehandDrawingAnimationExporter : NSObject
{
    TSDFreehandDrawingInfo *_drawingInfo;
    struct CGSize _desiredAssetSize;
    TSDImager *_backgroundImager;
    // Error parsing type: Ac, name: _isCancelled
}

+ (id)p_movieWritingResourceSemaphore;
+ (double)framesPerSecond;
@property(retain, nonatomic) TSDImager *backgroundImager; // @synthesize backgroundImager=_backgroundImager;
- (void).cxx_destruct;
- (void)cancelWriting;
- (id)writeToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFreehandDrawingInfo:(id)arg1;

@end

