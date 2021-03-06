//
//  QuestionViewController.h
//  BuchRechMC
//
//  Created by Vitaliy Yarkun on 8/22/16.
//  Copyright © 2016 Vitaliy Yarkun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "Question.h"

@interface QuestionViewController : UIViewController <UITableViewDataSource>

@property (assign, nonatomic) NSInteger selectedCell;
@property RLMResults<Question *> *allQuestions;

@end
