//
//  ModelController.h
//  NHKLearn
//
//  Created by Do Thanh Cong  on 7/14/13.
//  Copyright (c) 2013 Do Thanh Cong . All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
