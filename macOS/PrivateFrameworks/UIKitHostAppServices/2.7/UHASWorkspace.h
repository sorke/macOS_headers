//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitHostAppServices/UHAServiceInterface-Protocol.h>

@class NSString;
@protocol UHAApplicationInterface, UHAAuthKitInterface, UHAHidManagerInterface, UHAProcessInfoInterface, UHAServicePrivateInterface, UHATextInputInterface;

@interface UHASWorkspace : NSObject <UHAServiceInterface>
{
    id <UHAServicePrivateInterface> _remoteProxy;
    id <UHAApplicationInterface> _application;
    id <UHAAuthKitInterface> _authKit;
    id <UHAProcessInfoInterface> _processInfo;
    id <UHAHidManagerInterface> _hidManager;
    id <UHATextInputInterface> _textInput;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <UHATextInputInterface> textInput; // @synthesize textInput=_textInput;
@property(retain, nonatomic) id <UHAHidManagerInterface> hidManager; // @synthesize hidManager=_hidManager;
@property(retain, nonatomic) id <UHAProcessInfoInterface> processInfo; // @synthesize processInfo=_processInfo;
@property(retain, nonatomic) id <UHAAuthKitInterface> authKit; // @synthesize authKit=_authKit;
@property(retain, nonatomic) id <UHAApplicationInterface> application; // @synthesize application=_application;
@property(retain, nonatomic) id <UHAServicePrivateInterface> remoteProxy; // @synthesize remoteProxy=_remoteProxy;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

