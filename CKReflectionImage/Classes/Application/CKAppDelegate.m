/**
 * CKReflectionImage, example to create an image reflection view.
 * Copyright (C) 2011 cocoakit.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import "CKAppDelegate.h"

#import "CKViewController.h"

@implementation CKAppDelegate

#pragma mark - Properties

@synthesize window = _window;
@synthesize viewController = _viewController;

#pragma mark - Memory management

/**
 * Deallocates the memory occupied by the receiver.
 */
- (void)dealloc {
    
    [_window release];
    _window = nil;
    
    [_viewController release];
    _viewController = nil;
    
    [super dealloc];
}

#pragma mark - Application methods

/**
 * Tells the delegate when the application has launched and may have additional launch options to handle.
 *
 * @param application: The delegating application object.
 * @param launchOptions: A dictionary indicating the reason the application was launched (if any).
 * @return NO if the application cannot handle the URL resource, otherwise return YES.
 */
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [self setWindow:[[[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]] autorelease]];
    
    [self setViewController:[CKViewController ckViewController]];
    
    [[self window] setRootViewController:[self viewController]];
    
    [[self window] makeKeyAndVisible];
    
    return YES;
    
}

@end
