//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGUFIButtonBarViewProtocol.h"

@class IGUFICountButtonBarView, NSString, UIButton, UIImageView, UILabel;

@interface IGUFICountLikeAndViewButtonBarView : UIView <IGUFIButtonBarViewProtocol>
{
    IGUFICountButtonBarView *_countBarView;
    UIImageView *_viewIcon;
    UILabel *_viewCountLabel;
    id <IGUFIButtonBarViewDelegate> _delegate;
    long long _colorType;
}

- (void).cxx_destruct;
- (void)adjustViewWithConstraintSize:(struct CGSize)arg1;
@property(nonatomic) long long colorType; // @synthesize colorType=_colorType;
@property(readonly, nonatomic) IGUFICountButtonBarView *countBarView; // @synthesize countBarView=_countBarView;
@property(nonatomic) __weak id <IGUFIButtonBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 colorType:(long long)arg2;
- (void)layoutSubviews;
- (void)resetUFIButtonView;
@property(readonly, nonatomic) UIButton *sendButton;
- (void)setupSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateUFIButtonWithFeedItem:(id)arg1 showCommentButton:(_Bool)arg2 showSendButton:(_Bool)arg3 showSaveButton:(_Bool)arg4 showShareButton:(_Bool)arg5 likeAnimated:(_Bool)arg6 saveAnimated:(_Bool)arg7;
@property(readonly, nonatomic) UILabel *viewCountLabel; // @synthesize viewCountLabel=_viewCountLabel;
@property(readonly, nonatomic) UIImageView *viewIcon; // @synthesize viewIcon=_viewIcon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

