//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGFeedItem, NSString;

@interface IGChannelModel : NSObject <IGListDiffable>
{
    NSString *_channelId;
    NSString *_channelType;
    NSString *_header;
    NSString *_title;
    NSString *_context;
    IGFeedItem *_post;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(readonly, copy, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
- (id)diffIdentifier;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
- (id)initWithChannelId:(id)arg1 channelType:(id)arg2 header:(id)arg3 title:(id)arg4 context:(id)arg5 feedItem:(id)arg6;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(retain, nonatomic) IGFeedItem *post; // @synthesize post=_post;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

