//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMediaViewerProducer.h"
#import "IGDirectMessageViewModelProtocol.h"
#import "IGListDiffable.h"

@class IGDirectMessageMetadata, IGDirectMessageViewModelMetadata, IGDirectTextMessageBubbleViewModel, NSString, NSURL;

@interface IGDirectReelMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGListDiffable, IGDirectMediaViewerProducer>
{
    _Bool _isExpired;
    IGDirectMessageMetadata *_messageMetadata;
    IGDirectMessageViewModelMetadata *_viewModelMetadata;
    NSString *_headerText;
    NSURL *_imageURL;
    IGDirectTextMessageBubbleViewModel *_textBubbleViewModel;
    double _headerHeight;
    double _itemPadding;
    NSString *_contentTypeString;
    id <IGExpiringMediaPosting> _feedItem;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double cellHeight;
@property(readonly, copy, nonatomic) NSString *contentTypeString; // @synthesize contentTypeString=_contentTypeString;
@property(readonly, copy) NSString *description;
- (id)diffIdentifier;
@property(readonly, nonatomic) id <IGExpiringMediaPosting> feedItem; // @synthesize feedItem=_feedItem;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(readonly, copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (id)headerTextFromReelMessage:(id)arg1 viewModelMetadata:(id)arg2;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (id)initWithReelMessage:(id)arg1 viewModelMetadata:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(readonly, nonatomic) double itemPadding; // @synthesize itemPadding=_itemPadding;
- (id)mediaViewerWithPreviewImage:(id)arg1;
@property(readonly, nonatomic) IGDirectMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
@property(readonly, nonatomic) IGDirectTextMessageBubbleViewModel *textBubbleViewModel; // @synthesize textBubbleViewModel=_textBubbleViewModel;
@property(readonly, nonatomic) IGDirectMessageViewModelMetadata *viewModelMetadata; // @synthesize viewModelMetadata=_viewModelMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

