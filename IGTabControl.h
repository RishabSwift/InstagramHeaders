//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, IGKVOHandle, NSArray, NSString, UIScrollView;

@interface IGTabControl : UIView
{
    _Bool _keyboardIsPresenting;
    _Bool _canUseFallbackIcons;
    UIView *_inchwormView;
    NSArray *_buttons;
    id <IGTabControlDelegate> _delegate;
    UIScrollView *_connectedScrollView;
    NSString *_title;
    long long _style;
    IGKVOHandle *_contentOffsetHandle;
    CALayer *_bottomSeparator;
    long long _tappedIndex;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)applyStyle;
@property(retain, nonatomic) CALayer *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, nonatomic) _Bool canUseFallbackIcons; // @synthesize canUseFallbackIcons=_canUseFallbackIcons;
@property(retain, nonatomic) UIScrollView *connectedScrollView; // @synthesize connectedScrollView=_connectedScrollView;
- (struct UIEdgeInsets)contentInsets;
@property(retain, nonatomic) IGKVOHandle *contentOffsetHandle; // @synthesize contentOffsetHandle=_contentOffsetHandle;
- (void)dealloc;
@property(nonatomic) __weak id <IGTabControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)highlightVisibleSegment;
@property(readonly, nonatomic) UIView *inchwormView; // @synthesize inchwormView=_inchwormView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)keyboardDidShow:(id)arg1;
@property(nonatomic) _Bool keyboardIsPresenting; // @synthesize keyboardIsPresenting=_keyboardIsPresenting;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (void)onSegmentTapped:(id)arg1;
- (struct CGRect)scrollIndicatorBarFrameForScrollView:(id)arg1;
- (void)setSegments:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long tappedIndex; // @synthesize tappedIndex=_tappedIndex;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)tabSegmentFont;
- (void)updateAccessibilityStateForButtons:(id)arg1 selectedIndex:(long long)arg2;
- (void)updateScrollViewPosition;

@end

