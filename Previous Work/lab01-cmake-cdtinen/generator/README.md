# Using `cmake` to build targets

This document gives a brief summary of how to use `cmake` to build your targets. The [CMakeLists.txt](../CMakeLists.txt) file prescribes three targets:

* `lab01` - This target is a playground; it initially demonstrates the use of the IntCell class. This target and the code used to build it does NOT contribute to your lab grade.
* `lab01Demo` - This is the same as above; it initially demonstrates the use of pointers to the IntCell class. It serves as yet another playground for experimentation. This target and the code used to build it does NOT contribute to your lab grade.
* `lab01Test` - This target executes the unit tests that are used to help determine the grade for this assignment.

Below is a summary of commands used to build your targets and execute them. They all assume you have navigated to the `{WORKING_DIRECTORY}/generator` folder before issuing them. Also note that some of the file paths are specific to your instructors machine/environment and will not match your output exactly.

```bash
$ cmake -G "Unix Makefiles" ..
-- The C compiler identification is AppleClang 10.0.0.10001044
-- The CXX compiler identification is AppleClang 10.0.0.10001044
-- Check for working C compiler: /Library/Developer/CommandLineTools/usr/bin/cc
-- Check for working C compiler: /Library/Developer/CommandLineTools/usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /Library/Developer/CommandLineTools/usr/bin/c++
-- Check for working CXX compiler: /Library/Developer/CommandLineTools/usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /Users/jrd/GitHub/lab01-cmake/generator
```

The above action has created a number of files that can be used by another tool named `make` that is used to build your targets. In this case, you need only execute the `make` command without any arguments:

```bash
$ make
Scanning dependencies of target lab01Test
[ 10%] Building CXX object CMakeFiles/lab01Test.dir/src/test/cpp/UnitTestRunner.cpp.o
[ 20%] Building CXX object CMakeFiles/lab01Test.dir/src/main/cpp/IntCell.cpp.o
[ 30%] Building CXX object CMakeFiles/lab01Test.dir/src/test/cpp/IntCellUnitTest.cpp.o
[ 40%] Linking CXX executable ../out/lab01Test
[ 40%] Built target lab01Test
Scanning dependencies of target lab01Demo
[ 50%] Building CXX object CMakeFiles/lab01Demo.dir/src/main/cpp/Demo.cpp.o
[ 60%] Building CXX object CMakeFiles/lab01Demo.dir/src/main/cpp/IntCell.cpp.o
[ 70%] Linking CXX executable ../out/lab01Demo
[ 70%] Built target lab01Demo
Scanning dependencies of target lab01
[ 80%] Building CXX object CMakeFiles/lab01.dir/src/main/cpp/Main.cpp.o
[ 90%] Building CXX object CMakeFiles/lab01.dir/src/main/cpp/IntCell.cpp.o
[100%] Linking CXX executable ../out/lab01
[100%] Built target lab01
```

From the output shown, you can see that the targets have been built in another directory. Assuming we stay where we are, we can execute the targets as follows. The output shown is without having written any code, i.e., it is the initial output of what was delivered to you.

```bash
$ ../out/lab01
Hello, Main!
4
2
2
$ ../out/lab01Demo
Hello, Demo!
4
4
4
$ ../out/hw01Test
IntCellUnitTest::testDefaultConstructor
 : OK
IntCellUnitTest::testInitializingConstructor
 : OK
IntCellUnitTest::testCopyConstructor
 : OK
IntCellUnitTest::testMoveConstructor
 : OK
IntCellUnitTest::testCopyAssignmentOperator
 : OK
IntCellUnitTest::testMoveAssignmentOperator
 : OK
OK (6)
$
```