
## Memory Alignment and Padding
	Structs are aligned to improve memory access efficiency, and on most systems, structs align their members according to the largest member's alignment requirements. 
	- Example:
		struct
		{
			int member1;
			float member2;
			char mem3;
		}start_t; 

		- Since int and float are usually 4 bytes each, the alignment for this struct will typically be 4 bytes.
		- This means:
			1. member1 will occupy 4 bytes (from byte 0 to byte 3).
			2. member2 will also occupy 4 bytes (from byte 4 to byte 7).
			3. mem3 will occupy 1 byte (from byte 8), followed by 3 bytes of padding to satisfy alignment, bringing the total size to 12 bytes.