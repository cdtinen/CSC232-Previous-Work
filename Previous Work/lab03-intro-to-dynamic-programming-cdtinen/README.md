# Lab 03 - Two Dynamic Programming Solutions for Finding Fibonacci Numbers
       
## Background

As we have seen in lecture, dynamic programming offers us a solution to finding the nth Fibonacci number in _O_(_n_). We have also seen that there are two approaches to dynamic programming: (1) top-down and (2) bottom-up. In this lab we'll explore both approaches to finding the nth Fibonacci number.

## Top-down Approach
The top-down approach is a technique of saving values that have already been calculated, a technique that is referred to as _memoization_. With this technique we first break the problem up into sub-problems and then calculate and store values. To facilitate this approach we can use a _map_ structure. A map is also known as an "associative array" in which "keys" are associated with "values." The arrays you have worked with thus far _could_ be thought of as an associative map wherein the "key" is an integer (i.e., the index into the array), and of course, the "value" is the contents of the array at that index (key). Fortunately for us, the standard template library includes such a structure. The program  `Demo.cpp` in this repo demonstrates the use of a map, and is shown below:

```
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <map>

int main() {
    std::map<std::string, char> grade_list;
    // Assign "John" a grade of 'C'
    grade_list["John"] = 'C';
    std::cout << "John's grade = " << grade_list["John"] << std::endl;

    // Raise his grade
    grade_list["John"] = 'B';
    std::cout << "After raising his grade, " << std::endl;

    // Find an entry in the map. The member function find(key) returns an
    // iterator; end() is an iterator that points to the "end" of the map.
    // If we haven't "reached" the end of the map, the key is in the map.
    if (grade_list.find("John") != grade_list.end()) {
        std::cout << "John's grade = " << grade_list["John"] << std::endl;
    }

    // On the other hand, if we have reached the "end" of the map using find(key)
    // then the key isn't in the map.
    if (grade_list.find("Jim") == grade_list.end()) {
        std::cout << "Jim wasn't found in the map" << std::endl;
    } else {
        std::cout << "Jim's grade = " << grade_list["Jim"] << std::endl;
    }

    // Let's associate another key/value pair in the map:
    grade_list["Sue"] = 'A';

    // Iterators "point" to elements in the map. Each element in the map has
    // a key/value pair named "first" (the key) and "second" (the value). Two
    // common iterators are begin() and end(). NOTE: end() doesn't point to
    // anything
    // "John" <- 'A'           <- grade_list.begin() points here
    // "Sue"  <- 'A'
    //                         <- grade_list.end() points here, i.e. just after
    //                            the last item in the map. Trying to access items
    //                            pointed to by end() will result in a Segmentation
    //                            fault and will dump the core.
    std::cout << "grade_list.begin()->first = " << grade_list.begin()->first
              << std::endl;
    std::cout << "grade_list.begin()->second = " << grade_list.begin()->second
              << std::endl;

    // We can use these pointers to iterator through the map
    std::cout << "Mappings in grade_list:" << std::endl;
    for (std::map<std::string, char>::iterator it = grade_list.begin(); it != grade_list.end(); ++it) {
        std::cout << std::setw(4) << it->first << " <-- " << it->second << std::endl;
    }

    // A map that maps integers to integers
    std::map<int, int> m;
    m[0] = 1;
    m[1] = 1;
    for (std::map<int, int>::iterator it = m.begin(); it != m.end(); ++it) {
        std::cout << it->first << " <-- " << it->second << std::endl;
    }

    return EXIT_SUCCESS;
}

```

Compiling and running (in a Cygwin terminal) this program would look like (where '$' is the command-line prompt and not typed):

```bash
$ g++ map_demo.cpp

$ ./a.exe
John's grade = C
After raising his grade,
John's grade = B
Jim wasn't found in the map
grade_list.begin()->first = John
grade_list.begin()->second = B
Mappings in grade_list:
John <-- B
 Sue <-- A
0 <-- 1
1 <-- 1

```

For more details and a quick tutorial on using the map found in the STL, see [STL Maps -- Associative Arrays](http://www.cprogramming.com/tutorial/stl/stlmap.html).

With this understanding of the `map` object, let us return to the top-down approach to finding the nth Fibonacci number using a map.

Suppose we have a simple `map` object, `m`, which maps each Fibonacci number calculated that has already been calculated to its result, and we modify our function to use it and update it. The resulting function requires only O(n) time instead of exponential time (but requires O(n) space):

```
// This, of course, is just pseudo-code
map<int, int> m
m[0] = 1
m[1] = 1
function fib(n)
   if key n is not in map m
      m[n] = fib(n - 1) + fib(n - 2)
   return m[n]
```

## Bottom-up Approach
In the bottom-up approach, we calculate the smaller values of the Fibonacci sequence first, then build larger values from them. This method also uses _O_(_n_) time since it contains a loop that repeats _n_ − 1 times, but it only takes constant (_O_(1)) space, in contrast to the top-down approach which requires _O_(_n_) space to store the map.

```
// again, using pseudo-code
function fib(n)
    if n = 0
        return 1
    else
        var previousFib = 0, currentFib = 1
        repeat n − 1 times // loop is skipped if n = 1
            var newFib = previousFib + currentFib
            previousFib = currentFib
            currentFib  = newFib
    return currentFib
```

## Tasks
As usual, accept the assignment using the URL found in the Blackboard assignment and clone your private repo locally. Next,  create a develop branch within which to do your work. After creating your develop branch. Assuming you want to compile from the command line,  navigate into the project directory. Before getting started, make sure you can compile and run your program (otherwise, carry this action from within your IDE of choice):

```bash
$ cd generator
$ cmake -G "Unix Makefiles" ..

... lots of output

$ make

... more output

$ ../out/lab03.exe
This program computes the nth Fibonacci number.
To end this program, enter a negative value for n.
n = -1

Program has ended successfully. Good bye...

$ ../out/lab03.exe
This program computes the nth Fibonacci number.
To end this program, enter a negative value for n.
n = 9
Top-down approach: fib(9) = 0
Bottom-up approach: fib(9) = 0

n = 2
Top-down approach: fib(2) = 0
Bottom-up approach: fib(2) = 0

n = -1

Program has ended successfully. Good bye...

```

Clearly, the values are not being calculated correctly. This is because the functions are merely stubbed out.

Begin modifying `Main.cpp` by adding your name to the `@author` tag in the header comments. After doing this, save your changes and commit the changes using the commit message "CSC232-LAB05 - Modified author tag." After pushing your commit, continue by implementing the top-down approach in `TopDownFibCalculator.cpp`. When you have completed that task, commit and push your work using the commit message suggested in the `TO-DO` comment in the code. After completing the top-down approach, move onto the bottom-up approach in `BottomUpFibCalculator.cpp`. Again, when finished, commit and push your work using the commit message as suggested in the source code.

Once you have completed the work, create a pull request inviting me as the sole reviewer.

## Due Date

This lab is due by 15:00 Tuesday 12 February 2019.