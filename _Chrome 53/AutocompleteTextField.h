//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/StyledTextField.h>

#import "NSTextViewDelegate.h"
#import "ThemedWindowDrawing.h"
#import "URLDropTarget.h"

@class NSString;

@interface AutocompleteTextField : StyledTextField <NSTextViewDelegate, URLDropTarget, ThemedWindowDrawing>
{
    struct scoped_nsobject<NSUndoManager> undoManager_;
    struct AutocompleteTextFieldObserver *observer_;
    struct scoped_nsobject<URLDropTargetHandler> dropHandler_;
    scoped_nsobject_9420f295 currentToolTips_;
    struct scoped_nsobject<NSViewAnimation> resizeAnimation_;
    struct scoped_nsobject<NSString> suggestText_;
    struct scoped_nsobject<NSColor> suggestColor_;
}

+ (Class)cellClass;
@property(nonatomic) struct AutocompleteTextFieldObserver *observer; // @synthesize observer=observer_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)windowDidChangeActive;
- (void)windowDidChangeTheme;
- (int)viewID;
- (id)decorationMenuForEvent:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)urlDropController;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)viewDidMoveToWindow;
- (void)updateColorsToMatchTheme;
- (void)windowDidChangeScreen;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (void)updateMouseTracking;
- (struct CGPoint)bubblePointForDecoration:(struct LocationBarDecoration *)arg1;
- (id)suggestColor;
- (id)suggestText;
- (void)setGrayTextAutocompletion:(id)arg1 textColor:(id)arg2;
- (void)addToolTip:(id)arg1 forRect:(struct CGRect)arg2;
- (struct _NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (void)clearUndoChain;
- (void)stopAnimation;
- (void)animateToFrame:(struct CGRect)arg1;
- (id)undoManagerForTextView:(id)arg1;
- (void)setAttributedStringValue:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)cell;
- (void)flagsChanged:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

