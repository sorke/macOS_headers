//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSBinder.h>

@class NSMutableDictionary, NSString;

@interface NSObjectParameterBinder : NSBinder
{
    struct __objectParameterBinderFlags {
        unsigned int _needsToRefreshOriginalValues:1;
        unsigned int _reservedObjectParameterBinder:31;
    } _objectParameterBinderFlags;
    NSString *_bindingValueBeingSet;
    NSMutableDictionary *_originalValues;
}

+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)bindingsForObject:(id)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;
+ (id)bindingCategory;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void *)arg3;
- (void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void *)arg4;
- (BOOL)isBindingReadOnly:(id)arg1;
- (Class)valueClassForBinding:(id)arg1;
- (BOOL)canAddBinding:(id)arg1 toController:(id)arg2;
- (id)availableBindings;
- (void)_connectionWasEstablished;
- (void)_dealloc;
- (void)_init;

@end

