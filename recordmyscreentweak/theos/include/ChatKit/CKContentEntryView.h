/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UITextContentViewDelegate.h"
#import "ChatKit-Structs.h"
#import <UIKit/UIScrollView.h>
#import "CKContentEntryBridgeClient.h"
#import "CKEntryField.h"

@class NSMutableArray, NSArray, UIView, CKTextContentView, CKContentEntryBridge;

@interface CKContentEntryView : UIScrollView <CKEntryField, UITextContentViewDelegate, CKContentEntryBridgeClient> {
	NSMutableArray* _contentViews;
	CKTextContentView* _subjectView;
	CKTextContentView* _activeView;
	UIView* _subjectLine;
	CKContentEntryBridge* _bridge;
	unsigned _showsSubject : 1;
	unsigned _viewsLoaded : 1;
	id _entryFieldDelegate;
	BOOL _needsScrollToVisible;
}
@property(readonly, assign, nonatomic) NSArray* contentViews;
@property(assign, nonatomic) BOOL showsSubject;
-(instancetype)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)removeFromSuperview;
-(void)setContentOffset:(CGPoint)offset;
-(void)_scrollViewAnimationEnded;
-(void)updateCandidateDisplay;
-(void)setFrame:(CGRect)frame;
-(void)scrollSelectionToVisible:(BOOL)visible;
-(CGRect)contentEntryFrame:(BOOL)frame;
-(void)showSubjectLinesAndDefaultText:(BOOL)text;
-(void)tapGesture:(id)gesture;
-(void)resetKeyboardDelegate:(id)delegate;
-(BOOL)textContentView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textContentViewDidChange:(id)textContentView;
-(BOOL)textContentViewShouldBeginEditing:(id)textContentView;
-(void)textContentViewDidBeginEditing:(id)textContentView;
-(BOOL)textContentViewShouldEndEditing:(id)textContentView;
-(BOOL)textContentView:(id)view shouldChangeSizeForContentSize:(CGSize)contentSize;
-(void)textContentView:(id)view didChangeSize:(CGSize)size;
-(NSArray*)supportedPasteboardTypesInTextContentView:(id)textContentView;
-(id)documentFragmentForPasteboardItemAtIndex:(int)index inTextContentView:(id)textContentView;
-(void)attachmentsDidChange;
-(void)reflowContent;
-(void)setContentHidden:(BOOL)hidden subjectHidden:(BOOL)hidden2;
-(void)setEntryFieldDelegate:(id)delegate;
-(id)entryFieldDelegate;
-(void)clearMessage;
-(BOOL)hasContent;
-(void)setMessageComposition:(id)composition;
-(CKMessageComposition*)messageComposition;
-(void)setMessageParts:(id)parts;
-(id)messageParts;
-(void)insertMessagePart:(id)part;
-(void)moveCursorToEnd;
-(void)setCursorPosition:(int)position;
-(int)cursorPosition;
-(int)lastCursorPosition;
-(void)saveCursorPosition;
-(void)restoreCursorPosition;
-(void)makeActive;
-(BOOL)isActive;
-(void)disableEditing;
-(void)setIgnoreAnimations:(BOOL)animations;
-(id)subject;
-(void)setSubject:(id)subject;
-(void)loadSubviews;
-(id)attachments;
-(void)setContentOffset:(CGPoint)offset animated:(BOOL)animated;
-(void)_addContentView:(id)view;
-(void)_reloadEntryViewsIfLoaded;
-(void)_removeContentView:(id)view;
-(void)_loadEntryViews;
-(void)_adjustAllContent;
-(void)_setupGestureRecognizers;
-(BOOL)canPasteObject:(id)object;
@end

@protocol CKContentEntryFieldDelegate
@required
-(BOOL)entryField:(CKContentEntryView*)entryField shouldInsertMediaObject:(CKMediaObject*)mediaObject;
-(void)entryFieldAttachmentsChanged:(CKContentEntryView*)entryField;
-(void)entryFieldSubjectChanged:(CKContentEntryView*)entryField;
-(void)entryFieldDidBecomeActive:(CKContentEntryView*)entryField;
-(BOOL)entryFieldShouldBecomeActive:(CKContentEntryView*)entryField;
-(void)entryFieldContentChanged:(CKContentEntryView*)entryField;
@end
