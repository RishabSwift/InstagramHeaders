//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSString, UIColor;

@interface IGSpinnerLabelViewModel : NSObject <IGListDiffable>
{
    _Bool _showSeparator;
    long long _spinnerStyle;
    unsigned long long _spinnerInsetsVerticalAlignment;
    unsigned long long _spinnerInsetsHorizontalAlignment;
    UIColor *_backgroundColor;
    double _alpha;
    double _height;
    NSString *_title;
    double _titleSpinnerSpace;
    struct UIEdgeInsets _spinnerInsets;
    struct UIEdgeInsets _separatorInset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)diffIdentifier;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
- (id)init;
- (id)initWithSpinnerStyle:(long long)arg1 spinnerInsetsHorizontalAlignment:(unsigned long long)arg2 spinnerInsetsVerticalAlignment:(unsigned long long)arg3 spinnerInsets:(struct UIEdgeInsets)arg4 backgroundColor:(id)arg5 alpha:(double)arg6 height:(double)arg7 title:(id)arg8 showSeparator:(_Bool)arg9 separatorInset:(struct UIEdgeInsets)arg10;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(readonly, nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(readonly, nonatomic) struct UIEdgeInsets spinnerInsets; // @synthesize spinnerInsets=_spinnerInsets;
@property(readonly, nonatomic) unsigned long long spinnerInsetsHorizontalAlignment; // @synthesize spinnerInsetsHorizontalAlignment=_spinnerInsetsHorizontalAlignment;
@property(readonly, nonatomic) unsigned long long spinnerInsetsVerticalAlignment; // @synthesize spinnerInsetsVerticalAlignment=_spinnerInsetsVerticalAlignment;
@property(readonly, nonatomic) long long spinnerStyle; // @synthesize spinnerStyle=_spinnerStyle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) double titleSpinnerSpace; // @synthesize titleSpinnerSpace=_titleSpinnerSpace;

@end

