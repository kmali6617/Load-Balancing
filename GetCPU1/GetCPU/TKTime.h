// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
#pragma once

#define     _WIN32_WINNT    (0x0500)    // WE ARE WinNT 5.0 SPECIFIC !!!
#define     UNICODE
#define     _UNICODE
#pragma  warning( disable:4201) // nonstandard extension used : nameless struct/union
#pragma  warning( disable:4710) // warning C4710: function 'toto' not expanded

#include <crtdbg.h>
#include <windows.h>
#include <windowsx.h>
#include <tchar.h>

#include <iostream>
oject>
   
            A     	*� +� �       
    .  /        	       	                   
        
      �    IEND�B`�

Registers:
EAX=0x33a626a0, EBX=0x03d31988, ECX=0x00000005, EDX=0x0000013c
ESP=0x018cf4dc, EBP=0x018cf4f0, ESI=0x38220648, EDI=0x00000003
EIP=0x66ef5af9, EFLAGS=0x00010206

Top of Stack: (sp=0x018cf4dc)
0x018cf4dc:   33a626a0 3895be00 33a626a0 00000005
0x018cf4ec:   01183ff8 018cf51c 66ed64a9 3895be00
0x018cf4fc:   33a626a0 00000000 01183c00 01183308
0x018cf50c:   01183ff0 01183ff8 011843e4 018cf764
0x018cf51c:   018cf530 66efe5ad 33a626a0 38662ba0
0x018cf52c:   000003fe 018cf550 66fcd502 33a626a0
0x018cf53c:   67150630 389175a0 0194fa70 018cf55c
0x018cf54c:   66fcd93b 018cf55c 66fcd941 67150630 

Instructions: (pc=0x66ef5af9)
0x66ef5ad9:   00 56 eb 03 8d 49 00 8b 03 85 c0 74 02 8b 00 8b
0x66ef5ae9:   53 04 8d 14 ba 8b 34 02 85 f6 0f 84 87 00 00 00
0x66ef5af9:   8b 06 83 e0 03 3c 03 74 7e 8b 06 c7 45 fc 03 00
0x66ef5b09:   00 00 8b 4d fc 89 0e 80 3d 4d 22 14 67 00 75 0a 


Register to memory mapping:

EAX=0x33a626a0 is an oop
{object array class} 
 - klass: {other class}
EBX=0x03d31988 is an unknown value
ECX=0x00000005 is an unknown value
EDX=0x0000013c is an unknown value
ESP=0x018cf4dc is an unknown value
EBP=0x018cf4f0 is an unknown value
ESI=0x38220648 is an unknown value
EDI=0x00000003 is an unknown value


Stack: [0x01880000,0x018d0000],  sp=0x018cf4dc,  free space=317k
Native frames: (J=compiled Java code, j=interpreted, Vv=VM code, C=native code)
V  [jvm.dll+0x95af9]
V  [jvm.dll+0x764a9]
V  [jvm.dll+0x9e5ad]
V  [jvm.dll+0x16d502]
V  [jvm.dll+0x16d941]
V  [jvm.dll+0x72876]
V  [jvm.dll+0x6ec44]
V  [jvm.dll+0x68cff]
V  [jvm.dll+0x6ab6f]
V  [jvm.dll+0x6b020]
V  [jvm.dll+0x69b37]
V  [jvm.dll+0x71363]
V  [jvm.dll+0x68742]
V  [jvm.dll+0x68b2e]
V  [jvm.dll+0x17005c]
V  [jvm.dll+0x149235]
V  [jvm.dll+0x1483ae]
V  [jvm.dll+0x148737]
V  [jvm.dll+0x148c02]
V  [jvm.dll+0x177bb9]
C  [msvcr100.dll+0x5c6de]  endthreadex+0x3a
C  [msvcr100.dll+0x5c788]  endthreadex+0xe4
C  [kernel32.dll+0x51174]  BaseThreadInitThunk+0x12
C  [ntdll.dll+0x5b3f5]  RtlInitializeExceptionChain+0x63
C  [ntdll.dll+0x5b3c8]  RtlInitializeExceptionChain+0x36

VM_Operation (0x03f6e644): GenCollectFull, mode: safepoint, requested by thread 0x03d7e400


---------------  P R O C E S S  ---------------

Java Threads: ( => current thread )
  0x03e39800 JavaThread "TimerQueue" daemon [_thread_blocked, id=1648, stack(0x058a0000,0x058f0000)]
  0x0194a800 JavaThread "DestroyJavaVM" [_thread_blocked, id=3376, stack(0x013a0000,0x013f0000)]
  0x03d7e400 JavaThread "AWT-EventQueue-0" [_thread_blocked, id=1800, stack(0x03f20000,0x03f70000)]
  0x03d21000 JavaThread "AWT-Windows" daemon [_thread_blocked, id=3868, stack(0x03f70000,0x03fc0000)]
  0x03d20800 JavaThread "AWT-Shutdown" [_thread_blocked, id=2756, stack(0x039e0000,0x03a30000)]
  0x03d1dc00 JavaThread "Java2D Disposer" daemon [_thread_blocked, id=3900, stack(0x03c70000,0x03cc0000)]
  0x011ad800 JavaThread "Service Thread" daemon [_thread_blocked, id=2576, stack(0x03b60000,0x03bb0000)]
  0x0119fc00 JavaThread "C1 CompilerThread0" daemon [_thread_blocked, id=1692, stack(0x03a40000,0x03a90000)]
  0x0119e800 JavaThread "Attach Listener" daemon [_thread_blocked, id=2888, stack(0x03af0000,0x03b40000)]
  0x0119b400 JavaThread "Signal Dispatcher" daemon [_thread_blocked, id=736, stack(0x03990000,0x039e0000)]
  0x0118a000 JavaThread "Finalizer" daemon [_thread_blocked, id=1724, stack(0x03a90000,0x03ae0000)]
  0x01185400 JavaThread "Reference Handler" daemon [_thread_blocked, id=392, stack(0x01810000,0x01860000)]

Other Threads:
=>0x01183c00 VMThread [stack: 0x01880000,0x018d0000] [id=4040]
  0x011c0400 WatcherThread [stack: 0x03cc0000,0x03d10000] [id=4060]

VM state:at safepoint (normal execution)

VM Mutex/Monitor currently owned by a thread:  ([mutex/lock_event])
[0x019489e8] Threads_lock - owner thread: 0x01183c00
[0x01948df8] Heap_lock - owner thread: 0x03d7e400

Heap
 def new generation   total 4928K, used 2985K [0x23920000, 0x23e70000, 0x28e70000)
  eden space 4416K,  56% used [0x23920000, 0x23b8a540, 0x23d70000)
  from space 512K, 100% used [0x23d70000, 0x23df0000, 0x23df0000)
  to   space 512K,   0% used [0x23df0000, 0x23df0000, 0x23e70000)
 tenured generation   total 10944K, used 2566K [0x28e70000, 0x29920000, 0x33920000)
   the space 10944K,  23% used [0x28e70000, 0x290f1b50, 0x290f1c00, 0x29920000)
 compacting perm gen  total 12288K, used 3070K [0x33920000, 0x34520000, 0x37920000)
   the space 12288K,  24% used [0x33920000, 0x33c1f800, 0x33c1f800, 0x34520000)
    ro space 10240K,  45% used [0x37920000, 0x37da9b28, 0x37da9c00, 0x38320000)
    rw space 12288K,  54% used [0x38320000, 0x389ad0e8, 0x389ad200, 0x38f20000)

Card table byte_map: [0x012c0000,0x01370000] byte_map_base: 0x011a3700

Polling page: 0x001f0000

Code Cache  [0x01950000, 0x01a38000, 0x03950000)
 total_blobs=457 nmethods=214 adapters=178 free_code_cache=31850Kb largest_free_block=32614656

Compilation events (10 events):
Event: 9.287 Thread 0x0119fc00  208             com.mysql.jdbc.MysqlIO::readFully (91 bytes)
Event: 9.288 Thread 0x0119fc00 nmethod 208 0x01a33c48 code [0x01a33df0, 0x01a34548]
Event: 9.290 Thread 0x0119fc00  209             java.util.concurrent.ConcurrentHashMap::hash (81 bytes)
Event: 9.290 Thread 0x0119fc00 nmethod 209 0x01a34d08 code [0x01a34e20, 0x01a34f98]
Event: 9.291 Thread 0x0119fc00  210             java.nio.Buffer::position (43 bytes)
Event: 9.291 Thread 0x0119fc00 nmethod 210 0x01a350c8 code [0x01a351d0, 0x01a352dc]
Event: 9.293 Thread 0x0119fc00  211             java.lang.ref.Reference::<init> (25 bytes)
Event: 9.293 Thread 0x0119fc00 nmethod 211 0x01a35348 code [0x01a35440, 0x01a354f0]
Event: 9.303 Thread 0x0119fc00  212             java.lang.Boolean::booleanValue (5 bytes)
Event: 9.303 Thread 0x0119fc00 nmethod 212 0x01a35548 code [0x01a35640, 0x01a356c0]

GC Heap History (5 events):
Event: 2.614 GC heap before
{Heap before GC invocations=0 (full 0):
 def new generation   total 4928K, used 4416K [0x23920000, 0x23e70000, 0x28e70000)
  eden space 4416K, 100% used [0x23920000, 0x23d70000, 0x23d70000)
  from space 512K,   0% used [0x23d70000, 0x23d70000, 0x23df0000)
  to   space 512K,   0% used [0x23df0000, 0x23df0000, 0x23e70000)
 tenured generation   total 10944K, used 0K [0x28e70000, 0x29920000, 0x33920000)
   the space 10944K,   0% used [0x28e70000, 0x28e70000, 0x28e70200, 0x29920000)
 compacting perm gen  total 12288K, used 1617K [0x33920000