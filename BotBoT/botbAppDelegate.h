//
//  botbAppDelegate.h
//  BotBoT
//
//  Created by Virutal Mac on 3/13/14.
//  Copyright (c) 2014 The 4 Amigos. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface botbAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
