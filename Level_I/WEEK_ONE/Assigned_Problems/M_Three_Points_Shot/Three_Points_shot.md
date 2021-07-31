# Problem Statement
A basketball game is being played, and the score is now 
X- Y
. Here, it is guaranteed that 
X
≠
Y
.
Can the team which is behind turn the tables with a successful three-point goal?
In other words, if the team which is behind earns three points, will its score become strictly greater than that of the other team?

## Constraints
-----
* 0
≤
X
≤
100
* 0
≤
Y
≤
100
* X
≠
Y
* X
 and 
Y
 are integers.
 


## Input
------
Input is given from Standard Input in the following format:

X
 
Y

## Output
------
If the team which is behind can turn the tables with a successful three-point goal, print Yes; otherwise, print No. 


### Sample Input 1
----
> **3 5**

### Sample Output  1
----
> **Yes**

The team with 
3
 points is behind.
After a successful 
3
-point goal, it will have 
6
 points, which is greater than that of the other team - 
5
.
Thus, we should print Yes.
.
### Sample Input 2
----
> **16 2**

### Sample Output  2
----
> **No**
> 
The gap is too much. The team which is behind cannot overtake the other by getting 
3
 points.

### Sample Input 3
----
> **12 15**

### Sample Output  3
----
> **No**

A 
3
-point goal will tie the score but not turn the tables.