//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSImageRep;

@interface _NSToolbarImageRepView : NSView
{
    NSArray *_itemIdentifiers;
    NSImageRep *_activeImageRep;
    NSImageRep *_inactiveImageRep;
    struct CGSize logicalImageSize;
}

- (id)_itemIdentifiers;
- (id)_inactiveImageRep;
- (id)_activeImageRep;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)_windowChangedKeyState;
- (BOOL)_isPaletteView;
- (id)_validDestinationForDragsWeInitiate;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)menuForEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)_computeDragImage;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeWhenSizedToFit;
- (void)sizeHeightToFit;
- (void)sizeWidthToFit;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
- (void)setActiveImageRep:(id)arg1 inactiveImageRep:(id)arg2 forItemIdentifiers:(id)arg3;
- (BOOL)isOpaque;
- (void)dealloc;
@property(nonatomic) struct CGSize logicalImageSize;

@end

