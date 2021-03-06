//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage
{
    unsigned long long _offset;
    unsigned int _fragmentedMessageID;
    unsigned int _fragmentIndex;
    unsigned int _totalFragmentCount;
    NSData *_data;
}

+ (id)createMessageFragmentsFromOriginalMessage:(id)arg1 withFragmentedMessageID:(unsigned int)arg2 fragmentSize:(unsigned int)arg3;
+ (id)createOriginalMessageFromFragmentedMessages:(id)arg1;
@property(readonly, nonatomic) unsigned int totalFragmentCount; // @synthesize totalFragmentCount=_totalFragmentCount;
@property(readonly, nonatomic) unsigned int fragmentIndex; // @synthesize fragmentIndex=_fragmentIndex;
@property(readonly, nonatomic) unsigned int fragmentedMessageID; // @synthesize fragmentedMessageID=_fragmentedMessageID;
- (id)_nonHeaderData;
@property(readonly, retain, nonatomic) NSData *data;
- (unsigned char)command;
- (id)description;
- (void)dealloc;
- (id)initWithData:(id)arg1 withFragmentedMessageID:(unsigned int)arg2 fragmentIndex:(unsigned int)arg3 totalFragmentCount:(unsigned int)arg4;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

