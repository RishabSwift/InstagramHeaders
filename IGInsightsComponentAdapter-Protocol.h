//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGInsightsLoggingHelper, IGUserSession, UIView;

@protocol IGInsightsComponentAdapter <NSObject>
- (UIView *)componentView;
- (id)initWithComponent:(id <IGInsightsComponent>)arg1 loggingHelper:(IGInsightsLoggingHelper *)arg2 surface:(unsigned long long)arg3 userSession:(IGUserSession *)arg4;
- (_Bool)isComponentValid;
@property(nonatomic) __weak id <IGInsightsComponentNavigationDelegate> navigationDelegate;
- (void)showToolTip;
@end

