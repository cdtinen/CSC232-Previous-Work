cmake_minimum_required(VERSION 3.0)
project(lab09)
if (MSVC)
    # Force to always compile with W4
    if (CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
        string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
    else ()
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
    endif ()
elseif (CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX OR (CMAKE_C_COMPILER_ID MATCHES "Clang") OR (CMAKE_CXX_COMPILER_ID MATCHES "Clang"))

    # Update if necessary
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic -g")
endif ()

find_library(CPPUNIT_LIBRARY_DEBUG
        NAMES cppunit
        cppunit_dll
        cppunitd
        cppunitd_dll
        PATHS /usr/lib
        /usr/lib64
        /usr/local/lib
        /usr/local/lib64
        /mingw64/lib
        "C:/Program Files (x86)/CppUnit/Lib/Debug-x64"
        PATH_SUFFIXES debug)

find_library(CPPUNIT_LIBRARY_RELEASE
        NAMES cppunit
        cppunit_dll
        cppunitd
        cppunitd_dll
        PATHS /usr/lib
        /usr/lib64
        /usr/local
        /usr/local/lib64
        /mingw64/lib
        "C:/Program Files (x86)/CppUnit/Lib/Release-x64"
        PATH_SUFFIXES release)

if (CPPUNIT_LIBRARY_DEBUG AND NOT CPPUNIT_LIBRARY_RELEASE)
    set(CPPUNIT_LIBRARY ${CPPUNIT_DEBUG})
endif (CPPUNIT_LIBRARY_DEBUG AND NOT CPPUNIT_LIBRARY_RELEASE)

set(CPPUNIT_LIBRARY
        debug ${CPPUNIT_LIBRARY_DEBUG}
        optimized ${CPPUNIT_LIBRARY_RELEASE})

set(CMAKE_CXX_STANDARD 14)

set(SRC_MAIN_FILES
        src/main/cpp/Main.cpp
        src/main/cpp/ExpandedTemplates.cpp
        src/main/cpp/HealthTracker.cpp src/main/cpp/HealthTracker.h)
set(SRC_DEMO_FILES
        src/main/cpp/Demo.cpp
        src/main/cpp/ExpandedTemplates.cpp
        src/main/cpp/HealthTracker.cpp src/main/cpp/HealthTracker.h)
set(SRC_TEST_FILES
        src/test/cpp/UnitTestRunner.cpp
        src/main/cpp/ExpandedTemplates.cpp
        src/main/cpp/HealthTracker.cpp src/main/cpp/HealthTracker.h)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/out)

add_executable(lab09 ${SRC_MAIN_FILES})
add_executable(lab09Demo ${SRC_DEMO_FILES})
add_executable(lab09Test ${SRC_TEST_FILES})

if (APPLE)
    include_directories(lab09Test PUBLIC /usr/local/include)
endif (APPLE)

if (MSVC)
    include_directories(lab09Test PUBLIC "C:/Program Files (x86)/CppUnit/Include")
endif (MSVC)

target_include_directories(lab09Test PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/main/cpp)
target_link_libraries(lab09Test PUBLIC ${CPPUNIT_LIBRARY})

add_custom_command(TARGET lab09 PRE_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_SOURCE_DIR}/data/input.dat ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
