//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface DigiHubEvent : NSObject
{
    BOOL _performAtLogin;
    int _defaultAction;
    int _action;
    unsigned int _appleEventID;
    NSURL *_app;
    NSURL *_script;
    NSString *_event;
}

+ (id)digiHubEvent:(id)arg1 withDictionary:(id)arg2 defaultAction:(int)arg3 appleEventID:(unsigned int)arg4;
+ (id)digiHubEvent:(id)arg1 defaultAction:(int)arg2 appleEventID:(unsigned int)arg3 performAtLogin:(BOOL)arg4;
@property(readonly, nonatomic) BOOL performAtLogin; // @synthesize performAtLogin=_performAtLogin;
@property(readonly, nonatomic) unsigned int appleEventID; // @synthesize appleEventID=_appleEventID;
@property(readonly, nonatomic) NSString *event; // @synthesize event=_event;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) int defaultAction; // @synthesize defaultAction=_defaultAction;
@property(retain, nonatomic) NSURL *script; // @synthesize script=_script;
@property(retain, nonatomic) NSURL *app; // @synthesize app=_app;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (id)initWithEvent:(id)arg1 action:(int)arg2 app:(id)arg3 script:(id)arg4 defaultAction:(int)arg5 appleEventID:(unsigned int)arg6 performAtLogin:(BOOL)arg7;
- (id)initWithEvent:(id)arg1 withDictionary:(id)arg2 defaultAction:(int)arg3 appleEventID:(unsigned int)arg4;

@end

