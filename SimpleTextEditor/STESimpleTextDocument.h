//
//  STESimpleTextDocument.h
//  SimpleTextEditor
//
//  Created by 畠山 貴 on 12/02/05.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol STESimpleTextDocumentDelegate;

@interface STESimpleTextDocument : UIDocument
@property (copy, nonatomic) NSString* documentText;
@property (weak, nonatomic) id<STESimpleTextDocumentDelegate> delegate;
@end


@protocol STESimpleTextDocumentDelegate <NSObject>
@optional
- (void)documentContentsDidChange:(STESimpleTextDocument*)document;
@end

