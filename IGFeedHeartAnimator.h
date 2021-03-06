//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGHeartView, UICollectionView;

@interface IGFeedHeartAnimator : NSObject
{
    _Bool _usesLegacyAnimation;
    IGHeartView *_heartImageView;
    id _heartLikeFeedItem;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
- (void)animateHeartLikeForCell:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateHeartLikeForItem:(id)arg1 atIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGHeartView *heartImageView; // @synthesize heartImageView=_heartImageView;
@property(retain, nonatomic) id heartLikeFeedItem; // @synthesize heartLikeFeedItem=_heartLikeFeedItem;
- (id)init;
- (id)initWithCollectionView:(id)arg1 usesLegacyAnimation:(_Bool)arg2;
- (void)updateHeartImageViewLocationToSection:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool usesLegacyAnimation; // @synthesize usesLegacyAnimation=_usesLegacyAnimation;

@end

