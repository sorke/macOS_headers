//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _NSSoundAux : NSObject
{
    struct OpaqueAudioConverter *_audioConverter;
    struct AudioBuffer _converterBuffer;
    struct ComponentInstanceRecord *_outputUnit;
    struct OpaqueAudioFileID *_audioFile;
    struct AudioStreamBasicDescription _audioFormat;
    long long _audioDataReadHeadPosition;
    unsigned long long _audioDataLength;
    long long _audioValidFrameCount;
    unsigned int _maximumPackets;
    struct AudioStreamPacketDescription *_audioPacketDescriptions;
    NSString *audioDeviceUID;
    float _volume;
    int _spinLock;
    unsigned char _ivarFlags;
    unsigned int _systemSoundID;
    CDUnknownBlockType _systemSoundCompletionHandler;
}

@end

