//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class IGPageCellPageControl, NSString, UILabel;

@interface IGPageControlTitleView : UIControl
{
    UILabel *_titleLabel;
    NSString *_title;
    IGPageCellPageControl *_pageCellPageControl;
    id <IGPageControlTitleViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGPageControlTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithDelegate:(id)arg1 numberOfPages:(long long)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) IGPageCellPageControl *pageCellPageControl; // @synthesize pageCellPageControl=_pageCellPageControl;
- (void)setCurrentPage:(long long)arg1;
- (void)setNumberOfPages:(long long)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)valueChanged:(id)arg1;

@end

