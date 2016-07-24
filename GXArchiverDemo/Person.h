//
//  Person.h
//  GXArchiverDemo
//
//  Created by garyxuan on 16/7/24.
//  Copyright © 2016年 garyxuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Student.h"
@interface Person : NSObject

@property(nonatomic,copy) NSString *name;
@property(nonatomic,assign)int age;
@property(nonatomic,strong) Student *stu;

@end
