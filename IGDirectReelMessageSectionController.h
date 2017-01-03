//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGDirectMediaViewerTransitionManagerDelegate.h"
#import "IGDirectMessageCellAvatarDelegate.h"
#import "IGListSectionType.h"

@class IGDirectMessageItemComponents, IGDirectReelMessageViewModel, NSString;

@interface IGDirectReelMessageSectionController : IGListSectionController <IGDirectMediaViewerTransitionManagerDelegate, IGDirectMessageCellAvatarDelegate, IGListSectionType>
{
    IGDirectReelMessageViewModel *_viewModel;
    IGDirectMessageItemComponents *_components;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGDirectMessageItemComponents *components; // @synthesize components=_components;
- (void)didCalculateSourceRectForPresentation;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithComponents:(id)arg1;
- (void)messageCellDidTapAvatar:(id)arg1;
- (long long)numberOfItems;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGDirectReelMessageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)visibleMediaCellForMediaViewerProducer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
