/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UIImageAndTextTableCell.h"


@interface UIPickerTableCell : UIImageAndTextTableCell {
	unsigned _checked : 1;
	unsigned _reserved : 31;
}
-(instancetype)initWithFrame:(CGRect)frame;
-(void)updateHighlightColors;
-(void)setChecked:(BOOL)checked;
-(void)layoutSubviews;
-(BOOL)isChecked;
@end
