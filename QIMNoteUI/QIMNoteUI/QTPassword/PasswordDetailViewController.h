//
//  PasswordDetailViewController.h
//  qunarChatIphone
//
//  Created by QIM on 2017/7/11.
//
//

#import <UIKit/UIKit.h>

@class QIMNoteModel;
@interface PasswordDetailViewController : UIViewController

- (void)setQIMNoteModel:(QIMNoteModel *)noteModel;

@property (nonatomic, copy) NSString *pk;

@end
