//
//  BookLoader.h
//  epub
//
//  Created by zhiyu zheng on 12-6-6.
//  Copyright (c) 2012年 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BookLoader : NSObject

@property(nonatomic, strong) NSArray* spineArray;
@property(nonatomic, copy) NSString* filePath;
@property(nonatomic) int error;

- (id) initWithPath:(NSString*)path;

@end
