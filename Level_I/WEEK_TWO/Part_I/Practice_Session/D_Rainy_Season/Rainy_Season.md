
# Problem Statement
We have weather records at AtCoder Town for some consecutive three days. A string of length 
3
, 
S
, represents the records - if the 
i
-th character is S, it means it was sunny on the 
i
-th day; if that character is R, it means it was rainy on that day.

Find the maximum number of consecutive rainy days in this period.

## Constraints
---
* |
S
|
=
3
* Each character of 
S
 is S or R.

## Input
----
Input is given from Standard Input in the following format:

S


## Output
---
Print the maximum number of consecutive rainy days in the period.

### Sample Input 1
----
> **RRS**

### Sample Output  1
----
> **2**
We had rain on the 
1
-st and 
2
-nd days in the period. Here, the maximum number of consecutive rainy days is 
2
, so we should print 
2
.


 ### Sample Input 2
----
> **SSS**

### Sample Output  2
----
> **0**
It was sunny throughout the period. We had no rainy days, so we should print 
0
.
 ### Sample Input 3
----
> **RSR**

### Sample Output  3
----
> **1**
We had rain on the 
1
-st and 
3
-rd days - two "streaks" of one rainy day, so we should print 
1

### problem statement
---
https://atcoder.jp/contests/abc175/tasks/abc175_a?lang=en