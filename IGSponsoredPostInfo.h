//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface IGSponsoredPostInfo : NSObject <NSCoding>
{
    _Bool _showIcon;
    _Bool _allowDirectShare;
    _Bool _isHoldout;
    _Bool _showAdChoicesIcon;
    NSString *_adTitle;
    NSString *_label;
    NSString *_trackingToken;
    long long _hideFlowVersion;
    NSArray *_possibleHideAnswers;
    NSString *_aboutAdsServerParams;
    NSArray *_cookies;
    NSArray *_viewTags;
}

+ (id)sponsoredPostForAdPreview;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *aboutAdsServerParams; // @synthesize aboutAdsServerParams=_aboutAdsServerParams;
@property(retain, nonatomic) NSString *adTitle; // @synthesize adTitle=_adTitle;
@property(nonatomic) _Bool allowDirectShare; // @synthesize allowDirectShare=_allowDirectShare;
@property(copy, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) long long hideFlowVersion; // @synthesize hideFlowVersion=_hideFlowVersion;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic) _Bool isHoldout; // @synthesize isHoldout=_isHoldout;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSArray *possibleHideAnswers; // @synthesize possibleHideAnswers=_possibleHideAnswers;
- (void)prepareCookies:(id)arg1;
- (void)preparePossibleHideAnswers:(id)arg1;
- (void)preparePossibleHideAnswersV2:(id)arg1;
@property(nonatomic) _Bool showAdChoicesIcon; // @synthesize showAdChoicesIcon=_showAdChoicesIcon;
@property(nonatomic) _Bool showIcon; // @synthesize showIcon=_showIcon;
@property(copy, nonatomic) NSString *trackingToken; // @synthesize trackingToken=_trackingToken;
@property(copy, nonatomic) NSArray *viewTags; // @synthesize viewTags=_viewTags;
- (void)updateTrackingTokenFromSponsoredPostInfo:(id)arg1;

@end

