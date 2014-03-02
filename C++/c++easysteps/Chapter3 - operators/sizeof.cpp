// Faye Williams
// 23 September 2005
// sizeof.cpp

//*********************************************************
//shows use of sizeof
//*********************************************************

#include<iostream>

using namespace std;

int main()
{
	//sizeof returns an integer which is the number of BYTES
	//needed to store the CONTENTS of its operand
	//note that the contents DO NOT alter the size of the operand
	//as this is decided as soon as it is declared and does not change
	
	//Variables before anything done
	float float1;
	int int1;
	char letter1;
	char letters1[20];
	char *ptr1;

	cout << "\nBefore initialisation:\n";
	cout << "sizeof(float1): " << sizeof(float1) << endl;
	cout << "sizeof(int1): " << sizeof(int1) << endl;
	cout << "sizeof(letter1): " << sizeof(letter1) << endl;
	cout << "sizeof(letters1): " << sizeof(letters1) << endl;
	cout << "sizeof(ptrl): " << sizeof(ptr1) << endl;
	
	//Variables with values
	float float2 = 0;
	int int2 = 0;
	char letter2 = '\0';
	char letters2[20] = {0};
	char *ptr2 = &letter2;
	
	cout << "\nAfter initialisation:\n";
	cout << "sizeof(float2): " << sizeof(float2) << endl;
	cout << "sizeof(int2): " << sizeof(int2) << endl;
	cout << "sizeof(letter2): " << sizeof(letter2) << endl;
	cout << "sizeof(letters2): " << sizeof(letters2) << endl;
	cout << "sizeof(ptr2): " << sizeof(ptr2) << endl;
	
	//Variables assigned
	float float3 = 1.328;
	int int3 = 23021;
	char letter3 = 'a';
	char letters3[20] = {'1','2','3','4','5','1','2','3','4','5','1','2','3','4','5','1','2','3','4','\0'};
	char *ptr3;
	ptr3 = letters3;
	
	//add some structs:	
	struct bigStruct
	{
		float float4;
		int int4;
		char letter4;
		char letters4[20];
		char *ptr4;
	};
	
	struct smallStruct
	{
		int int4;
		char letter4;
	};
	
	//define two structs
	bigStruct bigS;
	smallStruct smallS;
	
	//and a pointer to a struct
	bigStruct *pBigS;
	
	//note brackets are optional
	//but is good practice to always include them
	cout << "\nWith data added:\n";
	cout << "sizeof(float3): " << sizeof float3 << endl;
	cout << "sizeof(int3): " << sizeof int3 << endl;
	cout << "sizeof(letter3): " << sizeof letter3 << endl;
	cout << "sizeof(letters3): " << sizeof letters3 << endl;
	cout << "sizeof(ptr3): " << sizeof ptr3 << endl;	//4 bytes - size of pointer
	cout << "sizeof(*ptr3): " << sizeof *ptr3 << endl;	//1 bytes - size of data pointed to (pointer is a char, not a char array. It just points
														//to the first char in the array)
	cout << "sizeof(&ptr3): " << sizeof &ptr3 << endl;	//4 bytes (address)
	
	//bigStruct size returned is 36 bytes - this includes 3 bytes of padding
	//added by the compiler for faster access. You can turn off padding 
	//which will make access slightly slower, but it is not always predictable
	//or reliable. Rearranging the order if possible may allow you to get the padding 
	//on the end. In general reading and writing structs to external files 
	//is problematic and not good for portability ( unless all done by the original program
	//and never accessed with any other app, even if compiled on same system with same 
	//compiler ). 
	//You should never read whole structures if they were written by other programs.
	//Instead, read the struct members one by one, and make sure the member declarations 
	//are consistent with their definitions in the program that wrote the struct. 
	cout << "sizeof(bigS): " << sizeof bigS << endl;
	cout << "sizeof(smallS): " << sizeof smallS << endl; // smallStruct size returned is 8 bytes, which is exactly right
	cout << "sizeof(pBigS): " << sizeof pBigS << endl;	//4 bytes - size of pointer
	cout << "sizeof(*pBigS): " << sizeof *pBigS << endl; //36 bytes - size of (currently empty) struct pointed to
	cout << "sizeof(&pBigS): " << sizeof &pBigS << endl;	//4 bytes (address)
	
	system("pause");	

	return 0;
	
}
