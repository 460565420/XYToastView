//
//  XYToast.h
//  ServiceIntelligent
//
//  Created by xieqilin on 2017/9/8.
//  Copyright © 2017年 xieqilin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ToastLabel : UILabel
- (void)setMessageText:(NSString *)text;
@end


@interface XYToast : NSObject{
    ToastLabel *toastLabel;
    NSTimer *countTimer;
}

//创建声明单例方法
+ (instancetype)shareInstance;

- (void)showToast:(NSString *)message duration:(CGFloat)duration;

@end
