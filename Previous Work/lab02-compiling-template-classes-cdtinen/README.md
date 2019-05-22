# Lab02 - Strategies for Compiling Template Classes

In this lab, the student is exposed to three techniques for compiling template classes.

## Background

Working with template classes can be difficult when it comes time to simply compiling them. Today we'll explore three different ways of coding template classes.
### Pre-lab Reading

Prior to tackling this lab, the student should have read

* Lecture notes
  * [https://github.com/msu-csc232-sp19/lec02-cpp-classes](https://github.com/msu-csc232-sp19/lec02-cpp-classes)
  * [https://github.com/msu-csc232-sp19/lec06-the-big-five](https://github.com/msu-csc232-sp19/lec06-the-big-five)
* Chapter 1 - Data Abstraction: The Walls (pp. 1-26, Carrano/Henry)
* C++ Interlude 1: C++ Classes (pp. 31-46, Carrano/Henry)
* Any prerequisites cited in the above chapters

## Goals

Upon successful completion of this lab assignment, the student will have gained a better understanding of working with template classes.

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
    $ cd hw01-the-big-five-your-git-hub-username
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

Today's lab is quite straightforward. 

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
    │       ├── Demo.cpp
    │       ├── IntCell.cpp
    │       ├── IntCell.h
    │       └── Main.cpp
    └── test
        └── cpp
            ├── IntCellUnitTest.cpp
            ├── IntCellUnitTest.h
            └── UnitTestRunner.cpp
```

Notice all the source files are located in the `src/main/cpp` folder. Unit tests are located in the `src/test/cpp` folder. DO NOT modify any of these files. Doing so will result in a failing grade (i.e., 0 out of 3 points) for this assignment.

The `generator` folder has one `README` file that instructs you on how to use `cmake` and `make` to build three targets. The `CMakeLists.txt` file is used by `cmake` to facilitate that process. DO NOT modify that file either.

While you're studying the source files, be sure to add your name to the header comments so that you'll have a delta with which to create a pull request. Once you have made those simple edits, commit your changes and push them to GitHub. 

After having studied the source files (look at the unit tests too!), simply execute the steps shown in the [README](generator/README.md) file located in the `generator` subdirectory of this project. As mentioned in that `README`, these steps will be carried out from within the `generator` subdirectory.

## Submission Details

When you have made your last commit and pushed all your changes to GitHub on your `develop` branch, create a new pull request that seeks to merge the changes in your `develop` branch into your `master` branch. When creating the pull request, be sure to add both `joshuaellis555` and `professordaehn` as reviewers.

### Due Date

This lab assignment is due Tuesday, 29 January 2019 by 5:00 PM. _Any changes to your pull request made after that time force the late penalty policy_.

### Grading Rubric

All lab assignments are graded on the following general rubric:

1. Pull Request (10%)
1. Program Correctness (75%)
1. Readability (15%)

### Late Penalty

In the first 24 hour period following the due date, this lab will be penalized 0.3 points meaning the grading _starts_ at 2.7 (out of 3 total possible) points.

In the second 24 hour period following the due date, this lab will be penalized 0.6 points meaning the grading _starts_ at 2.4 (out of 3 total possible) points.