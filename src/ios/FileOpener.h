#import <Cordova/CDV.h>

@interface FileOpener : CDVPlugin <UIDocumentInteractionControllerDelegate> {
    NSString *localFile;
}

@property(nonatomic, strong) UIDocumentInteractionController *controller;

- (void) openFile: (CDVInvokedUrlCommand*)command;

@end