//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface IGNetworkTrace : NSObject
{
    double _timestamp;
    double _responseDownloadStarted;
    double _responseDownloadFinished;
    long long _requestSize;
    long long _responseSize;
    long long _statusCode;
    NSString *_traceToken;
    NSURL *_url;
    unsigned long long _method;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long method; // @synthesize method=_method;
@property(nonatomic) long long requestSize; // @synthesize requestSize=_requestSize;
@property(nonatomic) double responseDownloadFinished; // @synthesize responseDownloadFinished=_responseDownloadFinished;
@property(nonatomic) double responseDownloadStarted; // @synthesize responseDownloadStarted=_responseDownloadStarted;
@property(nonatomic) long long responseSize; // @synthesize responseSize=_responseSize;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *traceToken; // @synthesize traceToken=_traceToken;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;

@end

