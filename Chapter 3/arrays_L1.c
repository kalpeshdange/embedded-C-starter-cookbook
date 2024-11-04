#include<stdio.h>

int main()
{
	// Define a array 
	int arr[] =  {1,2,3,4,5};  // Array size is not defined

	int arr_def[5] = {1,2,3,4,5}; // Array size is defined

	// Finding the size of an array
	int arr_size = sizeof(arr); 
	printf("Size of array 'arr' is: %d\n", arr_size);

	// Accesing and element of an array
	printf("Accesing the third element: %d\n", arr[2]);  // Array elements indexing starts with 0

	// Looping through array and doing array arithmetic
	int sum = 0;
	for(int i=0; i<=5; i++)
	{
		sum +=arr[i];
	}

	printf("Sum of all elements of the array: %d\n", sum);

	return 0;
}