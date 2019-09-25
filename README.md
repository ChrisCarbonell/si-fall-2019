
[![Build Status](https://travis-ci.com/omolazabal/si-fall-2019.svg?branch=master)](https://travis-ci.com/omolazabal/si-fall-2019)

## Overview
Every Wednesday, a new set of programming exercises will be introduced via GitHub. You can find the exercises at the repository [https://github.com/omolazabal/si-fall-2019](https://github.com/omolazabal/si-fall-2019). Continue reading to learn how to use the repository.

The structures of the repository is as follows:
```
.
├─ 1-dynamic-memory/    # Dynamic memory topic
│  ├─ codebase
│  └─ ...
│
├─ 2-fixed-vector/      # Vectors topic
│  ├─ codebase
│  └─ ...
│
├─ ...                  # Other topics
│  └─ ...
│
├─ 7-recursion/a        # Recursion topics
│  ├─ codebase
│  └─ ...
```

Where each directory labeled with a number represents a topic and their sub-directories represents their codebase. 

!!! note
    Topics will be added as the semester progresses as described on the [homepage](https://moredatastructures.com/#csuf-supplemental-instruction).

Each topic's codebase contains functions with missing code segments. Participants will be tasked with filling in the missing information. Details on the missing information can be found under the topic's respective tab on [https://moredatastructures.com/](https://moredatastructures.com/)

At the end of the week, the topic's respective codebase will be upadated with solutions, in case participants were unable to finish during the SI session.

## Getting started
1. Download and set up [Tuffix](https://github.com/kevinwortman/tuffix/blob/master/install.md).
2. Create a [GitHub](https://github.com/) account
3. **Fork the [SI GitHub repository](https://github.com/omolazabal/si-fall-2019/fork)**. You can accomplish this by clicking the [Fork](https://github.com/omolazabal/si-fall-2019/fork) button on the top right corner of this page.
4. **Navigating to your preferred workspace in your terminal** to work on the repository locally. Use [this guide](https://www.git-tower.com/learn/git/ebook/en/command-line/appendix/command-line-101) if necessary.
5. **Clone your forked repository** by running the following command. Replace <YOUR_GITHUB_USERNAME> with your GitHub username.

```
git clone https://github.com/<YOUR_GITHUB_USERNAME>/si-fall-2019.git
```

## Workflow

### Initial Set Up
Before you begin working on programming exercises, you'll have to configure your repository so that you can update it with new problems. This can be done by running the following command in your terminal while in your repository:

```
./run.py --config
```

!!! warning
    This only has to be done once. If you were to run this command again, all of your progress from all topics will be erased


### Updating Your Set of Exercises
Every week of the semester this repository will be updated with new exercises. The files of each exercise will available in their respective folder. The task is to fill out the empty functions.

To update your repository with the latest problems, run the command:

```
./run.py --update
```

### Editing Code Segments

Code segments you are intended to modify are labeled via comments:

``` C++
#include "course.h"
#include "student.h"
#include <stdexcept>

using namespace std;

Course::Course() {
    // Initialize member variables.
    // By default, course will hold a max of 25 students.
    // ========= ONLY MODIFY BETWEEN THE LINES  ===========



    // ====================================================
}
```

Please only modify the code between the lines. If changes are made elsewhere, there will be issues when attempting to update your repository with new problems.

### Testing Your Changes
To execute your programs, run the following command at the root of your repository:

```
./run.py --test <folder_name>
```

Where the `--test` flag signifies you want to test the corresponding code in the folder named <folder_name>. Please replace <folder_name> with the name of whichever folder you would like to test.

For example, the following command will un the unit tests associated with the [1-dynamic-memory](https://github.com/omolazabal/si-fall-2019/tree/master/1-dynamic-memory) problem set:

```
./run.py --test 1-dynamic-memory
```

If you wish to run all tests, use the command:

```
./run.py --test all
```


## Summary of commands

| Command  | Action |
| ------------- | ------------- |
| `./run.py --config` | Initial git configuration  |
| `./run.py --update`  | Update workspace with newly available problems  |
| `./run.py --test [folder name]`  | Run unit tests to see how your programs perform  |


