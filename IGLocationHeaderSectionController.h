//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListSectionType.h"
#import "IGLocationHeaderViewDelegate.h"

@class IGLocation, IGUserSession, NSString;

@interface IGLocationHeaderSectionController : IGListSectionController <IGLocationHeaderViewDelegate, IGListSectionType>
{
    IGUserSession *_userSession;
    IGLocation *_location;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)displayDelegate;
- (id)initWithUserSession:(id)arg1;
@property(readonly, nonatomic) IGLocation *location; // @synthesize location=_location;
- (void)locationHeaderViewMapTapped:(id)arg1;
- (long long)numberOfItems;
- (void)openInMaps;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)workingRangeDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
