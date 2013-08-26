//
//  DSLog+DDLog.h
//
//  Created by Romain Wurtz on 8/25/13.
//  Copyright (c) 2013 Romain Wurtz. All rights reserved.
//

#ifdef DEBUG
#define DSLogError(...) DDLogError(@"[%@][%s (%@:%i)] %@", ([[NSThread currentThread] isMainThread] ? @"Main Thread" : [NSString stringWithFormat:@"Thread %p", [NSThread currentThread]]), __func__, [[NSString stringWithUTF8String:__FILE__] lastPathComponent] , __LINE__, [NSString stringWithFormat:__VA_ARGS__])
#define DSLog(...) DDLogVerbose(@"[%@][%s (%@:%i)] %@", ([[NSThread currentThread] isMainThread] ? @"Main Thread" : [NSString stringWithFormat:@"Thread %p", [NSThread currentThread]]), __func__, [[NSString stringWithUTF8String:__FILE__] lastPathComponent] , __LINE__, [NSString stringWithFormat:__VA_ARGS__])
#define DSLogInfo(...) DDLogInfo(@"[%@][%s (%@:%i)] %@", ([[NSThread currentThread] isMainThread] ? @"Main Thread" : [NSString stringWithFormat:@"Thread %p", [NSThread currentThread]]), __func__, [[NSString stringWithUTF8String:__FILE__] lastPathComponent] , __LINE__, [NSString stringWithFormat:__VA_ARGS__])
#define DSLogWarn(...) DDLogWarn(@"[%@][%s (%@:%i)] %@", ([[NSThread currentThread] isMainThread] ? @"Main Thread" : [NSString stringWithFormat:@"Thread %p", [NSThread currentThread]]), __func__, [[NSString stringWithUTF8String:__FILE__] lastPathComponent] , __LINE__, [NSString stringWithFormat:__VA_ARGS__])
#else
#define DSLog(...) ((void)0)
#define DSLogError(...) ((void)0)
#define DSLogInfo(...) ((void)0)
#define DSLogWarn(...) ((void)0)
// #define NSLog(...) /* */
#endif