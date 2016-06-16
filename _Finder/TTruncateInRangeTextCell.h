//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMarginedTextCell.h"

@interface TTruncateInRangeTextCell : TMarginedTextCell
{
    struct _NSRange _truncateInRange;
    _Bool _hasCustomFallbackLineBreak;
    unsigned long long _customFallbackLineBreakMode;
}

@property(readonly, nonatomic) _Bool hasCustomFallbackLineBreak; // @synthesize hasCustomFallbackLineBreak=_hasCustomFallbackLineBreak;
@property(nonatomic) struct _NSRange truncateInRange; // @synthesize truncateInRange=_truncateInRange;
- (void)setCustomLineBreakFallbackMode:(unsigned long long)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

