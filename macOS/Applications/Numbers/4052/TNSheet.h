//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSCEResolverContainer-Protocol.h"
#import "TSDDrawableContainerInfo-Protocol.h"
#import "TSKDocumentObject-Protocol.h"
#import "TSKModel-Protocol.h"
#import "TSKSearchTarget-Protocol.h"
#import "TSWPHeaderFooterProvider-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSObject, NSString, TNDocumentRoot, TSDGuideStorage, TSDInfoGeometry, TSWPStorage;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TNSheet : TSPObject <GSSPAutoEncodable, TSKDocumentObject, TSKSearchTarget, TSKModel, TSCEResolverContainer, TSDDrawableContainerInfo, TSWPHeaderFooterProvider>
{
    NSString *mName;
    NSMutableArray *mChildInfos;
    BOOL mInDocument;
    unsigned int mTableNameCounter;
    TSDGuideStorage *mUserDefinedGuideStorage;
    TSWPStorage *mHeaderFooters[2][3];
    NSMutableSet *mRemappedTableNames;
    BOOL mInPortraitPageOrientation;
    BOOL mShowPageNumbers;
    BOOL mIsAutofitOn;
    BOOL _usingStartPageNumber;
    BOOL mUsesSingleHeaderFooter;
    int mPageOrder;
    double mContentScale;
    long long _startPageNumber;
    double _pageHeaderInset;
    double _pageFooterInset;
    struct NSEdgeInsets _printMargins;
}

+ (BOOL)needsObjectUUID;
+ (id)sheetForSelectionModel:(id)arg1 outIsPaginated:(char *)arg2;
@property(nonatomic) struct NSEdgeInsets printMargins; // @synthesize printMargins=_printMargins;
- (id)i_newHeaderFooterStorage;
- (void)i_importHeadersFooters:(id)arg1 headerType:(int)arg2 useSingleHeaderFooter:(BOOL)arg3;
- (struct CGRect)frame;
@property(readonly, copy) NSString *description;
- (void)saveToArchive:(struct SheetArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initFromArchive:(const struct SheetArchive *)arg1 unarchiver:(id)arg2;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) NSArray *alignmentGuidesForEditing;
@property(readonly, nonatomic) NSArray *alignmentGuides;
- (BOOL)isThemeContent;
- (BOOL)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildInfo:(id)arg1;
- (BOOL)isForm;
- (void)clearRemappedTableNames;
- (id)remappedTableNames;
- (void)addRemappedTableName:(id)arg1;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (unsigned int)saveNextUntitledResolverIndex;
- (unsigned int)nextUntitledResolverIndex;
- (BOOL)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)childEnumerator;
- (id)childSearchTargets;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)p_dolcDispatch:(id)arg1 skippingTextBoxes:(BOOL)arg2;
- (BOOL)hasReferenceToTables:(id)arg1;
- (id)tableInfoForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)tableInfos;
- (id)chartAndTableInfos;
- (void)moveDrawables:(id)arg1 toIndexes:(id)arg2;
- (BOOL)canMoveDrawables:(id)arg1 toIndexes:(id)arg2;
- (void)removeDrawableInfos:(id)arg1;
- (void)removeDrawableInfo:(id)arg1;
- (void)insertDrawableInfos:(id)arg1 context:(id)arg2;
- (void)insertDrawableInfos:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3;
- (void)insertDrawableInfo:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3;
- (void)insertDrawableInfo:(id)arg1 context:(id)arg2;
- (void)setChildInfos:(id)arg1;
- (id)childInfos;
- (id)infoForSelectionPath:(id)arg1;
@property(nonatomic) BOOL usesSingleHeaderFooter; // @synthesize usesSingleHeaderFooter=mUsesSingleHeaderFooter;
@property double pageFooterInset; // @synthesize pageFooterInset=_pageFooterInset;
@property double pageHeaderInset; // @synthesize pageHeaderInset=_pageHeaderInset;
@property long long startPageNumber; // @synthesize startPageNumber=_startPageNumber;
@property(getter=isUsingStartPageNumber) BOOL usingStartPageNumber; // @synthesize usingStartPageNumber=_usingStartPageNumber;
@property int pageOrder; // @synthesize pageOrder=mPageOrder;
@property(nonatomic) double contentScale; // @synthesize contentScale=mContentScale;
@property(nonatomic) BOOL isAutofitOn; // @synthesize isAutofitOn=mIsAutofitOn;
@property(nonatomic) BOOL showPageNumbers; // @synthesize showPageNumbers=mShowPageNumbers;
@property(nonatomic) BOOL inPortraitPageOrientation; // @synthesize inPortraitPageOrientation=mInPortraitPageOrientation;
- (BOOL)shouldBeDisplayed;
@property(readonly, nonatomic) TNDocumentRoot *documentRoot;
@property(retain, nonatomic) TSDGuideStorage *userDefinedGuideStorage;
@property(retain, nonatomic) NSString *name;
- (id)headerFooterFragmentEnumerator;
@property(readonly, nonatomic) NSArray *footerStorages;
@property(readonly, nonatomic) NSArray *headerStorages;
- (id)p_storagesForHeaderType:(int)arg1;
- (int)headerFragmentIndexForModel:(id)arg1;
- (int)headerFooterTypeForModel:(id)arg1;
- (BOOL)isHeaderFooterEmpty:(int)arg1 fragmentAtIndex:(int)arg2;
- (BOOL)isHeaderFooterEmpty:(int)arg1;
- (id)headerFooter:(int)arg1 fragmentAtIndex:(int)arg2;
- (void)enumerateHeaderFooterStoragesWithBlock:(CDUnknownBlockType)arg1;
- (void)p_createHeadersFooters:(int)arg1 stylesheet:(id)arg2 mayAlreadyExist:(BOOL)arg3;
- (id)p_newHeaderFooterStorageWithStylesheet:(id)arg1;
- (double)bodyWidth;
- (void)dealloc;
- (void)p_setupHeadersFooters;
- (id)initWithContext:(id)arg1;
- (void)populateGSSPSheet:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end

