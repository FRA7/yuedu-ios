//
//  YDSDKModel.h
//  YueduFMSDK
//
//  Created by StarNet on 9/16/15.
//  Copyright (c) 2015 StarNet. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YDSDKModel : NSObject

@property (nonatomic, assign) int aid;

+ (id)modelFromData:(NSDictionary* )data;

@end