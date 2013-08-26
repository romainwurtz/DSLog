DSLog
=========

Usage with NSLog
--------------------
Just include the file DSLog.h and import it when neeeded using:
```obj-c
#import "DSLog.h"
```

Usage with [Lumberjack](https://github.com/robbiehanson/CocoaLumberjack) (DDLog)
--------------------
Just include the file DSLog.h and import it when neeeded using:
```obj-c
#import "DSLog+DDLog.h"
```
One of the many advantages to use DDLog over NSLog is the support of [XcodeColors](https://github.com/robbiehanson/XcodeColors).

Output
--------------------
######DSLogInfo(@"%@", @"My nice output");
```
2013-08-25 13:37:02.142 Project Name[4294:303] [Main Thread][main (main.m:17)][INFO] My nice output
```

######DSLogWarn(@"%@", @"My nice output");
```
2013-08-25 13:37:04.242 Project Name[4294:303] [Main Thread][main (main.m:17)][WARNING] My nice output
```

######DSLogError(@"%@", @"My nice output");
```
2013-08-25 13:37:06.242 Project Name[4294:303] [Main Thread][main (main.m:17)][ERROR] My nice output
```

######DSLog(@"%@", @"My nice output");
```
2013-08-25 13:37:08.242 Project Name[4294:303] [Main Thread][main (main.m:17)] My nice output
```
