
# Problem Statement
A shop sells NN kinds of fruits, Fruit 1, \ldots, N1,…,N, at prices of p_1, \ldots, p_Np 
1
​	
 ,…,p 
N
​	
  yen per item, respectively. (Yen is the currency of Japan.)

Here, we will choose KK kinds of fruits and buy one of each chosen kind. Find the minimum possible total price of those fruits.



## Constraints
---
1≤K≤N≤1000
1 \leq p_i \leq 10001≤p 
i
​	
 ≤1000
All values in input are integers.

## Input
----
Input is given from Standard Input in the following format:

NN KK
p_1p 
1
​	
  p_2p 
2
​	
  \ldots… p_Np 
N
​	
 

## Output
---
Print an integer representing the minimum possible total price of fruits.

### Sample Input 1
----
> **5 3\
50 100 80 120 80**

### Sample Output  1
----
> **210\
This shop sells Fruit 11, 22, 33, 44, and 55 for 5050 yen, 100100 yen, 8080 yen, 120120 yen, and 8080 yen, respectively.

The minimum total price for three kinds of fruits is 50 + 80 + 80 = 21050+80+80=210 yen when choosing Fruit 11, 33, and 55.**



 ### Sample Input 2
----
> **1 1\
1000**

### Sample Output  2
----
> **1000**


### problem statement
---
https://atcoder.jp/contests/abc171/tasks/abc171_b?lang=en