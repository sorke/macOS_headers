//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"

@class NSString;

@interface MenuController : NSObject <NSMenuDelegate>
{
    struct MenuModel *model_;
    struct scoped_nsobject<NSMenu> menu_;
    BOOL useWithPopUpButtonCell_;
    BOOL isMenuOpen_;
}

+ (basic_string_61b65554)elideMenuTitle:(const basic_string_61b65554 *)arg1 toWidth:(int)arg2;
@property(nonatomic) BOOL useWithPopUpButtonCell; // @synthesize useWithPopUpButtonCell=useWithPopUpButtonCell_;
@property(nonatomic) struct MenuModel *model; // @synthesize model=model_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (BOOL)isMenuOpen;
- (id)menu;
- (void)itemSelected:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)addItemToMenu:(id)arg1 atIndex:(long long)arg2 fromModel:(struct MenuModel *)arg3;
- (void)addSeparatorToMenu:(id)arg1 atIndex:(int)arg2;
- (int)maxWidthForMenuModel:(struct MenuModel *)arg1 modelIndex:(int)arg2;
- (id)menuFromModel:(struct MenuModel *)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithModel:(struct MenuModel *)arg1 useWithPopUpButtonCell:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

