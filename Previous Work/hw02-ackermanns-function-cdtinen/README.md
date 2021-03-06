# hw02-akermanns-function

Homework 2 has the student implementing a recursive function.

## Background

This homework assignment is based upon Programming Excerise 26 in your textbook. The exercise is repeated, in part, below:

Consider the following recursive defintion:

```
              { n + 1                           if m = 0
Acker(m, n) = { Acker(m - 1, 1)                 if n = 0
              { Acker(m - 1, Acker(m, n - 1))   otherwise
```

This function, called *Ackermann's function*, is of interest because it grows rapidly with respect to the sizes of *m* and *n*.

*Caution*: Even for modest values of *m* and *n*, Ackermann's function requires *many* recursive calls.

### Pre-homework Reading

Prior to tackling this assignment, the student should have read

* Lecture notes
  * [https://github.com/msu-csc232-sp19/lec02-cpp-classes](https://github.com/msu-csc232-sp19/lec02-cpp-classes)
  * [https://github.com/msu-csc232-sp19/lec06-the-big-five](https://github.com/msu-csc232-sp19/lec06-the-big-five)
* Chapter 1 - Data Abstraction: The Walls (pp. 1-26, Carrano/Henry)
* C++ Interlude 1: C++ Classes (pp. 31-46, Carrano/Henry)
* Chapter 2 - Recursion: The Mirrors
* Any prerequisites cited in the above chapters

## Goals

Upon successful completion of this homework assignment, the student will have gained a better understanding of how to implement recursive functions. Additionally, the student will have gained further experience in working with `git` and creating pull requests on GitHub.

## Getting Started

To get started, follow these steps:

1. Open a Cygwin terminal window. If this is the first time you're doing this, there may be some initializations that take place; be patient, they'll occur quickly.
1. (If you have not done so already) open a Windows File Explorer window and create a folder (in your home directory) to keep your work, e.g., CSC232.
1. (If you have not done so already) switch back to the Cygwin terminal window. Our first step (which will only need to be done once) is to create a symbolic link ("symlink") to the directory you created in the previous step. As mentioned (and demonstrated in a previous lecture), Cygwin's "home" directory and Windows' "home" directory are *not* the same directories on the file system. Enter the following command to create a symlink to your CSC232 directory (noting that the `$` represents the command line prompt and is *not* to be typed):

    ```bash
    $ ln -s /cygdrive/c/Users/<your login name>/CSC232 CSC232
    $ cd CSC232
    $ echo "Testing...\n" >> test.txt
    $ ls
    test.txt
    $
    ```

    If successful, you should see (from your Windows finder window) a new file created in the CSC232 directory. If not, please raise your hand to receive help from your instructor or GA. Since we don't need this file, delete (using the Windows file explorer) it (i.e., send it to the Trash). As a final step to ensure the symlink is set up correctly, issue another `ls` command in your Cygwin terminal window (you should no longer see the `test.txt` file.)

    ```bash
    $ ls
    $
    ```
1. Use the GitHub classroom assignment link found in the Microsoft Teams Homework channel to have the homework assignment created for you in your GitHub account.
1. Once the assignment has been created in your GitHub account, clone your repository:

    ```bash
    $ git clone <repo-url-copied-from-github>
    ... git output ...
    $
    ```
1. Next navigate to this cloned repo and create/checkout the `develop` branch:

    ```bash
    $ cd hw02-akermanns-function-your-git-hub-username
    $ git checkout -b develop
    $
    ```
1. (If you have not done so already) configure your name and email with `git` (you'll only have to do this once). In the steps below, we set the value and then inspect it.

    ```bash
    $ git config --global user.name "Your Name"
    $ git config --global user.name
    Your Name
    $ git config --global user.email "your-username@live.missouristate.edu"
    $ git config --global user.email
    your-username@live.missouristate.edu
    $
    ```
1. Finally, let's make sure that the remote (i.e., GitHub) is set up to track our `develop` branch:

    ```bash
    $ git push -u origin develop
    $
    ```

## Steps

The first thing you should do is familiarize yourself with the layout of the project. There are several files and directories, as shown below:

```bash
.
├── CMakeLists.txt
├── LICENSE
├── README.md
├── generator
│   └── README.md
└── src
    ├── main
    │   └── cpp
    │       ├── AckerCommand.cpp
    │       ├── AckerCommand.h
    │       ├── AckerInvoker.cpp
    │       ├── AckerInvoker.h
    │       ├── AckerReceiver.cpp
    │       ├── AckerReceiver.h
    │       ├── Command.h
    │       ├── Demo.cpp
    │       └── Main.cpp
    └── test
        └── cpp
            ├── AckerReceiverUnitTest.cpp
            ├── AckerReceiverUnitTest.h
            └── UnitTestRunner.cpp
```

Notice all the source files you will work with are located in the `src/main/cpp` folder. Unit tests are located in the `src/test/cpp` folder. DO NOT modify any of these files. Doing so will result in a failing grade (i.e., 0 out of 5 points) for this assignment.

The `generator` folder has one `README` file that instructs you on how to use `cmake` and `make` to build three targets. These commands are covered in Lab 1. The `CMakeLists.txt` file is used by `cmake` to faciliate that process. DO NOT modify that file either.

All of your work will involve the files in the `src/main/cpp` folder; specifially the `AckerReceiver.cpp` file. The `Main.cpp` and `Demo.cpp` files are merely playgrounds and do not contribute to your final grade on this assignment. NOTE: Having said that, it is required that these files compile. So if you have made changes to these files that prevent them from compiling, it _could_ affect your grade on this assignment.

Locate the `TODO` comments in the `src/main/cpp/AckerReceiver.h` and `src/main/cpp/AckerReceiver.cpp` files. These comments provide direction on what needs to be done.

### Compiling, linking and executing an executable

See the [README](generator/README.md) for details on how to use `cmake` and `make` to build your targets.

## Submission Details

When you have made your last commit and pushed all your changes to GitHub on your `develop` branch, create a new pull request that seeks to merge the changes in your `develop` branch into your `master` branch. When creating the pull request, be sure to add both `joshuaellis555` and `professordaehn`) as reviewers.

### Due Date

This homework assignment is due Friday, 08 February 2019 by 11:59:59 PM. _Any changes to your pull request made after that time force the late penalty policy_.

### Grading Rubric

All homework assignments are graded on the following general rubric:

| Points | Requirements |
|--------|--------------|
| 5      | All tests pass (or otherwise correct code); consistent, readable style|
| 4      | At most 80% of the tests pass; consistent, readable style|
| 3      | At most 50% of the tests pass; inconsistent or poor programming style|
| 2      | At most 30% of the tests pass; inconsistent or poor programming style|
| 1      | None of the tests pass; inconsistent or poor programming style (but at least a pull request was created)|
| 0      | Student did not submit pull request|

### Late Penalty

In the first 24 hour period following the due date, this lab will be penalized 0.5 points meaning the grading _starts_ at 4.5 (out of 5 total possible) points.

In the second 24 hour period following the due date, this lab will be penalized 1.0 points meaning the grading _starts_ at 4 (out of 5 total possible) points.
