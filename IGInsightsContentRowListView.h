//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, UIButton, UITapGestureRecognizer;

@interface IGInsightsContentRowListView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _showDetails;
    id <IGInsightsContentRowListViewDelegate> _delegate;
    UIButton *_textbutton;
    UIButton *_chevronbutton;
    UIView *_bottomSeparator;
    UIView *_containerView;
    UIView *_topPaddingView;
    NSArray *_listItemViews;
    UITapGestureRecognizer *_educationViewTapHandler;
    double _maxHeight;
    double _topPaddingHeight;
}

- (void).cxx_destruct;
- (void)animateCollapse;
- (void)animateExpand;
@property(readonly, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
- (void)buttonClick:(id)arg1;
@property(readonly, nonatomic) UIButton *chevronbutton; // @synthesize chevronbutton=_chevronbutton;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <IGInsightsContentRowListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITapGestureRecognizer *educationViewTapHandler; // @synthesize educationViewTapHandler=_educationViewTapHandler;
- (void)flipChevronButton;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)getDeltaHeightForSize:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1 paragraphUnits:(id)arg2;
- (void)initializeBottomSeparator;
- (void)initializeChevronButton;
- (void)initializeListItemViewsWithParagraphUnits:(id)arg1;
- (void)initializeTextButtonWithTitle:(id)arg1;
- (void)initializeTopPaddingView;
- (void)layoutListItemViewsWithCurrentY:(double)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSArray *listItemViews; // @synthesize listItemViews=_listItemViews;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
- (void)setPaddingBackgroundColor:(unsigned long long)arg1;
@property(nonatomic) _Bool showDetails; // @synthesize showDetails=_showDetails;
@property(nonatomic) double topPaddingHeight; // @synthesize topPaddingHeight=_topPaddingHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UIButton *textbutton; // @synthesize textbutton=_textbutton;
@property(readonly, nonatomic) UIView *topPaddingView; // @synthesize topPaddingView=_topPaddingView;
- (void)updateTopPaddingHeight:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

