// Faye Williams
// 18 September 2005
// datatypes.cpp

//*********************************************************
//there are five basic data types shown below.
//NOTES ON FLOATING POINTS:
//Floating-point decimal values generally do not have an exact binary representation. 
//This is a side effect of how the CPU represents floating point data. 
//Different compilers and CPU architectures store temporary results at different 
//precisions, so results will differ depending on the details of your environment. 
//If you do a calculation and then compare the results against some expected 
//value it is highly unlikely that you will get exactly the result you intended.
//(eg A + B will not quite equal C)
//instead you need to define a tolerance (eg 0.001) and compare the difference
//to see if it is greater or lesser than the error margin (usually #defined as EPSILON)
//You have to scale epsilon to the values you are using - eg say 0.1 for 1234.23
//eg 0.001 for 2.2345, since only the first 6 decimal numbers are correct
//*********************************************************

#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
	//NOTE: use doubles when precision is more important than storage
	
	char character = 'a'; 				//1 byte (8 bits)
	
	//qualifiers:
	//SHORT int is usually half an int (so 2 bytes or 16 bits)
	//typically -32,768 to +32,767 or 0 to 65,535
	//useful to save on space when you know your numbers won't exceed this
	
	//LONG int is usually an int (so 4 bytes or 32 bits)
	//typically -2,147,483,648 to + 2,147,483,647 or 0 to 4,294,967,295
	//(that's 2000 million or 4000 million, 
	//or alternatively low 10 digit numbers, for quick ref)
	
	int number = 123;					//usually 4 bytes (32 bits) on 32 bit pc
	
	float decimalpoint = 0.012345;		//usually 4 bytes (32 bits)
	double precisepoint = 1.123456789;	//usually 8 bytes (64 bits)
	double precisepoint2 = 123456789.1;	
	bool trueorfalse = true;			//1 byte (8 bits)
	
	//IMPORTANT NOTE: the extraction and insertion operators for doubles
	//only provide for a maximum of 7 decimal digits
	
	cout << "\nchar:\t" << character << "\t\t" << "size:\t" << sizeof(character) << endl;
	cout << "int:\t" << number << "\t\t" << "size:\t" << sizeof(number) << endl;
	cout << "float:\t" << decimalpoint << "\t" << "size:\t" << sizeof(decimalpoint) << endl;
	cout << "double:\t" << precisepoint << "\t\t" << "size:\t" << sizeof(precisepoint) << endl;
	cout << "bool:\t" << trueorfalse << "\t\t" << "size:\t" << sizeof(trueorfalse) << endl;
	
	//include the iomanip header to output the double fully
	cout << "precise:\t" << setprecision (10) << precisepoint << endl;

	//example of inaccuracy - should be 138698367.8625361999
	//actual result is 138698367.86253619 (lost last 2 digits)
	double result = precisepoint * precisepoint2;
	cout << "result:\t\t" << setprecision (50) << result << endl << endl;
	
	//As a general guide, floats cope with around 6 decimal digits, doubles with 15-17
	//(in total, not just after the decimal point)

	system("pause");

	return 0;
}
