// Faye Williams
// 25 September 2005
// operatorprecedence.cpp

//*********************************************************
//shows operator precedence
//*********************************************************

#include<iostream>

using namespace std;

int main()
{
	int num = 1;
	int num2 = 6;
	int num3 = 0;
	
	//to make this false, which is what it should be,
	//you need brackets around the +=, as it has lower precedence than the >
	if ( num += 2  > 4 )
	{
		cout << "\ntrue" << endl;
	}
	else
	{
		cout << "\nfalse" << endl;
	}
	
	//again here brackets are needed 
	num2 += 2 * 10;
	cout << "Num2: " << num2 << endl;
	
	num3 = 100 % 80 / 10;
	cout << "Num3: " << num3 << endl;
	
	cout << "\nOperator precedence" << endl;
	cout << "\nThose in the same group have the same precedence,\nand are evaluated left to right.\n" << endl;
	cout << "1\t::\tscope\n" << endl;
	
	cout << "2\t()\tfunction call" << endl;
	cout << "2\t[]\tarray" << endl;
	cout << "2\t->\tclass pointer" << endl;
	cout << "2\t.\tclass member\n" << endl;
	
	cout << "3\t!\tlogical NOT" << endl;
	cout << "3\t~\tone's complement (c bitwise)" << endl;
	cout << "3\t(type)\tcast" << endl;
	cout << "3\tsizeof\tsizeof" << endl;
	cout << "3\tnew\tnew" << endl;
	cout << "3\tdelete\tdelete" << endl;
	cout << "3\t++\tincrement" << endl;
	cout << "3\t--\tdecrement" << endl;
	cout << "3\t*\tpointer" << endl;
	cout << "3\t&\taddress of" << endl;
	cout << "3\t+\tpositive" << endl;
	cout << "3\t-\tnegative\n" << endl;
	
	cout << "4\t.*\tpointer-to-member" << endl;
	cout << "4\t->*\tpointer-to-member\n" << endl;
	
	cout << "5\t*\tmultiply" << endl;
	cout << "5\t%\tmodulus" << endl;
	cout << "5\t/\tdivide\n" << endl;
	
	cout << "6\t+\taddition" << endl;
	cout << "6\t-\tsubtraction\n" << endl;
	
	cout << "7\t<<\tleft shift (c bitwise)" << endl;
	cout << "7\t>>\tright shift (c bitwise)\n" << endl;
	
	cout << "8\t> < => =<\trelational\n" << endl;
	
	cout << "9\t== !=\tequality\n" << endl;
	
	cout << "10\t&\tAND (c bitwise)\n" << endl;
	cout << "11\t^\texclusive OR (c bitwise)\n" << endl;
	cout << "12\t|\tinclusive OR (c bitwise)\n" << endl;
	
	cout << "13\t&&\tlogical AND\n" << endl;
	cout << "14\t||\tlogical OR\n" << endl;
	
	cout << "15\t?:\tconditional\n" << endl;
	
	cout << "16\t= += -= *= /= %=\tassignments" << endl;
	cout << "16\t<<= >>= &= ^= |=\tassignments\n" << endl;
	
	cout << "17\t,\tcomma\n" << endl;
		
	system("pause");	

	return 0;
}
