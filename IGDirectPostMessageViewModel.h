//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageViewModelProtocol.h"
#import "IGDirectReshareMessageHeaderViewModel.h"
#import "IGListDiffable.h"

@class IGDirectMessageMetadata, IGDirectMessageViewModelMetadata, IGFeedItem, NSString, NSURL;

@interface IGDirectPostMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGDirectReshareMessageHeaderViewModel, IGListDiffable>
{
    IGDirectMessageMetadata *_messageMetadata;
    IGDirectMessageViewModelMetadata *_viewModelMetadata;
    NSURL *_imageURL;
    IGFeedItem *_feedItem;
    struct CGSize _photoSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double cellHeight;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, copy) NSString *description;
- (id)diffIdentifier;
@property(readonly, nonatomic) _Bool displaysVideoIndicator;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (id)initWithPostMessage:(id)arg1 viewModelMetadata:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) IGDirectMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
@property(readonly, nonatomic) struct CGSize photoSize; // @synthesize photoSize=_photoSize;
- (id)reshareSubtitle;
- (id)reshareTitle;
- (id)reshareUser;
- (_Bool)senderIsCurrentUser;
@property(readonly, nonatomic) IGDirectMessageViewModelMetadata *viewModelMetadata; // @synthesize viewModelMetadata=_viewModelMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

