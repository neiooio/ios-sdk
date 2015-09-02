//
//  ViewController.m
//  NeiooNewbie
//
//  Created by hsujahhu on 2015/8/19.
//  Copyright (c) 2015年 Herxun. All rights reserved.
//

#import "ViewController.h"
#import "Neioo.h"
#import <CoreMotion/CoreMotion.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (BOOL)canBecomeFirstResponder {
    return YES;
}

- (void)viewDidAppear:(BOOL)animated {
    [self becomeFirstResponder];
}

-(void)motionBegan:(UIEventSubtype)motion withEvent:(UIEvent *)event
{
    if (motion == UIEventSubtypeMotionShake)
    {
        // shaking has began.
        
        NSLog(@"SHAKE BEGIN");
    }
}

-(void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent *)event
{
    if (motion == UIEventSubtypeMotionShake)
    {
        
        // shaking has ended
        
        NSLog(@"SHAKE ENDED");
        
        // show shake campaign
        NSArray *campaigns = [[Neioo shared]getShakeCampaigns];
        
        for (NeiooCampaign *campaign in campaigns){
            for (NeiooAction *action in campaign.actions){
                NSLog(@"Shake campaign triggered \n %@",[action.actionDetail description]);
                
            }
        }
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
