//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSControl, NSDragEventTracker, NSFormatter, NSImage, NSMenu, NSMutableDictionary, NSString;

@interface NSCellAuxiliary : NSObject
{
    NSControl *controlView;
    NSImage *image;
    NSMutableDictionary *textAttributes;
    NSFormatter *formatter;
    id representedObject;
    NSString *userInterfaceItemIdentifier;
    NSMenu *menu;
    struct {
        unsigned int writingDirection:2;
        unsigned int backgroundStyleIsSet:1;
        unsigned int imageInterpolation:3;
        unsigned int hasMouseTrackingInfo:1;
        unsigned int reserved:25;
    } auxCFlags;
    NSDragEventTracker *_currentDragEventTracker;
    long long cachedAttributedStringGeneration;
    NSAttributedString *cachedAttributedStringValue;
}

@end

