
# Problem Statement
mong Johnny's numerous hobbies, there are two seemingly harmless ones: applying bitwise operations and sneaking into his dad's office. As it is usually the case with small children, Johnny is unaware that combining these two activities can get him in a lot of trouble.

There is a set SS containing very important numbers on his dad's desk. The minute Johnny heard about it, he decided that it's a good idea to choose a positive integer kk and replace each element ss of the set SS with s \oplus ks⊕k (\oplus⊕ denotes the exclusive or operation).

Help him choose such kk that Johnny's dad will not see any difference after his son is done playing (i.e. Johnny will get the same set as before playing). It is possible that no such number exists. It is also possible that there are many of them. In such a case, output the smallest one. Note that the order of elements in a set doesn't matter, i.e. set \{1, 2, 3\}{1,2,3} equals to set \{2, 1, 3\}{2,1,3}.

Formally, find the smallest positive integer kk such that \{s \oplus k | s \in S\} = S{s⊕k∣s∈S}=S or report that there is no such number.

For example, if S = \{1, 3, 4\}S={1,3,4} and k = 2k=2, new set will be equal to \{3, 1, 6\}{3,1,6}. If S = \{0, 1, 2, 3\}S={0,1,2,3} and k = 1k=1, after playing set will stay the same.

## Constraints
---


## Input
----

In the first line of input, there is a single integer tt (1 \leq t \leq 10241≤t≤1024), the number of test cases. In the next lines, tt test cases follow. Each of them consists of two lines.

In the first line there is a single integer nn (1 \leq n \leq 10241≤n≤1024) denoting the number of elements in set SS. Second line consists of nn distinct integers s_is
i
​
(0 \leq s_i < 10240≤s
i
​
<1024), elements of SS.

It is guaranteed that the sum of nn over all test cases will not exceed 10241024.

## Output
---
Print tt lines; ii-th line should contain the answer to the ii-th test case, the minimal positive integer kk satisfying the conditions or -1−1 if no such kk exists.

### Sample Input 1
----
> **6
4
1 0 2 3
6
10 7 14 8 3 12
2
0 2
3
1 2 3
6
1 4 6 10 11 12
2
0 1023**

### Sample Output  1
----
> **1
4
2
-1
-1
1023**


### problem statement
---
