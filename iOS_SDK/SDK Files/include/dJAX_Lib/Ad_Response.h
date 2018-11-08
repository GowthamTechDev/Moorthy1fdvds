//
//  Ad_Response.h
//  Open_Falls_Lib
//  Author Suganya A
//  Created by Suganya A on 20/06/17.
//  Copyright © 2017 Vrtcal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreTelephony/CTCarrier.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#include <ifaddrs.h>
#include <arpa/inet.h>
#import <AddressBook/AddressBook.h>
#import <CoreLocation/CoreLocation.h>
@class Bviewcontroller;


@protocol AdResponseViewControllerDelegate <UIGestureRecognizerDelegate>
@end


@interface Ad_Response : UIViewController <UIGestureRecognizerDelegate>


@property (nonatomic, strong)UIWebView *adView;

@property(nonatomic, strong)UIWebView *web;


@property (nonatomic, strong) UIButton *myButton;

@property (nonatomic, strong) NSTimer *timer;


@property (nonatomic, strong) id <AdResponseViewControllerDelegate> AdResponseViewDelegate;


- (UIWebView *)TargetLoadAd:(id)targetobj PassZoneid:(int)zoneid PassKeywords:(NSString *)keywords PassProfile:(NSString*)profile PassTeleco:(NSString *)teleco PassCoordinateXAxis:(float)coordinatex PassCoordinateYAxis:(float)coordinatey PassFrameWidth:(float)framewidth PassFrameHeight:(float)frameheight;

-(void)AutoRefreshTargetController:(SEL)selectorname AutoRefreshTimeInterval:(int)TimeInterval;


@end
