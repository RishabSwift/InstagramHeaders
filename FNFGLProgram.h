//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface FNFGLProgram : NSObject
{
    NSMutableArray *_attributes;
    unsigned int _program;
    unsigned int _vertexShader;
    unsigned int _fragmentShader;
    _Bool _initialized;
    NSString *_vertexShaderLog;
    NSString *_fragmentShaderLog;
    NSString *_programLog;
}

- (void).cxx_destruct;
- (unsigned int)addAttribute:(id)arg1;
@property(readonly, copy, nonatomic) NSString *fragmentShaderLog; // @synthesize fragmentShaderLog=_fragmentShaderLog;
- (id)initWithVertexShader:(const char *)arg1 fragmentShader:(const char *)arg2;
@property(readonly, nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
- (_Bool)link;
@property(readonly, copy, nonatomic) NSString *programLog; // @synthesize programLog=_programLog;
- (int)uniformIndex:(const char *)arg1;
- (void)use;
- (_Bool)validate;
@property(readonly, copy, nonatomic) NSString *vertexShaderLog; // @synthesize vertexShaderLog=_vertexShaderLog;

@end

