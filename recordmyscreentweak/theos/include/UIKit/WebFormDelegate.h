/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "NSObject.h"
#import "UIKit-Structs.h"
#import <Availability2.h>

@protocol WebFormDelegate <NSObject>
-(void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;
-(void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;
-(void)textDidChangeInTextField:(id)text inFrame:(id)frame;
-(void)textDidChangeInTextArea:(id)text inFrame:(id)frame;
-(BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;
#if __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_3_2
-(BOOL)textField:(id)field shouldHandleEvent:(GSEventRef)event inFrame:(id)frame;
-(void)formElementDidSetValue:(id)formElement inFrame:(id)frame;
-(void)formElementDidFocus:(id)formElement inFrame:(id)frame;
-(void)formElementDidBlur:(id)formElement inFrame:(id)frame;
#endif
-(void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;
@end
