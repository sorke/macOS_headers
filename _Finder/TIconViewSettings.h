//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FINode, NSColor, NSData, NSDictionary, NSString;

@interface TIconViewSettings : NSObject
{
    struct TNSRef<NSMutableDictionary *> _settings;
}

+ (id)settingsForNode:(struct TFENode *)arg1;
+ (id)settingsFromViewOptions:(id)arg1;
+ (id)settingsFromPList:(id)arg1;
+ (id)settingsFromBrowserSettings:(struct TIconBrowserSettings *)arg1;
+ (id)defaultSettingsForNewUser;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isEquivalentTo:(id)arg1;
@property(nonatomic) struct CGPoint scrollPosition; // @dynamic scrollPosition;
@property(retain, nonatomic) NSData *backgroundImageBookmark; // @dynamic backgroundImageBookmark;
- (void)setBackgroundImageAlias:(id)arg1;
- (id)backgroundImageAlias;
@property(nonatomic) FINode *backgroundImageFINode; // @dynamic backgroundImageFINode;
@property(retain, nonatomic) NSColor *backgroundColor; // @dynamic backgroundColor;
- (void)setBackgroundColorRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
@property(nonatomic) int backgroundType; // @dynamic backgroundType;
@property(retain, nonatomic) NSString *arrangeBy; // @dynamic arrangeBy;
@property(nonatomic) _Bool showIconPreview; // @dynamic showIconPreview;
@property(nonatomic) _Bool showItemInfo; // @dynamic showItemInfo;
@property(nonatomic) _Bool labelOnBottom; // @dynamic labelOnBottom;
@property(nonatomic) struct CGPoint gridOffset; // @dynamic gridOffset;
@property(nonatomic) double gridSpacing; // @dynamic gridSpacing;
@property(nonatomic) double textSize; // @dynamic textSize;
@property(nonatomic) double iconSize; // @dynamic iconSize;
@property(readonly, retain, nonatomic) NSDictionary *settings; // @dynamic settings;
- (unsigned long long)checkIntegrity:(const struct TFENode *)arg1;
- (_Bool)checkNumberSettingForKey:(id)arg1 lowValue:(double)arg2 highValue:(double)arg3;
- (id)initWithPList:(id)arg1;
- (id)initWithIconBrowserSettings:(struct TIconBrowserSettings *)arg1;

@end

