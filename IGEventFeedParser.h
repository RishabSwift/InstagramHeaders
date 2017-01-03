//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGNetworkParser.h"

@class IGFeedItemStore, NSString;

@interface IGEventFeedParser : NSObject <IGNetworkParser>
{
    NSString *_eventId;
    IGFeedItemStore *_feedItemStore;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) IGFeedItemStore *feedItemStore; // @synthesize feedItemStore=_feedItemStore;
- (id)initWithEventId:(id)arg1;
- (id)initWithEventId:(id)arg1 feedItemStore:(id)arg2;
- (id)parseDataFromResponse:(id)arg1;
- (id)parsedObjectFromResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
