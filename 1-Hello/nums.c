// chp1/nums.c
#include <stdio.h>
#include <limits.h> //최대 값/최소 값 볼 때

int maun(void) {
	//char
	char ch = 'A';
	printf("char: \n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX);
	printf("Min: %d\n", CHAR_MIN);

	//signed short int
	signed short int sshort = 1234;
	printf("signed short int: \n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX);
	printf("Min: %d\n", SHRT_MIN);

	//unsigned short int
	unsigned short int usshort = 1234U;
	printf("unsigned short int: \n");
	printf("Value: %u\n", usshort);
	printf("Max: %d\n", USHRT_MAX);
	
	//signed int
	signed int sint = 12345;
	printf("signed  int: \n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);
	printf("Min: %d\n", INT_MIN);

	//unsigned  int
	unsigned int uint = 12345U;
	printf("unsigned  int: \n");
	printf("Value: %u\n", uint);
	printf("Max: %d\n", UINT_MAX);

	//signed long int
	signed long int slong = 123456789L;
	printf("\nsigned long int: \n");
	printf("Value: %ld\n", slong);
	printf("Max: %ld\n", LONG_MAX);
	printf("Min: %ld\n", LONG_MIN);

	//unsigned long int
	unsigned long int uint = 123456789UL;
	printf("unsigned long int: \n");
	printf("Value: %lu\n", ulong);
	printf("Max: %ld\n", ULONG_MAX);

	return 0;
}