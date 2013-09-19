/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextFieldCell.h"

@class IDESnapshotItem;

@interface IDESnapshotItemCell : NSTextFieldCell
{
    IDESnapshotItem *_snapshotItem;
}

+ (id)manualSnapshotImage;
+ (id)automaticSnapshotImage;
@property(retain) IDESnapshotItem *snapshotItem; // @synthesize snapshotItem=_snapshotItem;
- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)_descriptionRectForBounds:(struct CGRect)arg1 afterRect:(struct CGRect)arg2;
- (struct CGRect)_titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_dateRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_imageRectForBounds:(struct CGRect)arg1;
- (id)attributedDescription;
- (id)attributedDate;
- (id)attributedTitle;
- (BOOL)_shouldInvertColor;
- (id)snapshotImage;

@end
