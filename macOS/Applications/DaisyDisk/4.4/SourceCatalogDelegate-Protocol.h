//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class DirectorySource, SourceCatalog, StarredSource, VolumeSource;

@protocol SourceCatalogDelegate
- (void)sourceCatalog:(SourceCatalog *)arg1 didRemoveStarredSource:(StarredSource *)arg2;
- (void)sourceCatalog:(SourceCatalog *)arg1 didInsertStarredSource:(StarredSource *)arg2 atIndex:(unsigned long long)arg3;
- (void)sourceCatalog:(SourceCatalog *)arg1 didRemoveDirectorySource:(DirectorySource *)arg2;
- (void)sourceCatalog:(SourceCatalog *)arg1 didInsertDirectorySource:(DirectorySource *)arg2 atIndex:(unsigned long long)arg3;
- (void)sourceCatalog:(SourceCatalog *)arg1 didRemoveVolumeSource:(VolumeSource *)arg2;
- (void)sourceCatalog:(SourceCatalog *)arg1 didInsertVolumeSource:(VolumeSource *)arg2 atIndex:(unsigned long long)arg3;
@end

