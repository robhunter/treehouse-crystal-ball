//
//  ViewController.h
//  CrystalBall
//
//  Created by Rob Hunter on 6/24/13.
//  Copyright (c) 2013 Rob Hunter. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
}

@property (weak, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) NSArray *predictionArray;
@property (strong, nonatomic) UIImageView *imageView;
- (void) makePrediction;
- (void) startPrediction;

@end
