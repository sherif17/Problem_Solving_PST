
# Problem Statement

Two students of AtCoder Kindergarten are fighting over candy packs.

There are three candy packs, each of which contains 
a
, 
b
, and 
c
 candies, respectively.

Teacher Evi is trying to distribute the packs between the two students so that each student gets the same number of candies. Determine whether it is possible.

Note that Evi cannot take candies out of the packs, and the whole contents of each pack must be given to one of the students.

## Constraints
---
* 1
≦
a
,
b
,
c
≦
100

## Input
----
The input is given from Standard Input in the following format:

a
 
b
 
c


## Output
---
If it is possible to distribute the packs so that each student gets the same number of candies, print Yes. Otherwise, print No.

### Sample Input 1
----
> **10 30 20**

### Sample Output  1
----
> **Yes**
Give the pack with 
30
 candies to one student, and give the two packs with 
10
 and 
20
 candies to the other. Then, each gets 
30
 candies.


 ### Sample Input 2
----
> **30 30 100**

### Sample Output  2
----
> **No**
In this case, the student who gets the pack with 
100
 candies always has more candies than the other.

Note that every pack must be given to one of them.

 ### Sample Input 3
----
> **56 25 31**

### Sample Output  3
----
> **Yes**

