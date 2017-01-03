//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface IGRealtimeRoutingRule : NSObject <NSCopying>
{
    long long _ruleType;
    NSString *_topicPrefix;
    NSString *_event;
    NSString *_action;
}

+ (id)matchedTopicPrefixForTopic:(id)arg1 availableTopicRoutingRules:(id)arg2;
+ (id)routingResultForPayload:(id)arg1 availableTopicRoutingRules:(id)arg2;
+ (id)routingRuleByAction:(id)arg1;
+ (id)routingRuleByEvent:(id)arg1;
+ (id)routingRuleByTopicPrefix:(id)arg1;
+ (id)topicPrefixRoutingRulesInAvailableRules:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *event; // @synthesize event=_event;
- (unsigned long long)hash;
- (id)initWithRuleType:(long long)arg1 topicPrefix:(id)arg2 event:(id)arg3 action:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long ruleType; // @synthesize ruleType=_ruleType;
@property(readonly, copy, nonatomic) NSString *topicPrefix; // @synthesize topicPrefix=_topicPrefix;

@end
