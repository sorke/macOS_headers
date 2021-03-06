//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RedRock/RKQueryResult.h>

@interface IPQueryResultObserver : RKQueryResult
{
}

+ (double)epochLastTouched;
+ (void)ensureInstalled;
- (void)notifyObserversOfRegeneratedResult:(id)arg1;
- (void)regenerate;
- (void)refilter;
- (void)sortFilteredVersions;
- (void)expandSortedVersions;
- (void)expandSortedVersionsWithStackUuidToVersions:(id)arg1;
- (id)determineVersionsToSort:(id)arg1;
- (id)currentPicksForStackUuids:(id)arg1;
- (id)createVersionRefsFromVersions:(id)arg1 forPerAlbumRef:(id)arg2;
- (void)moveVersions:(id)arg1;
- (void)removeVersions:(id)arg1;
- (void)addVersionsAtIndexes:(id)arg1;
- (void)changeToAllVersionsForKeyPath:(id)arg1;
- (void)restackOfVersions:(id)arg1 withStackUuids:(id)arg2 forKeyPath:(id)arg3;
- (void)changeToStackState:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)affectedByChangeToStackState:(id)arg1 forKeyPath:(id)arg2;
- (void)changeToProjectUuidForVersions:(id)arg1 versionIds:(id)arg2;
- (void)newVersions:(id)arg1;
- (void)stackChangeToVersions:(id)arg1 withStackUuids:(id)arg2 forKeyPath:(id)arg3;
- (void)changeToVersions:(id)arg1 forKeyPath:(id)arg2;
- (void)changeToVersion:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)affectedByChangeToVersions:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)affectedByChangeToVersion:(id)arg1 forKeyPath:(id)arg2;
- (void)removeVersion:(id)arg1;
- (void)contentChangedForContainers:(id)arg1;
- (BOOL)affectedByContentChangeOfContainers:(id)arg1;
- (void)deleteOfContainers:(id)arg1;
- (BOOL)affectedByDeleteOfContainers:(id)arg1;
- (void)contentChangedForAlbum:(id)arg1;
- (BOOL)affectedByChangeToAlbum:(id)arg1;
- (void)selectionChangedTo:(BOOL)arg1 forVersions:(id)arg2;
- (void)endSelections;
- (void)beginSelections;
- (void)sortOrderChanged;
- (void)filterChanged;
- (void)userQueryChanged;
- (void)forceRegenerate;
- (void)observeChangeToObject:(id)arg1 forKeyPath:(id)arg2;
- (id)allResultObserversForAlbumRef:(id)arg1;
- (void)removeResultObserver:(id)arg1 forAlbumRef:(id)arg2;
- (void)addResultObserver:(id)arg1 forAlbumRef:(id)arg2;
- (BOOL)hasAnyResultObserverForAlbumRef:(id)arg1;
- (void)requestResendFullResult:(id)arg1;
- (void)resendFullResult;
- (id)expandedSortedVersions;
- (id)dataNodeForUuid:(id)arg1 inAlbumRef:(id)arg2;
- (void)setUnfilteredVersionIds:(id)arg1;
- (id)filteredVersionIds;
- (id)unfilteredVersionIds;
- (BOOL)versionIdInUnfilteredResult:(unsigned long long)arg1;
- (id)versionRefsForAlbumRef:(id)arg1;
- (unsigned long long)count;
- (void)deactivateAlbumRef:(id)arg1;
- (void)addAlbumRef:(id)arg1;
- (id)resultPerAlbumRef:(id)arg1;
- (id)allPerAlbumRefs;
- (void)setStackPicksOnly:(BOOL)arg1;
- (BOOL)stackPicksOnly;
- (void)setFilter:(id)arg1;
- (id)filter;
- (id)overrideFilter;
- (id)userQuery;
- (void)setSortAscending:(BOOL)arg1;
- (BOOL)sortAscending;
- (void)setSortKeyPath:(id)arg1;
- (id)sortKeyPath;
- (id)database;
- (id)albumRef;
- (id)album;
- (void)sendStatus:(int)arg1;
- (void)sendMovedVersions:(id)arg1 fromIndexes:(id)arg2 toIndexes:(id)arg3;
- (void)sendRemovedVersionsAtIndexes:(id)arg1;
- (void)sendAddedVersions:(id)arg1 atIndexes:(id)arg2;
- (void)sendRegeneratedVersions:(id)arg1;
- (id)batchMessageWithTask:(unsigned long long)arg1;
- (void)sendBatchedMessages;
- (void)deactivateMessageBatching;
- (void)activateMessageBatching;
- (void)disableDelayedSorting;
- (void)enableDelayedSorting;
- (void)setNeedsDelayedSort;
- (BOOL)isSortingDelayed;
- (BOOL)activateWithAlbumRef:(id)arg1;
- (void)becomeInactive;
- (void)deactivate;
- (long long)decrementActiveUseCount;
- (long long)incrementActiveUseCount;
- (long long)activeUseCount;
- (void)_handleAbort;
- (void)setIsValid:(BOOL)arg1;
- (BOOL)isValid;
- (BOOL)isUpToDate;
- (BOOL)isActive;
- (id)description;
- (id)init;
- (void)touch;

@end

