//
//  pickeyAppDelegate.h
//  pickey
//
//  Created by 望月 駿一 on 2014/08/31.
//  Copyright (c) 2014年 Shunichi Mochizuki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface pickeyAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
