//
//  SNAppDelegate.h
//  SNTickerView
//
//  Created by Siddhesh Naik on 7/21/12.
//  Copyright (c) 2012 Siddhesh Naik. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SNViewController;

@interface SNAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) SNViewController *viewController;

@end
