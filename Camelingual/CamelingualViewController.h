//
//  CamelingualViewController.h
//  Camelingual
//
//  Created by Tsuneo Yoshioka on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

#import "OCRWebService.h"
#import "GoogleTranslateAPI.h"
#import "OCRTextViewController.h"
#import "ImageCropViewController.h"
#import "CameraToolbarController.h"

@interface CamelingualViewController : UIViewController<UIActionSheetDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate,OCRWebServiceDelegate, GoogleTranslateAPIDelegate,UITableViewDataSource,UITableViewDelegate,OCRTextViewControllerDelegate,CLLocationManagerDelegate,ImageCropViewControllerDelegate> {
    UIWebView *webView;
    UIImageView *imageView;
    UIButton *imageButton;
    UILabel *notificationLabel;
    UIActivityIndicatorView *activityIndicatorView;
    UIProgressView *progressView;
    UITextView *ocrTextView;
    UITextView *translateTextView;
    UITableView *sourceLangTableView;
    UITableView *destLangTableView;
    UILabel *sourceLangLabel;
    UILabel *destLangLabel;
    UIView *langSelectView;
    UIView *mainView;
    UIView *topView;
    OCRTextViewController *aOCRTextViewController;
    UIBarButtonItem *photoButton;
    UIBarButtonItem *albumButton;

    
    NSMutableArray *actionSheetButtonIndex2sourceType;
    UIPopoverController *popover;
    UIToolbar *toolbar;

    OCRWebService *aOCRWebService;
    GoogleTranslateAPI *aGoogleTranslateAPI;
    UIImagePickerController *imagePickerCamera;
    UIImagePickerController *imagePickerPhoto;
    UIImagePickerController *imagePicker;
    
    NSArray *sourceLangArray;
    NSArray *destLangArray;
    
    NSString *sourceLang;
    NSString *destLang;
    
    NSString *sourceStartLang;
    NSString *destStartLang;
    
    NSString *sourceDoneLang;
    NSString *destDoneLang;
    
    CLLocationManager *locationManager;
    
    
    enum {MAIN_VIEW,LANG_SELECT_VIEW, IMAGECROP_VIEW} currentView;
    ImageCropViewController *imageCropViewController;
    
    BOOL f_imageCropAsPreview;
}

- (IBAction)openPhoto:(id)sender;
- (IBAction)openAlbum:(id)sender;
- (IBAction)editOCRText:(id)sender;
- (IBAction)cropImage:(id)sender;
@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;
@property (nonatomic, retain) IBOutlet UIWebView *webView;
@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) IBOutlet UIButton *imageButton;
@property (nonatomic, retain) IBOutlet UILabel *notificationLabel;
@property (nonatomic, retain) IBOutlet UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, retain) IBOutlet UIProgressView *progressView;
@property (nonatomic, retain) IBOutlet UITextView *ocrTextView;
@property (nonatomic, retain) IBOutlet UITextView *translateTextView;
@property (nonatomic, retain) IBOutlet UITableView *sourceLangTableView;
@property (nonatomic, retain) IBOutlet UITableView *destLangTableView;
@property (nonatomic, retain) IBOutlet UILabel *sourceLangLabel;
@property (nonatomic, retain) IBOutlet UILabel *destLangLabel;
@property (nonatomic, retain) IBOutlet UIView *langSelectView;
@property (nonatomic, retain) IBOutlet UIView *mainView;
@property (nonatomic, retain) IBOutlet UIView *topView;
@property (nonatomic, retain) IBOutlet OCRTextViewController *aOCRTextViewController;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *photoButton;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *albumButton;
@property(retain) NSString *ocrText;
@property(retain) NSString *translateText;
@property(retain) UIImage *image;
@property CGRect imageCropRect;
@property(retain) NSMutableDictionary *imagemetadata;
@property(retain) UIImage *cropImage;
@property (nonatomic, retain) IBOutlet ImageCropViewController *imageCropViewController;
@property(retain)  CameraToolbarController *cameraToolbarController;

@end
