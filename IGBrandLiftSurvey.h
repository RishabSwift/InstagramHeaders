//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGBrandLiftSurvey : NSObject
{
    _Bool _showResults;
    NSArray *_questions;
    NSString *_primerText;
    NSString *_surveyID;
    NSString *_trackingToken;
}

+ (id)mockBrandLiftSurveyJSON;
+ (id)surveyForServerMessage:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *primerText; // @synthesize primerText=_primerText;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(nonatomic) _Bool showResults; // @synthesize showResults=_showResults;
@property(copy, nonatomic) NSString *surveyID; // @synthesize surveyID=_surveyID;
@property(copy, nonatomic) NSString *trackingToken; // @synthesize trackingToken=_trackingToken;

@end
