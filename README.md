# N-Queens
This project implements a Cilk-parallelizable solution to the famous N-Queens problem on a weighted chess board. 

## Problem Definition

We have an nxn chess board and n queens. Each position on this board has a weight representing the cost of placing a queen in that position. We want to arrange n queens on this board such that they wouldn’t attack themselves; i.e. no 2 queens can 
be on a same row, same column, or same diagonal. Each position of the queens has a cost, which is the weight of that position. These costs are added up to the total cost of the solution. The problem is to find a placement that has the minimum total cost. The used algorithm uses a backtracking technique to prune the search space.  

## What's in this Repo

In this repo you will find the following files:

**1. nq08.cilk:** The code file.
**2. weights.h:** The header file containing the preset weights assigned to each position of the chess board. There are different weights for board sizes of: 6, 8, 12, 14, 16, 20 and 28.
**3. screenshot.png:** Screenshot of a sample run of the program.
**4. solutions.txt:** This file contains solution boards obtained from running the program with the various board sizes.
**5. results.htm:** This is an in-depth analysis of the program performance when run with different board sizes and run on a different number of microprocessors in parallel.

## Installing Cilk

You need a Linux platform to install CIlk. Beow are the commands I used to install it on Ubuntu 12.04:
` ./configure CFLAGS="-D_XOPEN_SOURCE=600 -D_POSIX_C_SOURCE=200809L"
 make
 make install
 sudo make install `
 
 If the above does not work with you, you may refer to [this link](http://groups.csail.mit.edu/sct/wiki/index.php?title=Cilk_Plus_Installation_Guide) for more information.
 
## Running the N-Queens Program

1. compile the file with the following command:
`cilkc -DHAVE_CONFIG_H -D_XOPEN_SOURCE=600 -D_POSIX_C_SOURCE=200809L nq08.cilk -o nq`

2. The resulting executable, _nq_, is then invoked with the desired size of board. The size of the board is also the number of queens to be positioned.
