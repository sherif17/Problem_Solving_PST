
# Problem Statement
Ada the Ladybug has many things to do. She puts them into her queue. Anyway she is very indecisive, so sometime she uses the top, sometime the back and sometime she decides to reverses it.


## Input
----
The first line consists of 1 ≤ Q ≤ 106, number of queries. Each of them contains one of following commands

back - Print number from back and then erase it

front - Print number from front and then erase it

reverse - Reverses all elements in queue

push_back N - Add element N to back

toFront N - Put element N to front

All numbers will be 0 ≤ N ≤ 100

## Output
---
t
For each back/front query print appropriate number.

If you would get this type of query and the queue would be empty, print "No job for Ada?" instead.

### Sample Input 1
----
> **15
toFront 93
front
back
reverse
back
reverse
toFront 80
push_back 53
push_back 50
front
front
reverse
push_back 66
reverse
fron**

### Sample Output  1
----
> **93
No job for Ada?
No job for Ada?
80
53
66**

### problem statement
---
https://www.spoj.com/problems/ADAQUEUE/en/