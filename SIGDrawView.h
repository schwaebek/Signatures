//
//  SIGDrawView.h
//  Signatures
//
//  Created by Katlyn Schwaebe on 8/14/14.
//  Copyright (c) 2014 Katlyn Schwaebe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SIGDrawView : UIView

@property (nonatomic) NSMutableArray * scribbles;
@property (nonatomic) NSMutableArray * currentScribble;
@property (nonatomic) UIImage * scribblesImage;
@end
