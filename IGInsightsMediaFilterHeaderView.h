//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface IGInsightsMediaFilterHeaderView : UIView
{
    id <IGInsightsMediaFilterHeaderViewDelegate> _delegate;
    UILabel *_headerLabel;
    UIButton *_submitButton;
    UIView *_headerSeparator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGInsightsMediaFilterHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIView *headerSeparator; // @synthesize headerSeparator=_headerSeparator;
- (id)init;
- (void)layoutSubviews;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
- (void)setSubmitButtonEnabled:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)submitButtonClick:(id)arg1;

@end

