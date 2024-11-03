#include<stdio.h>

int main()
{
	// Defining a character data type variable and printing the value assigned to it.
	char c_var = 'A';
	printf("Print the data variable 'c_var' of character type holds: %c\n", c_var);

	// Checking the size of character data type
	int c_var_size = sizeof(c_var);
	printf("Size of characater data type variable 'c_var' is: %d\n", c_var_size);

	// Defining a string data type variable and printing the value assigned to it.
	char s_var[] = "Hello";  // String data type is an array of characters, the array may or may not be defined.
	printf("Print the data variable 's_var' of string type holds: %s\n", s_var);

	// Checking the size of character data type
	int s_var_size = sizeof(s_var);
	printf("Size of string data type variable 's_var' is: %d\n", s_var_size);

	return 0;
}
