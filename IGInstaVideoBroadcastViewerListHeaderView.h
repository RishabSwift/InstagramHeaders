//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGTapButton, UILabel;

@interface IGInstaVideoBroadcastViewerListHeaderView : UIView
{
    id <IGInstaVideoBroadcastViewerListHeaderViewDelegate> _delegate;
    IGTapButton *_doneButton;
    UILabel *_titleView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGInstaVideoBroadcastViewerListHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGTapButton *doneButton; // @synthesize doneButton=_doneButton;
- (void)doneButtonTapped;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;

@end

