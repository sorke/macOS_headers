//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TNodeViewSettings;

@protocol TStatusBarDelegateProtocol <NSObject>
- (TNodeViewSettings *)viewSettings;
- (NSString *)viewStyle;
- (_Bool)isSearchInProgress;
- (_Bool)searchResultsArePartial;
- (struct TString)searchScopeName;
- (_Bool)targetIsPopulated;
- (_Bool)isPopulationInProgress;
- (unsigned long long)selectedNodesCount;
- (unsigned long long)itemCount;
@end

