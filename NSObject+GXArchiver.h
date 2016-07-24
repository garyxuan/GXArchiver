//
//  NSObject+GXArchiver.h
//
//  Created by garyxuan on 16/6/29.
//  Copyright © 2016年 garyxuan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (GXArchiver)


/**
 *  通过自定的名字归档
 *
 *  @param name 名字
 *
 *  @return 是否成功
 */
- (BOOL)gx_archiveToName:(NSString *)name;

/**
 *  通过之前归档的名字解归档
 *
 *  @param name 名字
 *
 *  @return 解归档的对象
 */
+ (id)gx_unArchive:(NSString *)name;
@end
