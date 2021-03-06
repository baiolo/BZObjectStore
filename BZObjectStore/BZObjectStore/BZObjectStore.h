//
// The MIT License (MIT)
//
// Copyright (c) 2014 BONZOO.LLC
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import "BZObjectStoreReferenceMapper.h"
#import "BZObjectStoreConditionModel.h"

@interface BZObjectStore : BZObjectStoreReferenceMapper

+ (instancetype)openWithPath:(NSString*)path error:(NSError**)error;

- (BOOL)saveObject:(NSObject*)object error:(NSError**)error;
- (BOOL)saveObjects:(NSArray*)objects error:(NSError**)error;

- (BOOL)removeObject:(NSObject*)object error:(NSError**)error;
- (BOOL)removeObjects:(NSArray *)objects error:(NSError**)error;
- (BOOL)removeObjects:(Class)clazz condition:(BZObjectStoreConditionModel*)condition error:(NSError**)error;

- (id)refreshObject:(NSObject*)object error:(NSError**)error;
- (NSMutableArray*)fetchObjects:(Class)clazz condition:(BZObjectStoreConditionModel*)condition error:(NSError**)error;
- (NSMutableArray*)fetchReferencingFromObjects:(NSObject*)object error:(NSError**)error;

- (NSNumber*)count:(Class)clazz condition:(BZObjectStoreConditionModel*)condition error:(NSError**)error;
- (NSNumber*)referencedCount:(NSObject*)object error:(NSError**)error;
- (NSNumber*)existsObject:(NSObject*)object error:(NSError**)error;

- (NSNumber*)max:(NSString*)columnName class:(Class)clazz condition:(BZObjectStoreConditionModel*)condition error:(NSError**)error;
- (NSNumber*)min:(NSString*)columnName class:(Class)clazz condition:(BZObjectStoreConditionModel*)condition error:(NSError**)error;
- (NSNumber*)sum:(NSString*)columnName class:(Class)clazz condition:(BZObjectStoreConditionModel*)condition error:(NSError**)error;
- (NSNumber*)total:(NSString*)columnName class:(Class)clazz condition:(BZObjectStoreConditionModel*)condition error:(NSError**)error;
- (NSNumber*)avg:(NSString*)columnName class:(Class)clazz condition:(BZObjectStoreConditionModel*)condition error:(NSError**)error;

- (BOOL)registerClazz:(Class)clazz error:(NSError**)error;

- (void)close;

@end
