//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WebMenuRunner : NSObject
{
    struct scoped_nsobject<NSMenu> menu_;
    BOOL menuItemWasChosen_;
    int index_;
    double fontSize_;
    BOOL rightAligned_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)indexOfSelectedItem;
- (void)hide;
- (void)runMenuInView:(id)arg1 withBounds:(struct CGRect)arg2 initialIndex:(int)arg3;
- (void)menuItemSelected:(id)arg1;
- (BOOL)menuItemWasChosen;
- (void)addItem:(const struct MenuItem *)arg1;
- (id)initWithItems:(const vector_1e13130c *)arg1 fontSize:(double)arg2 rightAligned:(BOOL)arg3;

@end

