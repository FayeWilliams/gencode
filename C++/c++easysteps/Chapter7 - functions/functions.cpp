// Faye Williams
// 30 September 2005
// functions.cpp

//*********************************************************
//notes on functions:
//1. function prototype / declaration
//2. function definition / body
//3. passing by value - ie a copy
//4. default parameters
//5. recursive functions
//6. function overloading and function resolution
//7. inline functions
//*********************************************************

#include<iostream>

using namespace std;

//a simple recursive function:
void recur(int num);
inline void sayHello();

int main()
{
	//1. function prototype / declaration usually goes before main
	//2. function definition / body usually goes after main
	
	//3. passing arguments by value - usual way. Passes in a COPY of the
	//value, so whatever you do to it in the function, the orginal in the 
	//program will not be modified.
	
	//4. default arguments can be set in the prototype / declaration
	//these are used unless something is passed in to override it.
	//Multiple args can be set as default, but default params must always
	//appear at the end of the arg list.
	
	//param names in the definition DO NOT have to match the prototype, 
	//just the quantity, order and type must be equal
	
	//5. recursive functions call themselves
	//they need some conditional test within the 'loop'
	//so that they will exit at somep point.
	
	//recursive functions generally run slower than the 
	//equivalent loop, but it some algorithms, it is clearer to use
	//a recursive function
	int zero = 0;
	recur(zero);
	
	//6. function overloading provides a way to have different functions with the same name.
	//the compiler matches a function call to the correct function ("function resolution")
	//by checking the order, type and number of parameters.
	//function resolution does NOT take the RETURN TYPE into consideration - they
	//must differ in their parameters.
	
	//7. inline functions
	//whenever a function is called, the program jumps location and then returns. 
	//This slows the program down. This can be avoided by declaring a function with
	//the inline keyword.
	//This causes direct substitution of the code at the point where the
	//function is called (like a macro).
	//This is only suitable where the function is one or two lines long.
	//Multiple calls to large inline functions make your code huge.
	sayHello();
	
	system("pause");	
	
	return 0;
}

void recur(int num)
{
	cout << "Line: " << num << endl;
	num++;
	if ( num < 5 )
	{
		recur(num);
	}
	else // this else is optional. The function will just exit at this point anyway.
	{
		return;
	}
}

void sayHello()
{
	cout << "...... Hello!" << endl;
}

