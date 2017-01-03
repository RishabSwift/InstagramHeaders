//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IGReactPerformanceLoggerSession, NSDictionary, NSString;

@interface IGReactRootViewControllerConfiguration : NSObject <NSCopying>
{
    _Bool _showCancelButton;
    _Bool _statusBarHidden;
    _Bool _navigationBarHidden;
    int _tabBarVisibility;
    NSString *_moduleName;
    NSDictionary *_initialProperties;
    IGReactPerformanceLoggerSession *_perfLoggerSession;
    NSString *_title;
    NSString *_analyticsModule;
    NSString *_actionType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModuleName:(id)arg1 initialProperties:(id)arg2 perfLoggerSession:(id)arg3 title:(id)arg4 analyticsModule:(id)arg5 actionType:(id)arg6 showCancelButton:(_Bool)arg7 tabBarVisibility:(int)arg8 statusBarHidden:(_Bool)arg9 navigationBarHidden:(_Bool)arg10;
@property(readonly, copy, nonatomic) NSDictionary *initialProperties; // @synthesize initialProperties=_initialProperties;
@property(readonly, copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(readonly, nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(readonly, nonatomic) IGReactPerformanceLoggerSession *perfLoggerSession; // @synthesize perfLoggerSession=_perfLoggerSession;
@property(readonly, nonatomic) _Bool showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property(readonly, nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(readonly, nonatomic) int tabBarVisibility; // @synthesize tabBarVisibility=_tabBarVisibility;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

