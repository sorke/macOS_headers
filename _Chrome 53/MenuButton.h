//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/ToolbarButton.h>

@class NSMenu;

@interface MenuButton : ToolbarButton
{
    struct scoped_nsobject<NSMenu> attachedMenu_;
    BOOL openMenuOnClick_;
    BOOL openMenuOnRightClick_;
    struct scoped_nsobject<NSPopUpButtonCell> popUpCell_;
}

+ (Class)cellClass;
@property(nonatomic) BOOL openMenuOnRightClick; // @synthesize openMenuOnRightClick=openMenuOnRightClick_;
@property(nonatomic) BOOL openMenuOnClick; // @synthesize openMenuOnClick=openMenuOnClick_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)menuRect;
@property(retain, nonatomic) NSMenu *attachedMenu;
- (void)rightMouseDown:(id)arg1;
- (void)setCell:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dragShowMenu:(id)arg1;
- (void)clickShowMenu:(id)arg1;
- (void)showMenu:(BOOL)arg1;
- (void)configureCell;

@end

