/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>
#import "UIAnimation.h"


@interface UIAnimation : NSObject {
	id _target;
	SEL _action;
	id _delegate;
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned reserved : 27;
	} _animationFlags;
	double _startTime;
	double _duration;
	int _state;
}
-(instancetype)initWithTarget:(id)target;
-(void)stopAnimation;
-(id)target;
-(void)setDelegate:(id)delegate;
-(id)delegate;
-(void)setAction:(SEL)action;
-(SEL)action;
-(void)setAnimationCurve:(int)curve;
-(void)setProgress:(float)progress;
-(float)progressForFraction:(float)fraction;
-(void)dealloc;
@end

@interface UIAnimation (Internal)
-(int)state;
-(BOOL)tvOutput;
-(void)setDuration:(double)duration;
-(float)fractionForTime:(double)time;
-(void)markStart:(double)start;
-(void)markStop;
@end
