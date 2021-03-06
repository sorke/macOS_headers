//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSImage, NSImageView, NSString, NSTextField, NSWindow;

@interface coconutBattery.PrefLicenseViewController : NSViewController
{
    // Error parsing type: , name: registerStatus
    // Error parsing type: , name: licenseStatusIcon
    // Error parsing type: , name: startTrialButton
    // Error parsing type: , name: enterLicenseCode
    // Error parsing type: , name: enterLicenseEMail
    // Error parsing type: , name: licenseEnterWindow
    // Error parsing type: , name: licenseStatusText
    // Error parsing type: , name: hideLicenseInvalidWarning
    // Error parsing type: , name: displayEMail
    // Error parsing type: , name: displayLicenseCode
    // Error parsing type: , name: trialCount
    // Error parsing type: , name: hasResizableWidth
    // Error parsing type: , name: hasResizableHeight
    // Error parsing type: , name: trialProvider
    // Error parsing type: , name: licenseProvider
    // Error parsing type: , name: clock
    // Error parsing type: , name: licenseInfoProvider.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)clearInvalidWarning:(id)arg1;
- (void)registerCode:(id)arg1;
- (void)cancel:(id)arg1;
- (void)registerWithSender:(id)arg1;
- (void)buyLicenseOnline:(id)arg1;
- (void)startTrial:(id)arg1;
- (void)moreInfo:(id)arg1;
- (void)checkLicense;
- (void)checkLicense_2;
- (BOOL)licenseIsInvalid;
- (void)viewWillAppear;
- (void)viewDidLoad;
@property(nonatomic) BOOL hasResizableHeight; // @synthesize hasResizableHeight;
@property(nonatomic) BOOL hasResizableWidth; // @synthesize hasResizableWidth;
@property(nonatomic, readonly) NSString *toolbarItemLabel;
@property(nonatomic, readonly) NSImage *toolbarItemImage;
@property(nonatomic, copy) NSString *identifier;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic) long long trialCount; // @synthesize trialCount;
@property(nonatomic, copy) NSString *displayLicenseCode; // @synthesize displayLicenseCode;
@property(nonatomic, copy) NSString *displayEMail; // @synthesize displayEMail;
@property(nonatomic) BOOL hideLicenseInvalidWarning; // @synthesize hideLicenseInvalidWarning;
@property(nonatomic, copy) NSString *licenseStatusText; // @synthesize licenseStatusText;
@property(nonatomic, retain) NSWindow *licenseEnterWindow; // @synthesize licenseEnterWindow;
@property(nonatomic) __weak NSTextField *enterLicenseEMail; // @synthesize enterLicenseEMail;
@property(nonatomic) __weak NSTextField *enterLicenseCode; // @synthesize enterLicenseCode;
@property(nonatomic) __weak NSButton *startTrialButton; // @synthesize startTrialButton;
@property(nonatomic) __weak NSImageView *licenseStatusIcon; // @synthesize licenseStatusIcon;
@property(nonatomic) __weak NSTextField *registerStatus; // @synthesize registerStatus;

@end

