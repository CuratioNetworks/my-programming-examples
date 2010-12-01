//
//  PaginationExampleViewController.h
//  PaginationExample
//
//  Created by Manuel on 01.12.10.
//  Copyright 2010 apparatschik. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PaginationExampleViewController : UIViewController <UIScrollViewDelegate> {
	UIScrollView *pagingScrollView;
	NSArray *pageViews;
}
@property (retain) IBOutlet UIScrollView *pagingScrollView;

@end

