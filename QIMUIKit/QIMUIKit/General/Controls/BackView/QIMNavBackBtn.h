//
//  QIMNavBackBtn.h
//  qunarChatIphone
//
//  Created by QIM on 2018/1/16.
//

#import "QIMCommonUIFramework.h"

@interface QIMNavBackBtn : UIButton

+ (instancetype)sharedInstance;

- (void)updateNotReadCount:(NSInteger)appCount;

@end
