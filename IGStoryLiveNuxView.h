//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface IGStoryLiveNuxView : UIView
{
    UILabel *_liveTitleLabel;
    UILabel *_liveDetailLabel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *liveDetailLabel; // @synthesize liveDetailLabel=_liveDetailLabel;
@property(readonly, nonatomic) UILabel *liveTitleLabel; // @synthesize liveTitleLabel=_liveTitleLabel;
- (void)recordsNUXseen;
- (_Bool)shouldShowNUX;

@end
