
# Problem Statement
CQXYM wants to create a connected undirected graph with nn nodes and mm edges, and the diameter of the graph must be strictly less than k-1k−1. Also, CQXYM doesn't want a graph that contains self-loops or multiple edges (i.e. each edge connects two different vertices and between each pair of vertices there is at most one edge).

The diameter of a graph is the maximum distance between any two nodes.

The distance between two nodes is the minimum number of the edges on the path which endpoints are the two nodes.

CQXYM wonders whether it is possible to create such a graph.

## Constraints
---


## Input
----
The input consists of multiple test cases.

The first line contains an integer t (1 \leq t \leq 10^5)t(1≤t≤10
5
) — the number of test cases. The description of the test cases follows.

Only one line of each test case contains three integers n(1 \leq n \leq 10^9)n(1≤n≤10
9
), mm, kk (0 \leq m,k \leq 10^9)(0≤m,k≤10
9
).

## Output
---
For each test case, print YES if it is possible to create the graph, or print NO if it is impossible. You can print each letter in any case (upper or lower).



### Sample Input 1
----
> **5
1 0 3
4 5 3
4 6 3
5 4 1
2 1 1
**

### Sample Output  1
----
> **YES
NO
YES
NO
NO
**
### Notes
----
> **In the first test case, the graph's diameter equal to 0.

In the second test case, the graph's diameter can only be 2.

In the third test case, the graph's diameter can only be 1.**

### problem statement
---
https://codeforces.com/problemset/problem/1581/B