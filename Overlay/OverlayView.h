//
//  OverlayView.h
//  Overlay
//
//  Created by Tom von Schwerdtner on 2/16/13.
//  Copyright (c) 2013 Tom von Schwerdtner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OverlayView : UIView

@property (weak, nonatomic) IBOutlet UIView *modalView;
@property (weak, nonatomic) IBOutlet UIImageView *photoImageView;

@end