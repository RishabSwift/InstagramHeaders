//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGHeartAnimatable.h"

@class IGFeedItem, NSArray, NSString, UINavigationController;

@interface IGFeedItemMediaCell : UICollectionViewCell <IGHeartAnimatable>
{
    NSArray *_defaultAccessibilityElements;
    IGFeedItem *_post;
    UINavigationController *_navigationController;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityIdentifier;
- (id)contentViewForHeartAnimation;
@property(readonly, nonatomic) NSArray *defaultAccessibilityElements; // @synthesize defaultAccessibilityElements=_defaultAccessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) IGFeedItem *post; // @synthesize post=_post;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

