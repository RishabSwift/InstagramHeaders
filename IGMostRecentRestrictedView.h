//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIButton, UILabel;

@interface IGMostRecentRestrictedView : UIView
{
    CALayer *_separatorLayer;
    UILabel *_messageLabel;
    UIButton *_learnButton;
}

+ (double)heightForName:(id)arg1 withWidth:(double)arg2;
+ (id)messageWithFeedName:(id)arg1;
- (void).cxx_destruct;
- (void)addLearnMoreTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIButton *learnButton; // @synthesize learnButton=_learnButton;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) CALayer *separatorLayer; // @synthesize separatorLayer=_separatorLayer;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateMessageFeedName:(id)arg1;

@end

