Some C++ data types, their format specifiers, and their most common bit widths are as follows:

* Int ("%d"): 32 Bit integer.
* Long ("%ld"): 64 bit integer.
* Char ("%c"): Character type.
* Float ("%f"): 32 bit real value.
* Double ("%lf"): 64 bit real value.

# Reading.

To read a data type, use the following syntax:

>scanf("`format_specifier`", &val)

>cin>>"format_specifier">>val

For example, to read a character followed by a double:

* char ch;
* double d;

> scanf("%c %lf", &ch, &d);

For the moment, we can ignore the spacing between format specifiers.

# Printing

To print a data type, use the following syntax:

> printf("`format_specifier`", val)

>cout <<val ;

For example, to print a character followed by a double:

* char ch = 'd';
* double d = 234.432;

> printf("%c %lf", ch, d);

>cout<<ch , d;


**Note: You can also use cin and cout instead of scanf and printf; however, if you are taking a million numbers as input and printing a million lines, it is faster to use scanf and printf.**

# Sample Input

> 3 12345678912345 a 334.23 14049.30493

# Sample Output

>3

>12345678912345

>a

> 334.230

>14049.304930000