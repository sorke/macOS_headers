//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUSourceDefinition.h>

@class NUComposition;

@interface NUCompositionSourceDefinition : NUSourceDefinition
{
    NUComposition *_composition;
}

@property(readonly) NUComposition *composition; // @synthesize composition=_composition;
- (void).cxx_destruct;
- (id)initWithComposition:(id)arg1;
- (id)init;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id *)arg2;

@end

