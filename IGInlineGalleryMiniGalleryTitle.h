//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGInlineGalleryTitleBar.h"

@class UIButton, UILabel;

@interface IGInlineGalleryMiniGalleryTitle : UIView <IGInlineGalleryTitleBar>
{
    UILabel *_label;
    UIButton *_cameraButton;
    id <IGInlineGalleryTitleBarDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGInlineGalleryTitleBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapCamera;
- (void)didTapSeeAll;
- (void)didTapTitleBar;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

