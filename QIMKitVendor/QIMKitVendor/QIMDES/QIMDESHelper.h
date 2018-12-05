//
//  QIMDESHelper.h
//  qunarChatIphone
//
//  Created by QIM on 2018/3/20.
//

#import <Foundation/Foundation.h>

@interface QIMDESHelper : NSObject

+ (instancetype)sharedInstance;

- (NSData *)DESEncrypt:(NSData *)data WithKey:(NSString *)key;

- (NSData *)DESDecrypt:(NSData *)data WithKey:(NSString *)key;

@end
