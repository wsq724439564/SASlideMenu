//
//  SASlideMenuDataSource.h
//  SASlideMenu
//
//  Created by Stefano Antonelli on 7/30/12.
//  Copyright (c) 2012 Stefano Antonelli. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SASlideMenuDataSource <NSObject>

@required
-(NSString*) initialSegueId;

-(void) configureMenuButton:(UIButton*) menuButton;

@optional
-(NSString*) sugueIdForIndexPath:(NSIndexPath*)indexPath;

-(Boolean) slideOutThenIn;
-(Boolean) allowContentViewControllerCachingForIndexPath:(NSIndexPath*) indexPath;
@end
