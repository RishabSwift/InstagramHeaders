//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIScrollView, UIViewController;

@interface IGScrollingContainerCell : UICollectionViewCell
{
    UIScrollView *_containerScrollView;
    UIViewController *_viewController;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)configureWithViewController:(id)arg1 parentViewController:(id)arg2;
@property(readonly, nonatomic) UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

@end

