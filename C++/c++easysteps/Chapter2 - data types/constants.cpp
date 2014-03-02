// Faye Williams
// 19 September 2005
// constants.cpp

//*********************************************************
//notes on constants
//*********************************************************

#include <iostream>	//NOTE: #include means the header is pasted in right here

using namespace std;

//NO semi-colon after #define
//IMPORTANT: recommended way is to create using the const keyword 
//as it provides better type checking. The #define is known as a macro and is inherited from C
//it replaces all occurances with the definition BEFORE it is translated and linked
//macros can give rise to ambiguities, esp "function-like" macros that emulate functions
//they give misleading error messages as the line number will point to where the macro is substituted in,
//(which won't be a real location in the source code), not the location of the macro itself. 
//Difficult to debug and also precedence of operations in macro functions may be unpredictable, 
//since they are just pasted in, if you * after a macro that adds, the * will be performed
//first - eg #define PI_PLUS1 3.14 + 1
//num = PI_PLUS1 * 2; result is "3.14 + 1 * 2" - ie 5.14, not 8.28!
//inline functions and constants are a much better choice

//one thing macros are good for is ensuring headers are not included multiple times
//header files should be idempotent. That is, the effect of including a header file many times 
//should be exactly the same as including the header file only once. 
//You can best accomplish idempotency (although really, this is avoidence of problems caused by lack of it)
//by setting preprocessor conditions that prevent the body of your header file from appearing more than once. 

//	#ifndef HEADER_H
//	#define HEADER_H
	/* contents of header file */
//	#endif
 
#define NAME "Faye Williams" 

//typedefs should appear after preprocessor directives
//typedefs create a short nickname for a type
//useful for cross-platform development, but generally NOT recomended to use this
//keyword, which is inherited from C.
typedef unsigned short int FW_VAR;

//constants use uppercase as a rule
//constants must be initialised on declaration
const char LETTER = 'a';
const double NUMBER = 3.14159;
	
//enums always increment the value by 1 from whatever preceded it	
//enums can have an OPTIONAL identifier:
enum colours { RED = 1, BLUE, YELLOW, GREEN };
enum { SUNNY, CLOUDY, STORMY }; //defaults first item to zero

//NOTE: variables can be legally declared and initialised outside functions,
//but unless they are const, they shouldn't be globally declared

int main()
{	
	cout << "\nNUMBER: " << NUMBER << endl;
	cout << "GREEN: " << GREEN << endl;
	cout << "LETTER: " << LETTER << endl;
	cout << "STORMY: " << STORMY << endl;
	
	FW_VAR num1 = 56;
	FW_VAR num2 = 77;
	
	cout << "FW_VAR's: " << num1 << ", " << num2 << endl;
	cout << "NAME: " << NAME << endl << endl;
	
	system("pause");

	return 0;
}
