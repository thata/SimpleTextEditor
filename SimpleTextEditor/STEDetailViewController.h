//
//  STEDetailViewController.h
//  SimpleTextEditor
//
//  Created by 畠山 貴 on 12/02/05.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STESimpleTextDocument.h"

@interface STEDetailViewController : UIViewController <STESimpleTextDocumentDelegate>

@property (strong, nonatomic) NSURL *detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (weak, nonatomic) IBOutlet UITextView *textView;

@end
