//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BFExecutor : NSObject
{
    CDUnknownBlockType _block;
}

+ (id)defaultExecutor;
+ (id)executorWithBlock:(CDUnknownBlockType)arg1;
+ (id)executorWithDispatchQueue:(id)arg1;
+ (id)executorWithOperationQueue:(id)arg1;
+ (id)immediateExecutor;
+ (id)mainThreadExecutor;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)execute:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

