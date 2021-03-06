//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTelephonyNetworkInfo, NSString;

@interface IGNetworkReachabilityManager : NSObject
{
    _Bool _isMonitoring;
    long long _networkReachabilityStatus;
    struct __SCNetworkReachability *_networkReachability;
    CDUnknownBlockType _networkReachabilityStatusBlock;
    CTTelephonyNetworkInfo *_telephonyNetworkInfo;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReachability:(struct __SCNetworkReachability *)arg1;
@property(readonly, nonatomic) _Bool isMonitoring; // @synthesize isMonitoring=_isMonitoring;
- (_Bool)isOnWiFiNetwork;
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;
@property(readonly, nonatomic, getter=isReachableViaWWAN) _Bool reachableViaWWAN;
@property(readonly, nonatomic, getter=isReachableViaWiFi) _Bool reachableViaWiFi;
@property(nonatomic) struct __SCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(nonatomic) long long networkReachabilityStatus; // @synthesize networkReachabilityStatus=_networkReachabilityStatus;
@property(copy, nonatomic) CDUnknownBlockType networkReachabilityStatusBlock; // @synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock;
@property(readonly, nonatomic) NSString *networkTypeString;
- (void)setReachabilityStatusChangeBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) CTTelephonyNetworkInfo *telephonyNetworkInfo; // @synthesize telephonyNetworkInfo=_telephonyNetworkInfo;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)subNetworkType;

@end

