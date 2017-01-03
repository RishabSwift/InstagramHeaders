//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGExploreTopLiveModel, NSArray;

@interface IGExploreStoryModuleModel : NSObject <IGListDiffable>
{
    IGExploreTopLiveModel *_topLiveModel;
    NSArray *_reels;
}

+ (id)modelWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)diffIdentifier;
- (id)initWithTopLiveModel:(id)arg1 reels:(id)arg2;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) NSArray *reels; // @synthesize reels=_reels;
@property(readonly, nonatomic) IGExploreTopLiveModel *topLiveModel; // @synthesize topLiveModel=_topLiveModel;

@end

