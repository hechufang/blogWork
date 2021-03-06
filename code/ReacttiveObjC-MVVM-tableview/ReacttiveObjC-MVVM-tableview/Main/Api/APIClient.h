//
//  APIClient.h
//  ReacttiveObjC-MVVM-tableview
//
//  Created by darkwing90s on 2019/7/20.
//  Copyright © 2019 darkwing90s. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveObjC/ReactiveObjC.h>

NS_ASSUME_NONNULL_BEGIN

@interface APIClient : NSObject

+ (APIClient *)sharedClient;
- (RACSignal *)fetchProductWithPageIndex:(NSUInteger)pageIndex;

@end

NS_ASSUME_NONNULL_END
