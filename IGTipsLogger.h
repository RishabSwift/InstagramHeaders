//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSString;

@interface IGTipsLogger : NSObject
{
    IGUserSession *_userSession;
    NSString *_waterfallID;
}

- (void).cxx_destruct;
- (void)didFailFetchingTipsWithError:(id)arg1;
- (void)didFailFindingTargetViewWithTip:(id)arg1;
- (void)didFailParsingTipsWithErrorMessage:(id)arg1;
- (void)didFetchTips;
- (void)didFindTargetViewWithTip:(id)arg1;
- (void)didHideTip:(id)arg1;
- (void)didParseTipsWithTipChannel:(id)arg1;
- (void)didRenderTip:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (void)logEvent:(id)arg1 atStep:(id)arg2 additionalFields:(id)arg3;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *waterfallID; // @synthesize waterfallID=_waterfallID;

@end

