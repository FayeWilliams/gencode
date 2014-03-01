// Faye Williams
// 13 Dec 2011
// Union.c
// An example of a union

#include <stdio.h>

int main()
{
	// Declare union
	// A union only contains enough space for the largest variable
    union ascii 
    {
        long int number;
        char symbol;
    } a;

    // Incoming data - could come from a variety of sources:
    a.symbol = 'x';
    a.number = 120; // 120 is 'x' in ascii
    
    // Output last type stored (int)
    printf("Variable a is set to %ld, size of union is: %lu\n", a.number, sizeof(a));

    return 0;
}
