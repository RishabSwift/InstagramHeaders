//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLoadMoreResponseType.h"

@class NSArray;

@interface IGStoryStaticStickerResponse : NSObject <IGLoadMoreResponseType>
{
    NSArray *_staticStickers;
}

- (void).cxx_destruct;
- (id)initWithStaticStickers:(id)arg1;
- (id)maxId;
@property(readonly, copy, nonatomic) NSArray *staticStickers; // @synthesize staticStickers=_staticStickers;

@end

