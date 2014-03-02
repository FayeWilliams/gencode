// Faye Williams
// 22 October 2005
// functionpointers.cpp

//*********************************************************
//pointers to functions
//*********************************************************

#include<iostream>
#include<string>

using namespace std;

//to summarise:
//* used in declaration means the variable is a pointer
//* used before a variable means we are referencing its data or contents
//a pointer with no * means we are talking about its address or location
//dereferencing a pointer will give you the data at its address

int sum(int x, int y);

int main()
{
	//a pointer to a function is always enclosed in plain brackets
	//followed  by any arguments enclosed in plain brackets

	int (*ptr)(int x, int y);	//pointer declaration
								//function return type, pointer, arguments
	ptr = sum;					//point to the function (& not needed)
								
	int num1 = 10;
	int num2 = 15;
	
	int result = (*ptr)(num1,num2);	//call function with pointer
	
	cout << "result is: " << result << endl;
	
	system("pause");	
	
	return 0;
}

int sum(int x, int y)
{
	int value = x + y;
	return value;
}
