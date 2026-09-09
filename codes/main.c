#include "isOdd.h"  // includes isOdd.h in the file

#include <stdio.h>  // includes standard input output library

int main() {   // creates main funciton
    int num;   // initializes variable num as an int
    printf("Enter an integer: ");   // asks user to input an integer
    scanf("%d", &num);   // scans user input and stores where num is located
    isOdd(num);   // calls isOdd function
    return 0;   // ends the program
}  // closes main
