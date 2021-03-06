//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGStoryPreviewFooterViewType.h"

@class IGDirectAvatarView, IGTapButton, NSString;

@interface IGStoryPreviewRavenFooterView : UIView <IGStoryPreviewFooterViewType>
{
    id <IGStoryPreviewRavenChromeViewDataSource> _dataSource;
    id <IGStoryPreviewRavenFooterViewDelegate> _delegate;
    IGTapButton *_storyButton;
    IGTapButton *_sendButton;
    IGTapButton *_downloadButton;
    IGDirectAvatarView *_avatarView;
}

- (void).cxx_destruct;
- (void)addShadow:(id)arg1 shadowOpacity:(double)arg2;
@property(readonly, nonatomic) IGDirectAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (id)buttonAtCenter;
- (id)buttonTextOnlyColor;
- (void)configureWithUsers:(id)arg1;
- (id)currentCancelButton;
- (id)currentStoryButton;
@property(nonatomic) __weak id <IGStoryPreviewRavenChromeViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGStoryPreviewRavenFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapDownloadButton:(id)arg1;
- (void)didTapSendButton:(id)arg1;
- (void)didTapStoryButton:(id)arg1;
@property(readonly, nonatomic) IGTapButton *downloadButton; // @synthesize downloadButton=_downloadButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 ravenChromeViewDataSource:(id)arg2;
- (void)layoutSubviews;
- (double)maxSubviewHeight;
@property(readonly, nonatomic) IGTapButton *sendButton; // @synthesize sendButton=_sendButton;
- (id)sendButtonImage;
- (void)setSendButtonEnabled:(_Bool)arg1;
- (void)setUpDownloadButton;
- (void)setUpSendButton;
- (void)setUpStoryButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) IGTapButton *storyButton; // @synthesize storyButton=_storyButton;
- (void)updateButton:(id)arg1 title:(id)arg2 imageSize:(struct CGSize)arg3 imageTitleSpace:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

