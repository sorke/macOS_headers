//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@interface NSCustomImageRep : NSImageRep
{
    SEL _drawMethod;
    id _drawObject;
    unsigned int _reserved;
}

+ (void)initialize;
- (id)_imageRepsForEncodingWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)draw;
- (BOOL)_wantsToBeCached;
@property(readonly) id delegate;
@property(readonly) SEL drawSelector;
@property(readonly, copy) CDUnknownBlockType drawingHandler;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1 flipped:(BOOL)arg2 drawingHandler:(CDUnknownBlockType)arg3;
- (id)initWithDrawSelector:(SEL)arg1 delegate:(id)arg2;
- (id)init;
- (void)setFlipped:(BOOL)arg1;
- (BOOL)isFlipped;
- (CDUnknownBlockType)drawHandler;
- (id)initWithSize:(struct CGSize)arg1 drawHandler:(CDUnknownBlockType)arg2;
- (id)initWithSize:(struct CGSize)arg1 flipped:(BOOL)arg2 drawHandler:(CDUnknownBlockType)arg3;
- (id)initWithDrawSelector:(SEL)arg1 delegate:(id)arg2 flipped:(BOOL)arg3;

@end

