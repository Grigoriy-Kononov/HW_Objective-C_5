//
//  ViewController.h
//  HW_Objective-C_5
//
//  Created by Григорий Кононов on 12.09.2023.
//

#import <UIKit/UIKit.h>
#import "Loader.h"
#import <WebKit/WebKit.h>

@interface ViewController : UIViewController<UISearchBarDelegate>
@property (strong, nonatomic) Loader * loader;
@property (weak, nonatomic) IBOutlet WKWebView *webView;
@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
-(void) performLoadingWithGETRequest;
-(void) performLoadingWithPOSTRequest;
-(void) performLoadingSearchResultsFromYandex: (NSString *) searchQuery;
@end

