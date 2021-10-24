
# Problem Statement
Snuke has decided to construct a string that starts with A and ends with Z, by taking out a substring of a string 
s
 (that is, a consecutive part of 
s
).

Find the greatest length of the string Snuke can construct. Here, the test set guarantees that there always exists a substring of 
s
 that starts with A and ends with Z.

## Constraints
---
 1
≦
|
s
|
≦
200,000\
s
 consists of uppercase English letters.\
There exists a substring of 
s
 that starts with A and ends with Z.

## Input
----
The input is given from Standard Input in the following format:

s


## Output
---
Print the answer.

### Sample Input 1
----
> **QWERTYASDFZXCV**

### Sample Output  1
----
> **5**

### Notes
----
By taking out the seventh through eleventh characters, it is possible to construct ASDFZ, which starts with A and ends with Z.


 ### Sample Input 2
----
> **ZABCZ**

### Sample Output  2
----
> **4**

 ### Sample Input 3
----
> **HASFJGHOGAKZZFEGA**

### Sample Output  3
----
> **12**

### problem statement
---
https://vjudge.net/problem/AtCoder-abc053_b