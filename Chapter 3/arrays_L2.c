#include<stdio.h>

#define N 5  // Macro for array size definition

int middleNumber(int arr_ip[], int arr_len)
{
	//int arr_odd_check = arr_len%2;
	//printf("%d\n", arr_odd_check);
	if(arr_len%2 !=0)  // Checking if the array length is odd so that it has a middle number
	{
		// Add the address of the middle number to the first element address and dereference its value
		int middle_num = *(arr_ip + arr_len/2);  
		// printf("%d\n", middle_num);
		return middle_num;
	}
	
}

int main()
{
	int arr[N] =  {1,2,3,4,5};  // Defining a fixed size array
	// Passing the pointer to first array element and Number of array elements as arguments to 'middleNumber' function
	int arr_mid = middleNumber(arr ,N);  
	printf("The middle number of the array is:%d\n", arr_mid);
}