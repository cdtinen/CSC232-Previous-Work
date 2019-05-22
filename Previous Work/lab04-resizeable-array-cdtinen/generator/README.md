# Generating Executables

To compile and run your program from the command-line, issue the following commands. Note that some output has been replaced with the phrase "... lots of output" for brevity and clarity. Furthermore, note that you **do not** type the `$` as this merely represents the command line prompt itself. Finally, some blank lines are shown in the following output, again, for clarity.

```bash
$ cd generator
$ cmake -G "Unix Makefiles" ..
-- The C compiler identification is unknown
-- The CXX compiler identification is GNU 7.4.0
-- Check for working C compiler: C:/cygwin64/bin/cc
-- Check for working C compiler: C:/cygwin64/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working CXX compiler: C:/cygwin64/bin/c++.exe
-- Check for working CXX compiler: C:/cygwin64/bin/c++.exe -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: C...

$ make
Scanning dependencies of target lab04Test
[  5%] Building CXX object CMakeFiles/lab04Test.dir/src/test/cpp/UnitTestRunner.cpp.o
[ 11%] Building CXX object CMakeFiles/lab04Test.dir/src/test/cpp/ResizeableArrayBagUnitTest.cpp.o
[ 17%] Building CXX object CMakeFiles/lab04Test.dir/src/main/cpp/ExpandedTemplates.cpp.o
[ 23%] Linking CXX executable ../out/lab04Test
[ 23%] Built target lab04Test
Scanning dependencies of target lab04Demo
[ 29%] Building CXX object CMakeFiles/lab04Demo.dir/src/main/cpp/Demo.cpp.o
[ 35%] Building CXX object CMakeFiles/lab04Demo.dir/src/main/cpp/ArrayBag.cpp.o
[ 41%] Building CXX object CMakeFiles/lab04Demo.dir/src/main/cpp/ResizableArrayBag.cpp.o
[ 47%] Building CXX object CMakeFiles/lab04Demo.dir/src/main/cpp/DoublingStrategy.cpp.o
[ 52%] Building CXX object CMakeFiles/lab04Demo.dir/src/main/cpp/BumpStrategy.cpp.o
[ 58%] Building CXX object CMakeFiles/lab04Demo.dir/src/main/cpp/ExpandedTemplates.cpp.o
[ 64%] Linking CXX executable ../out/lab04Demo
[ 64%] Built target lab04Demo
Scanning dependencies of target lab04
[ 70%] Building CXX object CMakeFiles/lab04.dir/src/main/cpp/Main.cpp.o
[ 76%] Building CXX object CMakeFiles/lab04.dir/src/main/cpp/ResizableArrayBag.cpp.o
[ 82%] Building CXX object CMakeFiles/lab04.dir/src/main/cpp/DoublingStrategy.cpp.o
[ 88%] Building CXX object CMakeFiles/lab04.dir/src/main/cpp/BumpStrategy.cpp.o
[ 94%] Building CXX object CMakeFiles/lab04.dir/src/main/cpp/ExpandedTemplates.cpp.o
[100%] Linking CXX executable ../out/lab04
[100%] Built target lab04

$ ../out/lab04
Hello, main...

$ ../out/lab04Demo
Demo of Strategy Pattern
Added entry; max items is currently 2
Added entry; max items is currently 2
Added entry; max items is currently 4
Added entry; max items is currently 4
Added entry; max items is currently 8
Added entry; max items is currently 8
Added entry; max items is currently 8
Added entry; max items is currently 8
Added entry; max items is currently 16
Added entry; max items is currently 16

Added entry; max items is currently 2
Added entry; max items is currently 2
Added entry; max items is currently 3
Added entry; max items is currently 4
Added entry; max items is currently 5
Added entry; max items is currently 6
Added entry; max items is currently 7
Added entry; max items is currently 8
Added entry; max items is currently 9
Added entry; max items is currently 10

Demo of Template Method
Subclass 1 implementation of primitiveMethod()
Subclass 2 implementation of primitiveMethod()

$ ../out/lab04Test
OK (0)

$
```