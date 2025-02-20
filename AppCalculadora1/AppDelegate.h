//
//  AppDelegate.h
//  AppCalculadora1
//
//  Created by Miriam Sanchez on 10/02/25.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (weak) IBOutlet NSTextField *txtOp;
@property (weak) IBOutlet NSTextFieldCell *txtIgual;

@property (weak) IBOutlet NSTextField *txtResul;
@property (weak) IBOutlet NSTextField *txtNum1;

@property (weak) IBOutlet NSTextField *txtNum2;
- (IBAction)btnSuma:(id)sender;

- (IBAction)btnResta:(id)sender;

- (IBAction)btnMultiplica:(id)sender;

- (IBAction)btnDivide:(id)sender;


@end

