//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FINodeUIElement : NSObject
{
    unsigned long long _index;
    struct TNSRef<NSView *> _containerView;
    struct TFENode _node;
    struct TNSRef<id> _parent;
}

@property(nonatomic) struct TFENode node; // @synthesize node=_node;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (struct CGRect)frame;
- (void)setSelection:(_Bool)arg1;
- (_Bool)isSelected;
@property(retain) id parent;
- (id)containerView;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1 containerView:(id)arg2 node:(const struct TFENode *)arg3;

@end

