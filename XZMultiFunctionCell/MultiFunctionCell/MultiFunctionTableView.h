//
//  MultiFunctionTableView.h
//  XZMultiFunctionCell
//
//  Created by xiazer on 15/1/5.
//  Copyright (c) 2015年 xiazer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OverLayView.h"
#import "MultiFunctionCell.h"

@interface MultiFunctionTableView : UITableView <OverLayViewDelegate,MultiFunctionCellActionDelegate>

- (instancetype)initWithFrame:(CGRect)frame style:(UITableViewStyle)style;

@end
