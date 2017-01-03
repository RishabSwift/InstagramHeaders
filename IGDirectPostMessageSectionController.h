//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGDirectMessageCellAvatarDelegate.h"
#import "IGDirectMessageCellDoubleTapLikeDelegate.h"
#import "IGListSectionType.h"

@class IGDirectMessageItemComponents, IGDirectPostMessageViewModel, NSString;

@interface IGDirectPostMessageSectionController : IGListSectionController <IGDirectMessageCellAvatarDelegate, IGDirectMessageCellDoubleTapLikeDelegate, IGListSectionType>
{
    IGDirectPostMessageViewModel *_viewModel;
    IGDirectMessageItemComponents *_components;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGDirectMessageItemComponents *components; // @synthesize components=_components;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithComponents:(id)arg1;
- (void)messageCellDidDoubleTapToLike:(id)arg1;
- (void)messageCellDidTapAvatar:(id)arg1;
- (long long)numberOfItems;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGDirectPostMessageViewModel *viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
