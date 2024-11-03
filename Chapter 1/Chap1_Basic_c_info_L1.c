/* Basic C programming information*/

#include<stdio.h>

int main(){

	/* Sizes of different data types
	Size of integer == 4 bytes
	Size of float == 4 bytes
	Size of char == 1 byte
	Size of double == 8 bytes
	*/

	/* N bit data range
	Range of N bit data = 0  to 2^n-1
	Range of N signed bit data =  -(2^n-1) to +(2^n-1 -1)
	Range of 16 bit signed == -32768 to 32767
	Range of 16 bit unsigned ==  0 to 65535
	Raange of 32 bit signed == -2147483648 to +2147483647
	Range of 32 bit unsigned == 0 to 4294967295
	*/

	/* Modifiers 
	sizeof(short) <= sizeof(int)<= sizeof(long)
	*/

	/* Character basic syntax */

	// Character can be anything like alphabets, Numbers, special characters
	// - Range signed -128 to 127
	// - Range unsigned 0 to 255

	char char_syntax = 't';
	printf("Basic syntax value of alphabet character: %c\n", char_syntax);

	char char_syntax1 = 65;
	printf("Basic syntax value of numberic character: %c\n", char_syntax1);

	/* String basic syntax */

	char string_syntax[] = "Lets make it happen";  // Here the number of characters in the string element is not specified
	printf("Basic syntax value of string: %s\n", string_syntax);

	/* Format specifier */
	// %p-> To print the address of any variable
	// %d-> To print the value of integer
	// %c-> To print the value of character
	// %s-> To print the value of strings

	/* Size of integer == 4 bytes */

	return 0;
}
