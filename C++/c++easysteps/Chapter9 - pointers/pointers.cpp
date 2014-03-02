// Faye Williams
// 22 October 2005
// pointers.cpp

//*********************************************************
//& addressof operator, R-value, L-value, * dereference operator
//*********************************************************

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string newstring("Faye Williams");
	int num  = 56;
	double smallnum = 1.2345;
	
	cout << "string starts at : " << &newstring << endl;
	cout << "int starts at: " << &num << endl;
	cout << "double starts at: " << &smallnum << endl;
	
	//L-values are containers, R-values are data
	//think L for location, R for read
	//An R-value cannot appear on the left-hand side of the = assignment operator
	//An L-value may appear on either side of the = assignment operator
	//Code that breaks this rule will not compile
	
	//Pointers are variables that store the memory address of other variables
	//A pointer is an address
	//A pointers data type must match the data type of the variable it points to
	//Denote pointers using the dereference operator * (also known as the indirection operator)
	//Dereferencing a pointer will give you the data at its address
	
	//two ways of initialising pointers:
	int x = 5;
	int y = 10;
	
	//immediate
	int *px = &x;
	
	//by address
	int *py;
	py = &y;
	
	cout << "address of x: " << px << endl;
	cout << "contents of x: " << *px << endl; //dereferenced to get the data
	cout << "address of y: " << py << endl;
	cout << "contents of y: " << *py << endl; //dereferenced to get the data
	
	//to summarise:
	//* used in declaration means the variable is a pointer
	//* used before a variable means we are referencing its data or contents
	//a pointer with no * means we are talking about its address or location
	
	system("pause");	
	
	return 0;
}

