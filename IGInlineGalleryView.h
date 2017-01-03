//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGInlineGalleryTitleBarDelegate.h"

@class UIButton, UICollectionView, UIView<IGInlineGalleryTitleBar>;

@interface IGInlineGalleryView : UIView <IGInlineGalleryTitleBarDelegate>
{
    double _photoThumbnailSize;
    UIView<IGInlineGalleryTitleBar> *_titleBar;
    UICollectionView *_collectionView;
    UIButton *_cancelButton;
    long long _state;
    long long _style;
    id <IGInlineGalleryViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)createNewTitleBarForStyle:(long long)arg1;
@property(nonatomic) __weak id <IGInlineGalleryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapCamera;
- (void)didTapCancel;
- (void)didTapDismiss;
- (void)didTapSeeAll;
- (void)didTapTitleBar;
- (_Bool)hasCancelButton;
- (_Bool)hasVerticalPaddingAroundScrollView;
- (id)initWithWidth:(double)arg1 delegate:(id)arg2 photoThumbnailSize:(double)arg3 style:(long long)arg4;
- (void)layoutSubviews;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long style; // @synthesize style=_style;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
