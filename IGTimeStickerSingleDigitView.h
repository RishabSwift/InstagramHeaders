//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface IGTimeStickerSingleDigitView : UIView
{
    UILabel *_textView;
}

- (void).cxx_destruct;
- (void)configureWithDigit:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UILabel *textView; // @synthesize textView=_textView;

@end

