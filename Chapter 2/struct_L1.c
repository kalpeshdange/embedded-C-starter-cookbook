/*
Description: This source code teaches struct data type declaration and usage.
Author: Kalpesh Dange
Date: 31-10-2024
*/

#include<stdio.h>

struct // Declaring a struct 
{
	int member1;
	float member2;
	char mem3;
}start_t;  // Declaring a struct with instance 'start_t'

int main()
{
	// Finding the size of the struct declared
	int struct_size = sizeof(start_t);  // The size must be 12 bytes (4 bytes integer + 4 bytes of float + 1 byte of char + 3 bytes of padding alignment)
	printf("Size of the struct 'start_t': %d\n", struct_size);
	start_t.member1 = 23; // Assigning value 23 to member1 which is integer type.
	printf("Value of integer type member1: %d\n", start_t.member1);
	start_t.member2 = 23.67; // Assigning value 23.67 to member2 which is float type.
	printf("Value of float type member2: %.2f\n", start_t.member2);
	start_t.mem3 = 'c'; // Assigning value 'c' to mem3 which is character type.
	printf("Value of character type member1: %c\n", start_t.mem3);
	return 0;
}