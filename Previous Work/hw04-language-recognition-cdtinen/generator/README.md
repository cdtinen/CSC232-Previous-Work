# Generating targets

If you wish to generate your targets from the command line using `cmake` and `make`, navigate into the `generator` folder of this project (which is hosting this README) and execute the following commands (noting that the `$` is the command-line prompt and is NOT to be typed):

```bash
$ cmake -G "Unix Makefiles" ..
-- The C compiler identification is GNU 7.3.0
-- The CXX compiler identification is GNU 7.3.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: <repo-home>/generator
$ make
Scanning dependencies of target hw04
[ 10%] Building CXX object CMakeFiles/hw04.dir/src/main/cpp/Main.cpp.o
[ 20%] Building CXX object CMakeFiles/hw04.dir/src/main/cpp/XyzLanguageProcessor.cpp.o
[ 30%] Linking CXX executable ../out/hw04
[ 30%] Built target hw04
Scanning dependencies of target hw04Test
[ 40%] Building CXX object CMakeFiles/hw04Test.dir/src/test/cpp/UnitTestRunner.cpp.o
[ 50%] Building CXX object CMakeFiles/hw04Test.dir/src/test/cpp/XyzLanguageProcessorUnitTest.cpp.o
[ 60%] Building CXX object CMakeFiles/hw04Test.dir/src/main/cpp/XyzLanguageProcessor.cpp.o
[ 70%] Linking CXX executable ../out/hw04Test
[ 70%] Built target hw04Test
Scanning dependencies of target hw04Demo
[ 80%] Building CXX object CMakeFiles/hw04Demo.dir/src/main/cpp/Demo.cpp.o
[ 90%] Building CXX object CMakeFiles/hw04Demo.dir/src/main/cpp/XyzLanguageProcessor.cpp.o
[100%] Linking CXX executable ../out/hw04Demo
[100%] Built target hw04Demo
```

Then, to execute the different targets, again while remaining in the current directory, issue the following commands:

```bash
$ ../out/hw04
Welcome, Main!
$ ../out/hw04Demo
Welcome, Demo!
$ ../out/hw04Test
XyzLanguageProcessorUnitTest::testEmptyStringIsInValid
 : OK
XyzLanguageProcessorUnitTest::testXIsInValid
 : OK
XyzLanguageProcessorUnitTest::testYIsInValid
 : OK
XyzLanguageProcessorUnitTest::testZIsInValid
 : OK
XyzLanguageProcessorUnitTest::testAIsInValid
 : OK
XyzLanguageProcessorUnitTest::testXXIsValid
 : assertion
XyzLanguageProcessorUnitTest::testXZIsValid
 : assertion
XyzLanguageProcessorUnitTest::testXYIsValid
 : assertion
XyzLanguageProcessorUnitTest::testZZIsInvalid
 : OK
XyzLanguageProcessorUnitTest::testZXIsInvalid
 : OK
XyzLanguageProcessorUnitTest::testZYIsInvalid
 : OK
XyzLanguageProcessorUnitTest::testYXIsInvalid
 : OK
XyzLanguageProcessorUnitTest::testYZIsInvalid
 : OK
XyzLanguageProcessorUnitTest::testYYIsInvalid
 : OK
XyzLanguageProcessorUnitTest::testXXXIsValid
 : assertion
XyzLanguageProcessorUnitTest::testXXZIsValid
 : assertion
XyzLanguageProcessorUnitTest::testXXYIsValid
 : assertion
XyzLanguageProcessorUnitTest::testXYXIsInvalid
 : OK
XyzLanguageProcessorUnitTest::testXZZYIsInvalid
 : OK
XyzLanguageProcessorUnitTest::testXYYYIsInValid
 : OK
XyzLanguageProcessorUnitTest.cpp:29:Assertion
Test name: XyzLanguageProcessorUnitTest::testXXIsValid
equality assertion failed
- Expected: 1
- Actual  : 0
- XX is valid in this language but your processor says it is not.

XyzLanguageProcessorUnitTest.cpp:29:Assertion
Test name: XyzLanguageProcessorUnitTest::testXZIsValid
equality assertion failed
- Expected: 1
- Actual  : 0
- XZ is valid in this language but your processor says it is not.

XyzLanguageProcessorUnitTest.cpp:29:Assertion
Test name: XyzLanguageProcessorUnitTest::testXYIsValid
equality assertion failed
- Expected: 1
- Actual  : 0
- XY is valid in this language but your processor says it is not.

XyzLanguageProcessorUnitTest.cpp:29:Assertion
Test name: XyzLanguageProcessorUnitTest::testXXXIsValid
equality assertion failed
- Expected: 1
- Actual  : 0
- XXX is valid in this language but your processor says it is not.

XyzLanguageProcessorUnitTest.cpp:29:Assertion
Test name: XyzLanguageProcessorUnitTest::testXXZIsValid
equality assertion failed
- Expected: 1
- Actual  : 0
- XXZ is valid in this language but your processor says it is not.

XyzLanguageProcessorUnitTest.cpp:29:Assertion
Test name: XyzLanguageProcessorUnitTest::testXXYIsValid
equality assertion failed
- Expected: 1
- Actual  : 0
- XXY is valid in this language but your processor says it is not.

Failures !!!
Run: 20   Failure total: 6   Failures: 6   Errors: 0

Correctness Grade: 14/20
Correctness Normalized Grade: 2.1/3.0
```

Note that there are a lot of false positives in the tests. This is due to the fact that the stubbed out implementation of `isValid()` returns `false` and that's the expected value of 14 of these tests.