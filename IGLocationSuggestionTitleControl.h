//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UILabel;

@interface IGLocationSuggestionTitleControl : UIControl
{
    UIImageView *_imageView;
    UILabel *_textLabel;
    long long _style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;

@end

