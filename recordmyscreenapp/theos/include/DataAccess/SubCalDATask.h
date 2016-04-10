/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>
#import "DATask.h"
#import "SubCalDATask.h"

@class DATaskManager;

@interface SubCalDATask : NSObject <DATask> {
	DATaskManager* _taskManager;
	BOOL _finished;
}
@property(assign, nonatomic) DATaskManager* taskManager;
// inherited: -(void)dealloc;
// in a protocol: -(void)performTask;
// in a protocol: -(void)cancelTaskWithReason:(int)reason underlyingError:(id)error;
-(void)finishWithError:(id)error;
-(void)willFinish;
-(void)performDelegateCallbackWithError:(id)error;
-(void)didFinish;
@end

@interface SubCalDATask (ConsumerDictionarySupport)
-(id)consumerDictKey;
@end
