//
//  FiltersViewController.h
//  Yelp
//
//  Created by Ambuj Punn on 9/18/15.
//  Copyright (c) 2015 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FiltersViewController;

@protocol FiltersViewControllerDelegate <NSObject>

- (void) filtersViewController: (FiltersViewController *) filtersViewController didChangeFilters: (NSDictionary *) dictionary;

@end

@interface FiltersViewController : UIViewController

@property (weak, nonatomic) id<FiltersViewControllerDelegate> delegate;
@end
