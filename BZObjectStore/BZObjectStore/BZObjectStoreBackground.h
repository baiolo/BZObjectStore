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

#import "BZObjectStore.h"

@interface BZObjectStore (Background)

- (void)saveObjectInBackground:(NSObject*)object completionBlock:(void(^)(NSError *error))completionBlock;
- (void)saveObjectsInBackground:(NSArray*)objects completionBlock:(void(^)(NSError *error))completionBlock;

- (void)removeObjectInBackground:(NSObject*)object completionBlock:(void(^)(NSError *error))completionBlock;
- (void)removeObjectsInBackground:(NSArray*)objects completionBlock:(void(^)(NSError *error))completionBlock;
- (void)removeObjectsInBackground:(Class)clazz condition:(BZObjectStoreConditionModel*)condition completionBlock:(void(^)(NSError *error))completionBlock;

- (void)refreshObjectInBackground:(NSObject*)object completionBlock:(void(^)(NSObject *object,NSError *error))completionBlock;
- (void)fetchObjectsInBackground:(Class)clazz condition:(BZObjectStoreConditionModel*)condition completionBlock:(void(^)(NSArray *objects,NSError *error))completionBlock;
- (void)fetchReferencingFromObjectsInBackground:(NSObject*)object completionBlock:(void(^)(NSArray *objects,NSError *error))completionBlock;
- (void)countInBackground:(Class)clazz condition:(BZObjectStoreConditionModel*)condition completionBlock:(void(^)(NSNumber *value,NSError *error))completionBlock;

- (void)referencedCountInBackground:(NSObject*)object completionBlock:(void(^)(NSNumber *value,NSError *error))completionBlock;
- (void)maxInBackground:(NSString*)attributeName clazz:(Class)clazz condition:(BZObjectStoreConditionModel*)condition completionBlock:(void(^)(NSNumber *value,NSError *error))completionBlock;
- (void)minInBackground:(NSString*)attributeName clazz:(Class)clazz condition:(BZObjectStoreConditionModel*)condition completionBlock:(void(^)(NSNumber *value,NSError *error))completionBlock;
- (void)sumInBackground:(NSString*)attributeName clazz:(Class)clazz condition:(BZObjectStoreConditionModel*)condition completionBlock:(void(^)(NSNumber *value,NSError *error))completionBlock;
- (void)totalInBackground:(NSString*)attributeName clazz:(Class)clazz condition:(BZObjectStoreConditionModel*)condition completionBlock:(void(^)(NSNumber *value,NSError *error))completionBlock;
- (void)avgInBackground:(NSString*)attributeName clazz:(Class)clazz condition:(BZObjectStoreConditionModel*)condition completionBlock:(void(^)(NSNumber *value,NSError *error))completionBlock;

@end
