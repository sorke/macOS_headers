//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTableDeleteScanLineView, NSTableRowView, NSTableRowViewSpringAnimation;

__attribute__((visibility("hidden")))
@interface NSTableSwipeData : NSObject
{
    long long swipeToDeleteRow;
    NSTableRowView *swipeToDeleteRowView;
    unsigned long long swipeToDeleteEdge;
    double swipeToDeleteTotalSlideAmount;
    double swipeToDeleteCellOffset;
    long long swipeToDeleteToken;
    double swipeToDeleteLastPercentage;
    double swipeToDeletePercentage;
    double swipeToDeleteConsumePercentage;
    double swipeToDeleteButtonPercentage;
    NSTableRowViewSpringAnimation *swipeToDeleteCatchupAnimation;
    NSTableRowViewSpringAnimation *swipeToDeleteFinishAnimation;
    NSTableDeleteScanLineView *swipeToDeleteScanLineView;
    BOOL hasMoreThanOneButtonAndAConsumer;
}

@property BOOL hasMoreThanOneButtonAndAConsumer; // @synthesize hasMoreThanOneButtonAndAConsumer;
@property(retain) NSTableDeleteScanLineView *swipeToDeleteScanLineView; // @synthesize swipeToDeleteScanLineView;
@property(retain) NSTableRowViewSpringAnimation *swipeToDeleteFinishAnimation; // @synthesize swipeToDeleteFinishAnimation;
@property(retain) NSTableRowViewSpringAnimation *swipeToDeleteCatchupAnimation; // @synthesize swipeToDeleteCatchupAnimation;
@property double swipeToDeleteButtonPercentage; // @synthesize swipeToDeleteButtonPercentage;
@property double swipeToDeleteConsumePercentage; // @synthesize swipeToDeleteConsumePercentage;
@property double swipeToDeletePercentage; // @synthesize swipeToDeletePercentage;
@property double swipeToDeleteLastPercentage; // @synthesize swipeToDeleteLastPercentage;
@property long long swipeToDeleteToken; // @synthesize swipeToDeleteToken;
@property double swipeToDeleteCellOffset; // @synthesize swipeToDeleteCellOffset;
@property double swipeToDeleteTotalSlideAmount; // @synthesize swipeToDeleteTotalSlideAmount;
@property unsigned long long swipeToDeleteEdge; // @synthesize swipeToDeleteEdge;
@property(retain) NSTableRowView *swipeToDeleteRowView; // @synthesize swipeToDeleteRowView;
@property long long swipeToDeleteRow; // @synthesize swipeToDeleteRow;
- (void)dealloc;
- (id)init;

@end

