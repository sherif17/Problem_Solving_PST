
# Problem Statement
In AtCoder Kingdom, Gregorian calendar is used, and dates are written in the "year-month-day" order, or the "month-day" order without the year.
For example, May 
3
, 
2018
 is written as 
2018
-5-3,or 5-3 without the year.

In this country, a date is called Takahashi when the month and the day are equal as numbers. For example, 
5-5 is Takahashi.
How many days from 
2018-1-1 through 2018-a-b are Takahashi?

## Constraints
---
a is an integer between 1 and 12
(inclusive).
b is an integer between 1 and 31
 (inclusive).
2018-a-b is a valid date in Gregorian calendar.

## Input
----
Input is given from Standard Input in the following format:

a
 
b


## Output
---
Print the number of days from 
2018-1-1 through 2018-a-b that are Takahashi.

### Sample Input 1
----
> **5 5**

### Sample Output  1
----
> **5**

There are five days that are Takahashi: 
1-1, 2-2,3-3,4-4 and 5-5.

 ### Sample Input 2
----
> **2 1**

### Sample Output  2
----
> **1**
There is only one day that is Takahashi: 
1-1.
 ### Sample Input 3
----
> **11 30**

### Sample Output  3
----
> **11**

s
