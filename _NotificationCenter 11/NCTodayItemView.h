//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NCTodayItemViewController;

@interface NCTodayItemView : NSView
{
    BOOL _isFlipped;
    NCTodayItemViewController *_accessibilityDelegate;
}

@property(nonatomic) __weak NCTodayItemViewController *accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property BOOL isFlipped; // @synthesize isFlipped=_isFlipped;
- (void).cxx_destruct;
- (struct CGRect)_accessibilityWindowFrame;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;

@end

