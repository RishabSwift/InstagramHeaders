//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGUserTitleSubtitleViewModel, NSString, UIImage;

@interface IGDirectStoryMessageStatusCellViewModel : NSObject <IGListDiffable>
{
    NSString *_dateText;
    IGUserTitleSubtitleViewModel *_subviewModel;
    long long _messageStatusType;
    NSString *_identifier;
    double _barLeftSpace;
    double _barRightSpace;
    double _barWidth;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double barLeftSpace; // @synthesize barLeftSpace=_barLeftSpace;
@property(readonly, nonatomic) double barRightSpace; // @synthesize barRightSpace=_barRightSpace;
@property(readonly, nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
- (double)cellHeight;
@property(readonly, nonatomic) NSString *dateText; // @synthesize dateText=_dateText;
- (id)description;
- (id)diffIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithMessageStatus:(id)arg1 threadTitle:(id)arg2 threadId:(id)arg3 barLeftSpace:(double)arg4 barRightSpace:(double)arg5 barWidth:(double)arg6 layoutSpec:(id)arg7;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) long long messageStatusType; // @synthesize messageStatusType=_messageStatusType;
- (double)separatorLeftInset;
- (double)separatorRightInset;
@property(readonly, nonatomic) UIImage *statusImage;
@property(readonly, nonatomic) IGUserTitleSubtitleViewModel *subviewModel; // @synthesize subviewModel=_subviewModel;

@end

