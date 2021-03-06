//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>

@class NSIndexPath, NSString;

@interface _NSCollectionViewItemKey : NSObject <NSCopying>
{
    NSIndexPath *_indexPath;
    NSString *_identifier;
    BOOL _isClone;
    long long _type;
}

+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;
@property(readonly, nonatomic) BOOL isClone; // @synthesize isClone=_isClone;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyAsClone:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithType:(long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(BOOL)arg4;
- (id)initWithType:(long long)arg1 indexPath:(id)arg2 identifier:(id)arg3;

@end

