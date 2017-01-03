//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGInstaVideoIntervalPuller, NSArray;

@interface IGLiveHomeInstaVideoInfoIntervalPuller : NSObject
{
    id <IGLiveHomeInstaVideoInfoIntervalPullerDelegate> _delegate;
    IGInstaVideoIntervalPuller *_intervalPuller;
    NSArray *_mediaIds;
}

+ (id)broadcastUpdateFromDictionary:(id)arg1;
+ (CDUnknownBlockType)parsingHandler;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveHomeInstaVideoInfoIntervalPullerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithPullInterval:(double)arg1 networker:(id)arg2;
@property(readonly, nonatomic) IGInstaVideoIntervalPuller *intervalPuller; // @synthesize intervalPuller=_intervalPuller;
@property(copy, nonatomic) NSArray *mediaIds; // @synthesize mediaIds=_mediaIds;
- (CDUnknownBlockType)requestFactory;
- (void)startPulling;
- (void)stopPulling;
- (CDUnknownBlockType)successHandler;
- (void)updateWithMediaIds:(id)arg1;

@end

