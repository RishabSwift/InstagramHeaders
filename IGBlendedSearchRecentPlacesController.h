//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGBlendedSearchRecentSectionController.h"

@class IGAutocompletePlacesStore, NSString;

@interface IGBlendedSearchRecentPlacesController : NSObject <IGBlendedSearchRecentSectionController>
{
    IGAutocompletePlacesStore *_autocompletePlacesStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGAutocompletePlacesStore *autocompletePlacesStore; // @synthesize autocompletePlacesStore=_autocompletePlacesStore;
- (_Bool)canHandleItem:(id)arg1;
- (id)identifierForItem:(id)arg1;
- (id)initWithAutocompletePlacesStore:(id)arg1;
- (id)itemType;
- (id)recentPlaces;
- (id)restoreItemUsingIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

