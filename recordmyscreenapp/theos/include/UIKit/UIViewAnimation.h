/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>

@class UIView, NSIndexPath;

@interface UIViewAnimation : NSObject {
	UIView* _view;
	NSIndexPath* _indexPath;
	CGRect _endRect;
	float _endAlpha;
	float _startFraction;
	float _endFraction;
	int _curve;
	BOOL _animateFromCurrentPosition;
	BOOL _shouldDeleteAfterAnimation;
	BOOL _editing;
}
@property(readonly, assign, nonatomic) UIView* view;
@property(readonly, assign, nonatomic) NSIndexPath* indexPath;
@property(readonly, assign, nonatomic) CGRect endRect;
@property(readonly, assign, nonatomic) float endAlpha;
@property(readonly, assign, nonatomic) float startFraction;
@property(readonly, assign, nonatomic) float endFraction;
@property(readonly, assign, nonatomic) int curve;
@property(readonly, assign, nonatomic) BOOL animateFromCurrentPosition;
@property(readonly, assign, nonatomic) BOOL shouldDeleteAfterAnimation;
@property(readonly, assign, nonatomic) BOOL editing;
-(instancetype)initWithView:(id)view indexPath:(id)path endRect:(CGRect)rect endAlpha:(float)alpha startFraction:(float)fraction endFraction:(float)fraction6 curve:(int)curve animateFromCurrentPosition:(BOOL)currentPosition shouldDeleteAfterAnimation:(BOOL)animation editing:(BOOL)editing;
-(void)dealloc;
-(id)description;
@end
