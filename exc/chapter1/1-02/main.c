#include <stdio.h>

int main()
{
	printf("hello, world\c");
	return 0;
}

/* result: \c is an unknown escape sequence and compiler will warn of this */
