//
//  IDMTapDetectingImageView.h
//  IDMPhotoBrowser
//
//  Created by Michael Waterfall on 04/11/2009.
//  Copyright 2009 d3i. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FLAnimatedImage/FLAnimatedImage.h>

@protocol IDMTapDetectingImageViewDelegate;

@interface IDMTapDetectingImageView : FLAnimatedImageView {
	id <IDMTapDetectingImageViewDelegate> __weak tapDelegate;
}
@property (nonatomic, weak) id <IDMTapDetectingImageViewDelegate> tapDelegate;
- (void)handleSingleTap:(UITouch *)touch;
- (void)handleDoubleTap:(UITouch *)touch;
- (void)handleTripleTap:(UITouch *)touch;
@end

@protocol IDMTapDetectingImageViewDelegate <NSObject>
@optional
- (void)imageView:(FLAnimatedImageView *)imageView singleTapDetected:(UITouch *)touch;
- (void)imageView:(FLAnimatedImageView *)imageView doubleTapDetected:(UITouch *)touch;
- (void)imageView:(FLAnimatedImageView *)imageView tripleTapDetected:(UITouch *)touch;
@end
