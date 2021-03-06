//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGStorableObject.h"

#import "IGSearchResultsLoggableItem.h"

@class IGLocation, NSArray, NSString;

@interface IGPlace : IGStorableObject <IGSearchResultsLoggableItem>
{
    IGLocation *_location;
    NSArray *_mediaBundles;
    NSString *_title;
    NSString *_subtitle;
    NSString *_byline;
}

+ (id)centralizedStore;
+ (id)loggingLocationIdsForPlaces:(id)arg1;
+ (id)pkFromDict:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *byline; // @synthesize byline=_byline;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) IGLocation *location; // @synthesize location=_location;
- (id)loggingDescription;
@property(readonly, nonatomic) NSArray *mediaBundles; // @synthesize mediaBundles=_mediaBundles;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)updateWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

