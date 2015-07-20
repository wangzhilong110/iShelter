//
//  WZLPageTextView.h
//  iShelter
//
//  Created by wangzhilong on 15/7/20.
//  Copyright (c) 2015年 wangzhilong. All rights reserved.
//
//自定义属性文字的绘制
#import <UIKit/UIKit.h>

@interface WZLPageTextView : UIView
@property (copy, nonatomic) NSAttributedString *attributedString;

- (void)setText:(NSAttributedString *)text;

@end
