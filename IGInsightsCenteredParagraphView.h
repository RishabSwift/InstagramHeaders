//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGInsightsVariableHeightView.h"

@class NSDictionary, NSString, NSURL, UIButton, UILabel;

@interface IGInsightsCenteredParagraphView : UIView <IGInsightsVariableHeightView>
{
    id <IGInsightsComponentUserInteractionDelegate> _userInteractionDelegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_urlbutton;
    UIButton *_querybutton;
    NSURL *_url;
    NSDictionary *_queryParams;
    struct CGRect _frame;
}

+ (double)heightForParagraphUnit:(id)arg1 inBoundingWidth:(double)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)initWithFrame:(struct CGRect)arg1 paragraphUnit:(id)arg2;
- (void)layoutSubviews;
- (void)onWebsiteExternalLinkTapped:(id)arg1;
- (void)queryButtonTapped:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(readonly, nonatomic) UIButton *querybutton; // @synthesize querybutton=_querybutton;
@property(nonatomic) __weak id <IGInsightsComponentUserInteractionDelegate> userInteractionDelegate; // @synthesize userInteractionDelegate=_userInteractionDelegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) UIButton *urlbutton; // @synthesize urlbutton=_urlbutton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
