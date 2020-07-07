//
//  XGIDCardDetectionViewController.h
//  ShargooData
//
//  Created by Twinkleo on 2020/5/13.
//  Copyright © 2020 Twinkleo. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface XGIDCardDetectionViewController : UIViewController

/**
身份证识别后的回调
backData           识别结果
infoController     身份证信息展示列表页面
*/
@property (nonatomic, copy) void(^idCardDetectionBlock)(id backData, UIViewController *infoController);

@end

NS_ASSUME_NONNULL_END
