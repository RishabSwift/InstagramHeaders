//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGSurveyQuestionsOption : NSObject
{
    NSString *_optionValue;
    long long _optionNumericValue;
    NSArray *_optionTextRange;
    NSString *_optionTextText;
}

- (void).cxx_destruct;
- (id)initWithOptionValue:(id)arg1 optionNumericValue:(long long)arg2 optionTextRange:(id)arg3 optionTextText:(id)arg4;
@property(readonly, nonatomic) long long optionNumericValue; // @synthesize optionNumericValue=_optionNumericValue;
@property(readonly, copy, nonatomic) NSArray *optionTextRange; // @synthesize optionTextRange=_optionTextRange;
@property(readonly, copy, nonatomic) NSString *optionTextText; // @synthesize optionTextText=_optionTextText;
@property(readonly, copy, nonatomic) NSString *optionValue; // @synthesize optionValue=_optionValue;

@end

