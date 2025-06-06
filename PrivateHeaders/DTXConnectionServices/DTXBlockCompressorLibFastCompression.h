/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

@protocol DTXBlockCompressor;

@interface DTXBlockCompressorLibFastCompression : NSObject <DTXBlockCompressor>
{
    void *_lzfseScratchBuffer;
}

- (_Bool)uncompressBuffer:(const char *)arg1 ofLength:(unsigned long long)arg2 toBuffer:(char *)arg3 withKnownUncompressedLength:(unsigned long long)arg4 usingCompressionType:(int)arg5;
- (unsigned long long)compressBuffer:(const char *)arg1 ofLength:(unsigned long long)arg2 toBuffer:(char *)arg3 ofLength:(unsigned long long)arg4 usingCompressionType:(int)arg5 withFinalCompressionType:(int *)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;




@end

