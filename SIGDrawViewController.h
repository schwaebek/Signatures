//
//  SIGDrawViewController.h
//  Signatures
//
//  Created by Katlyn Schwaebe on 8/14/14.
//  Copyright (c) 2014 Katlyn Schwaebe. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SIGDrawView;
@interface SIGDrawViewController : UIViewController
@property (nonatomic) SIGDrawView * drawView;
-(void)clearSignature;
-(UIImage *)getSignature;

@end
