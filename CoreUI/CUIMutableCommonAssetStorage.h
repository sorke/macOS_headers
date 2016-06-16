//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUICommonAssetStorage.h>

@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage
{
}

- (BOOL)writeToDisk;
- (BOOL)writeToDiskAndCompact:(BOOL)arg1;
- (void)setZeroCodeBezelInformation:(CDStruct_c0454aff)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3;
- (void)setZeroCodeGlyphInformation:(CDStruct_c0454aff)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3;
- (void)_setZeroCodeInfo:(CDStruct_c0454aff)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3 inTree:(const void *)arg4;
- (void)setRenditionKey:(const struct _renditionkeytoken *)arg1 hotSpot:(struct CGPoint)arg2 forName:(const char *)arg3;
- (void)removeAssetForKey:(const void *)arg1 withLength:(unsigned long long)arg2;
- (void)removeAssetForKey:(id)arg1;
- (void)setExternalTags:(id)arg1;
- (void)setFontSize:(float)arg1 forFontSizeSelector:(id)arg2;
- (void)setFontName:(id)arg1 baselineOffset:(float)arg2 forFontSelector:(id)arg3;
- (void)setColor:(struct _rgbquad)arg1 forName:(const char *)arg2 excludeFromFilter:(BOOL)arg3;
- (void)setCatalogGlobalData:(id)arg1;
- (void)setAsset:(id)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3;
- (void)setAsset:(id)arg1 forKey:(id)arg2;
- (void)setColorSpaceID:(unsigned int)arg1;
- (void)setAssociatedChecksum:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (void)setRenditionCount:(unsigned int)arg1;
- (void)setSchemaVersion:(unsigned int)arg1;
- (void)setVersionString:(const char *)arg1;
- (void)setStorageVersion:(unsigned int)arg1;
- (void)setKeySemantics:(int)arg1;
- (void)setKeyFormatData:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

