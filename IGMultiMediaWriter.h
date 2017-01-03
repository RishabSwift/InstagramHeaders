//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;

@interface IGMultiMediaWriter : NSObject
{
    _Bool _hasBegunWriting;
    NSMutableArray *_items;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_coordinatorQueue;
    struct CGSize _size;
}

- (void).cxx_destruct;
- (void)appendItem:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *coordinatorQueue; // @synthesize coordinatorQueue=_coordinatorQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property _Bool hasBegunWriting; // @synthesize hasBegunWriting=_hasBegunWriting;
- (id)initWithVideoSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)prepareAssets;
- (void)renderWithCompletion:(CDUnknownBlockType)arg1;
- (void)renderWithPreparedAssets;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;

@end

