//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSXMLNode.h>

@class NSArray, NSData, NSString, NSXMLDTD, NSXMLElement;

@interface NSXMLDocument : NSXMLNode
{
    NSString *_encoding;
    NSString *_version;
    NSXMLDTD *_docType;
    NSArray *_children;
    BOOL _childrenHaveMutated;
    BOOL _standalone;
    char padding[2];
    NSXMLElement *_rootElement;
    NSString *_URI;
    id _extraIvars;
    unsigned long long _fidelityMask;
    unsigned long long _contentKind;
}

+ (id)_contentsOfHTMLData:(id)arg1 encoding:(id)arg2 strippingTagsSeparatedByString:(id)arg3;
+ (id)_nodeFromLibXML2Node:(void *)arg1;
+ (void)_loadXSLT;
+ (Class)replacementClassForClass:(Class)arg1;
+ (void)_setXMLTagsAllowableInHTML:(id)arg1;
+ (BOOL)_instancesShouldLoadExternalEntities;
+ (void)_setInstancesShouldLoadExternalEntities:(BOOL)arg1;
- (void)_setContentKindAndEncoding;
- (void)_initWithLibTidyDoc:(struct _TidyDoc *)arg1 child:(struct _TidyNode *)arg2 encoding:(unsigned int)arg3;
- (struct _xmlDoc *)_libxml2TreeRepresentation;
- (BOOL)_validateWithSchemaAndReturnError:(id *)arg1;
- (BOOL)validateAndReturnError:(id *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_applyStylesheet:(struct _xmlDoc *)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)objectByApplyingXSLTAtURL:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)objectByApplyingXSLTString:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)objectByApplyingXSLT:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)objectByApplyingXSLTAtURL:(id)arg1 error:(id *)arg2;
- (id)objectByApplyingXSLT:(id)arg1 error:(id *)arg2;
- (id)XMLDataWithOptions:(unsigned long long)arg1;
@property(readonly, copy) NSData *XMLData;
- (id)_canonicalXMLStringPreservingComments:(BOOL)arg1 namespaceString:(id)arg2 relationships:(id)arg3;
- (id)canonicalXMLStringPreservingComments:(BOOL)arg1;
- (id)XMLStringWithOptions:(unsigned long long)arg1;
- (void)replaceObjectInChildrenAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromChildrenAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildrenAtIndex:(unsigned long long)arg2;
- (id)objectInChildrenAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfChildren;
- (void)replaceChildAtIndex:(unsigned long long)arg1 withNode:(id)arg2;
- (void)addChild:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)removeChildAtIndex:(unsigned long long)arg1;
- (void)insertChildren:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)XPath;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (id)_children;
- (id)children;
- (void)setStringValue:(id)arg1 resolvingEntities:(BOOL)arg2;
- (id)stringValue;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (id)rootElement;
- (void)setRootElement:(id)arg1;
@property(copy) NSXMLDTD *DTD;
@property(copy) NSString *MIMEType;
@property unsigned long long documentContentKind;
@property(getter=isStandalone) BOOL standalone;
- (id)URI;
- (void)setURI:(id)arg1;
@property(copy) NSString *version;
@property(copy) NSString *characterEncoding;
- (id)_tidyWithData:(id)arg1 error:(id *)arg2 isXML:(BOOL)arg3 detectedEncoding:(unsigned int)arg4;
- (id)initWithRootElement:(id)arg1;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_initWithData:(id)arg1 encoding:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 validExternalEntityURLs:(id)arg3 error:(id *)arg4;
- (id)initWithXMLString:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)init;
- (void)dealloc;
- (id)initWithKind:(unsigned long long)arg1 options:(unsigned long long)arg2;

@end

