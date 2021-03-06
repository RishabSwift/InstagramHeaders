//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGDirectKey : NSObject <NSCopying, NSCoding>
{
    NSString *_clientId;
    NSString *_serverId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithClientId:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerId:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isPublished;
@property(readonly, copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
- (id)value;

@end

