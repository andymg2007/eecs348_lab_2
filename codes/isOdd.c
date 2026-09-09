#include "isOdd.h"   // includes isOdd.h in isOdd.cs

#include <stdio.h>  // includes standard input / output

int isOdd(int num)  // initializes the function isOdd to return an int 
{
	if (num % 2 == 1){   // returns True if num % 2 == 1 (if num is odd)
		 printf("%d is odd.\n", num);  // prints num if odd
	}  // ends if statement
	return 0;  // ends program
}  // closes bracket for isOdd function
