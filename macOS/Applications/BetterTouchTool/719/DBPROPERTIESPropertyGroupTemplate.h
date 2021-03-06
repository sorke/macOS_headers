//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DBSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface DBPROPERTIESPropertyGroupTemplate : NSObject <DBSerializable, NSCopying>
{
    NSString *_name;
    NSString *_description_;
    NSArray *_fields;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSArray *fields; // @synthesize fields=_fields;
@property(readonly, copy, nonatomic) NSString *description_; // @synthesize description_=_description_;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqualToPropertyGroupTemplate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 description_:(id)arg2 fields:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

