#include<stdio.h>

typedef struct
{
	int member1;
	char mem2[];
}leveltwo_t;

int main()
{
	// Create an instance of the defined typed struct 'leveltwo_t'
	leveltwo_t inst_struct;  // 'inst_struct' is the instance of the struct 
	// Finding the size of the struct declared
	int struct_size = sizeof(inst_struct);  // The size must be 12 bytes (4 bytes integer + 4 bytes of float + 1 byte of char + 3 bytes of padding alignment)
	printf("Size of the struct 'start_t': %d\n", struct_size);
	inst_struct.member1 = 23; // Assigning value 23 to member1 which is integer type.
	printf("Value of integer type member1: %d\n", inst_struct.member1);
	//inst_struct.mem2 = "Hello"; // Assigning value 23.67 to member2 which is float type.
	//printf("Value of string type member2: %s\n", inst_struct.mem2);
}