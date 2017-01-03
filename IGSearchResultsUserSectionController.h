//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSearchResultsSectionController.h"

@class IGUserSession, NSString;

@interface IGSearchResultsUserSectionController : NSObject <IGSearchResultsSectionController>
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)analyticsInfoForItem:(id)arg1;
- (_Bool)canHandleItem:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (id)tableView:(id)arg1 cellForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewControllerForItem:(id)arg2 atIndexPath:(id)arg3;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

