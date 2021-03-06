//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface IGHONFullSizeMessageView : UIView
{
    UIImageView *_primaryImageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_doneButton;
    id <IGHONFullSizeMessageViewDelegate> _delegate;
}

+ (id)errorFullSizeMessageViewWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGHONFullSizeMessageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
- (void)doneButtonTapped:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonText:(id)arg3 primaryImage:(id)arg4 delegate:(id)arg5;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UIImageView *primaryImageView; // @synthesize primaryImageView=_primaryImageView;
- (void)setupCheckmarkViewWithImage:(id)arg1;
- (void)setupDoneButtonWithText:(id)arg1;
- (void)setupMessageLabelWithText:(id)arg1;
- (void)setupTitleLabelWithText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

