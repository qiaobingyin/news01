//
//  QBChanceModel.h
//  网易新闻
//
//  Created by bing on 16/2/27.
//  Copyright © 2016年 bing. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QBChannelModel : NSObject
@property (nonatomic, copy) NSString *tname;
@property (nonatomic, copy) NSString *tid;

+ (NSArray *)chanelDatas;
@end
