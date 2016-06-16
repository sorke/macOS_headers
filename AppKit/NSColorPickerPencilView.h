//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSColor, NSColorList, NSColorPickerPencils, NSColoredPencil, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface NSColorPickerPencilView : NSView
{
    NSMutableArray *_pencils;
    NSMutableDictionary *_pencilLayers;
    NSColoredPencil *_hoveredPencil;
    NSColoredPencil *_selectedPencil;
    NSColoredPencil *_currentFocusedPencil;
    NSTrackingArea *_trackingArea;
    NSColorPickerPencils *_controllingPicker;
    NSLayoutConstraint *_aspectRatioConstraint;
    unsigned int _didHoverOutsideSelectedPencil:1;
    unsigned int _didCompleteScaledPencilRender:1;
    unsigned int _reservedFlags:31;
}

+ (id)_representativePencilImage;
- (void)_updateFramesForPencils:(id)arg1 duration:(double)arg2;
- (void)_removeAllPencilLayers;
- (void)_setLayer:(id)arg1 forPencil:(id)arg2;
- (id)_layerForPencil:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)layout;
- (BOOL)isFlipped;
@property(copy) NSColor *color;
@property(readonly, copy) NSString *localizedColorNameComponent;
- (id)_namedPencil;
- (void)_windowChangedKeyState;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_pencilViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateTrackingAreas;
- (id)_pencilAtEventLocation:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)_hoverAndSelectPencilWithEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)_updatePencilsFromColorList;
- (id)_pencilAtRow:(long long)arg1 column:(long long)arg2;
- (void)_row:(long long *)arg1 column:(long long *)arg2 ofPencil:(id)arg3;
- (void)_enumeratePencilsWithBlock:(CDUnknownBlockType)arg1;
- (id)_pencilWithColor:(id)arg1;
@property(readonly, copy) NSArray *_pencils;
@property(readonly) NSColorList *_colorList;
@property(readonly) NSColoredPencil *_selectedPencil;
- (void)_hoverPencil:(id)arg1;
- (void)_selectPencil:(id)arg1 updateSelection:(BOOL)arg2 animate:(BOOL)arg3;
- (id)_pencilAtViewPoint:(struct CGPoint)arg1;
- (struct CGRect)_frameOfPencil:(id)arg1;
- (struct CGRect)_calculateFrameForPencil:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (struct CGRect)_calculateFrameForPencil:(id)arg1;
- (void)_removeFocusFromLayer:(id)arg1;
- (void)_addFocusToLayer:(id)arg1 animate:(BOOL)arg2;
- (void)_addFocusToLayer:(id)arg1;
- (void)_updateFocusRing;
@property(readonly) BOOL _shouldShowFocusRing;
@property(readonly) BOOL _hasFocusRing;
@property(readonly) NSColoredPencil *_focusedPencil;
- (id)_rightMostPencil;
- (id)_leftMostPencil;
- (id)_topMostPencil;
- (id)_bottomMostPencil;
- (id)_pencilRightOf:(id)arg1;
- (id)_pencilLeftOf:(id)arg1;
- (id)_pencilBelow:(id)arg1;
- (id)_pencilAbove:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end

