//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

#import "DraggableButtonMixin.h"

@class DraggableButtonImpl;

@interface DraggableButton : NSButton <DraggableButtonMixin>
{
    struct scoped_nsobject<DraggableButtonImpl> draggableButtonImpl_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)beginDrag:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
@property(readonly, nonatomic) DraggableButtonImpl *draggableButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

