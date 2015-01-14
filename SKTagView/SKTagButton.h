//
// Created by Shaokang Zhao on 15/1/12.
// Copyright (c) 2015 Shaokang Zhao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class SKTag;
@interface SKTagButton : UIButton
+ (instancetype)buttonWithTag:(SKTag *)tag;

@property (nonatomic, strong, readonly) SKTag *mTag;

@end