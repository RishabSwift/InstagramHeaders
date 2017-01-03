//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DDLogger.h"

@class NSDateFormatter, NSMutableArray, NSString, UITextView, UIView;

@interface IGVideoDebugController : NSObject <DDLogger>
{
    id <DDLogFormatter> _logFormatter;
    NSMutableArray *_messages;
    NSDateFormatter *_dateFormatter;
    UITextView *_textView;
}

- (void).cxx_destruct;
- (void)clearConsole;
- (void)consoleTextToPasteboard;
@property(readonly, nonatomic) UIView *consoleView;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (id)init;
@property(retain, nonatomic) id <DDLogFormatter> logFormatter; // @synthesize logFormatter=_logFormatter;
- (void)logMessage:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

