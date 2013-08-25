//
//  DSLog.h
//
//  Created by Romain Wurtz on 8/25/13.
//  Copyright (c) 2013 Romain Wurtz. All rights reserved.
//

#ifdef DEBUG
#define DSLogError(...) NSLog(@"[%@][%s (%@:%i)][ERROR] %@", ([[NSThread currentThread] isMainThread] ? @"Main Thread" : [NSString stringWithFormat:@"Thread %p", [NSThread currentThread]]), __func__, [[NSString stringWithUTF8String:__FILE__] lastPathComponent] , __LINE__, [NSString stringWithFormat:__VA_ARGS__])
#define DSLog(...) NSLog(@"[%@][%s (%@:%i)] %@", ([[NSThread currentThread] isMainThread] ? @"Main Thread" : [NSString stringWithFormat:@"Thread %p", [NSThread currentThread]]), __func__, [[NSString stringWithUTF8String:__FILE__] lastPathComponent] , __LINE__, [NSString stringWithFormat:__VA_ARGS__])
#define DSLogInfo(...) NSLog(@"[%@][%s (%@:%i)][INFO] %@", ([[NSThread currentThread] isMainThread] ? @"Main Thread" : [NSString stringWithFormat:@"Thread %p", [NSThread currentThread]]), __func__, [[NSString stringWithUTF8String:__FILE__] lastPathComponent] , __LINE__, [NSString stringWithFormat:__VA_ARGS__])
#else
#define DSLog(...) ((void)0)
#define DSLogError(...) ((void)0)
#define DSLogInfo(...) ((void)0)
// #define NSLog(...) /* */
#endif