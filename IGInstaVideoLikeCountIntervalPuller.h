//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGInstaVideoIntervalPuller.h"

@class NSNumber;

@interface IGInstaVideoLikeCountIntervalPuller : IGInstaVideoIntervalPuller
{
    id <IGInstaVideoLikeCountIntervalPullerDelegate> _delegate;
    NSNumber *_lastLikeTimestamp;
}

+ (CDUnknownBlockType)parsingHandler;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGInstaVideoLikeCountIntervalPullerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithMediaId:(id)arg1 networker:(id)arg2;
@property(retain, nonatomic) NSNumber *lastLikeTimestamp; // @synthesize lastLikeTimestamp=_lastLikeTimestamp;
- (CDUnknownBlockType)requestFactoryForMediaId:(id)arg1;
- (CDUnknownBlockType)successHandler;

@end

