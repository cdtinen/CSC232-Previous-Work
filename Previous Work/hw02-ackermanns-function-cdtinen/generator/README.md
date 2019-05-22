# Using `cmake` to build targets

This document gives a brief summary of how to use `cmake` to build your targets. The [CMakeLists.txt](../CMakeLists.txt) file prescribes three targets:

* `hw02` - This target is a playground; it initially only echos a simple statement to the standard output console window. This target and the code used to build it does NOT contribute to your homework grade.
* `hw02Demo` - This is the same as above; it serves as yet another playground for experimentation. This target and the code used to build it does NOT contribute to your homework grade.
* `hw02Test` - This target executes the unit tests that are used to help determine the grade for this assignment.

Below is a summary of commands used to build your targets and execute them. They all assume you have navigated to the `{WORKING_DIRECTORY}/generator` folder before issuing them. Also note that some of the file paths are specific to your instructors machine/environment and will not match your output exactly.

```bash
$ cmake -G "Unix Makefiles" ..
-- The C compiler identification is AppleClang 10.0.0.10001145
-- The CXX compiler identification is AppleClang 10.0.0.10001145
-- Check for working C compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc
-- Check for working C compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++
-- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /Users/jdaehn/repos/hw02-akermanns-function/generator
```

The above action has created a number of files that can be used by another tool named `make` that is used to build your targets. In this case, you need only execute the `make` command without any arguments:

```bash
$ make
Scanning dependencies of target hw02Test
[  6%] Building CXX object CMakeFiles/hw02Test.dir/src/test/cpp/UnitTestRunner.cpp.o
[ 12%] Building CXX object CMakeFiles/hw02Test.dir/src/main/cpp/AckerCommand.cpp.o
[ 18%] Building CXX object CMakeFiles/hw02Test.dir/src/main/cpp/AckerReceiver.cpp.o
[ 25%] Building CXX object CMakeFiles/hw02Test.dir/src/main/cpp/AckerInvoker.cpp.o
[ 31%] Building CXX object CMakeFiles/hw02Test.dir/src/test/cpp/AckerReceiverUnitTest.cpp.o
[ 37%] Linking CXX executable ../out/hw02Test
[ 37%] Built target hw02Test
Scanning dependencies of target hw02Demo
[ 43%] Building CXX object CMakeFiles/hw02Demo.dir/src/main/cpp/Demo.cpp.o
[ 50%] Building CXX object CMakeFiles/hw02Demo.dir/src/main/cpp/AckerCommand.cpp.o
[ 56%] Building CXX object CMakeFiles/hw02Demo.dir/src/main/cpp/AckerReceiver.cpp.o
[ 62%] Building CXX object CMakeFiles/hw02Demo.dir/src/main/cpp/AckerInvoker.cpp.o
[ 68%] Linking CXX executable ../out/hw02Demo
[ 68%] Built target hw02Demo
Scanning dependencies of target hw02
[ 75%] Building CXX object CMakeFiles/hw02.dir/src/main/cpp/Main.cpp.o
[ 81%] Building CXX object CMakeFiles/hw02.dir/src/main/cpp/AckerCommand.cpp.o
[ 87%] Building CXX object CMakeFiles/hw02.dir/src/main/cpp/AckerReceiver.cpp.o
[ 93%] Building CXX object CMakeFiles/hw02.dir/src/main/cpp/AckerInvoker.cpp.o
[100%] Linking CXX executable ../out/hw02
[100%] Built target hw02
```

From the output shown, you can see that the targets have been built in another directory. Assuming we stay where we are, we can execute the targets as follows. The output shown is without having written any code, i.e., it is the initial output of what was delivered to you.

```bash
$ ../out/hw02
Hello, Main!
0
$ ../out/hw02Demo
Hello, Demo!
$ ../out/hw02Test
AckerReceiverUnitTest::testDefaults
 : assertion
AckerReceiverUnitTest::testPositiveMZeroN
 : assertion
AckerReceiverUnitTest::testZeroMPositiveN
 : assertion
AckerReceiverUnitTest::testPositiveMPositiveN
 : assertion
AckerReceiverUnitTest::testSameMandN
 : assertion
/Users/jdaehn/repos/hw02-akermanns-function/src/test/cpp/AckerReceiverUnitTest.cpp:32: Assertion
Test name: AckerReceiverUnitTest::testDefaults
equality assertion failed
- Expected: 1
- Actual  : 0
- acker(0, 0) didn't yield expected results

/Users/jdaehn/repos/hw02-akermanns-function/src/test/cpp/AckerReceiverUnitTest.cpp:39: Assertion
Test name: AckerReceiverUnitTest::testPositiveMZeroN
equality assertion failed
- Expected: 2
- Actual  : 0
- acker(1, 0) didn't yield expected results

/Users/jdaehn/repos/hw02-akermanns-function/src/test/cpp/AckerReceiverUnitTest.cpp:46: Assertion
Test name: AckerReceiverUnitTest::testZeroMPositiveN
equality assertion failed
- Expected: 2
- Actual  : 0
- acker(0, 1) didn't yield expected results

/Users/jdaehn/repos/hw02-akermanns-function/src/test/cpp/AckerReceiverUnitTest.cpp:53: Assertion
Test name: AckerReceiverUnitTest::testPositiveMPositiveN
equality assertion failed
- Expected: 125
- Actual  : 0
- acker(3, 4) didn't yield expected results

/Users/jdaehn/repos/hw02-akermanns-function/src/test/cpp/AckerReceiverUnitTest.cpp:60: Assertion
Test name: AckerReceiverUnitTest::testSameMandN
equality assertion failed
- Expected: 61
- Actual  : 0
- acker(3, 3) didn't yield expected results

Failures !!!
Run: 5   Failure total: 5   Failures: 5   Errors: 0
$
```