//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IPropertyValueApplicatorController.h"

@interface TPropertyEditTextFieldController : IPropertyValueApplicatorController
{
    unsigned long long _maxChars;
    struct TNotificationCenterObserver _textDidEndEditingObserver;
}

@property(nonatomic) unsigned long long maxChars; // @synthesize maxChars=_maxChars;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)nodesWillChange;
- (int)applyValueToNodes:(id)arg1;
- (void)flush;
- (void)setView:(id)arg1;
- (void)initCommon;

@end

