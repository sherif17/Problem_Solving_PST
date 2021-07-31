# Problem Statement
You are given a person's systolic blood pressure A and diastolic blood pressure B.
Find the mean arterial pressure, 
C
, which we define as follows:

> C=(A−B)/3+B.

# Constraints
* 50
≤
B
≤
A
≤
300
* All values in input are integers.

# Input 
Input is given from Standard Input in the following format:

A B

# Output
Print the value 
C
.
Your output is considered correct when its absolute or relative error from our answer is at most 
10^5.

# Sample Input 1
130 100
# Sample Output 1
**110**
>We have C= (130−100)/3 + 100 = 10+100 =110.

# Sample Input 2
300 50

# Sample Output 2
**133.3333333**
>Note that although all the values in input are integers, the value to output may not be an integer.


# Sample Input 3
123 123

# Sample Output 3
**123**


