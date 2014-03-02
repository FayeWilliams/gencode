// Faye Williams
// 28 September 2005
// files2.cpp

//*********************************************************
//file streams 
//getting characters and lines
//*********************************************************

#include<iostream>
#include<string>
#include<fstream> //required for working with file streams

using namespace std;

struct question
{
	string question;
	string answer;
};


int main()
{
	char ch;
	
	ifstream obj("story.txt");
		
	if ( ! obj )
	{
		cout << "Error opening file" << endl;
		return -1;
	}
	
	//this will print out the exact contents of the file created in files1.exe
	
	while (! obj.eof() ) //testing for end of file
	{
		obj.get(ch);
		cout << ch;
	}
	
	obj.close();
	
	//alternative (and faster) is the getline method:
	ifstream obj2("story.txt");
	
	if ( ! obj2 )
	{
		cout << "Error opening file" << endl;
		return -1;
	}
	
	string str;
	
	while (! obj2.eof() ) //testing for end of file
	{
		getline(obj2, str);
		cout << str << endl; //NOTE getline stops on newline, so it IGNORES \n in the file
		//adding endl here maintains the \n's found in the file
	}
	
	obj2.close();
	
	//you can use getline to format data into string arrays
	//as getline will also take a delimiter at which to stop reading
	ifstream obj3("records.txt");
	
	if ( ! obj3 )
	{
		cout << "Error opening file" << endl;
		return -1;
	}
	
	string data[8];
	int i = 0;
	
	//note - there is a flaw in this - if your file has extra blank lines at the end, it will fail to
	//get to the eof before the array is full
	while ( !obj3.eof() )
	{
		if (((i + 1) % 4 ) == 0 )	//only true if data is in the fourth coloumn
		{
			getline( obj3, data[i] );	//just uses newline here, as every fourth column is a new line
		}
		else
		{
			getline( obj3, data[i], '\t');	//specifies optional delimiter here
		}
		++i;
	}
	
	//now output data in different format
	
	int count = 0;
	int j = 0;
	while ( j < i )
	{
		cout << "\nRecord number:\t" << ++count << endl; //increments count as well as outputting
		cout << "Forename:\t" << data[j++] << endl;			//increments through array after printing out each time
		cout << "Surname:\t" << data[j++] << endl;
		cout << "Department:\t" << data[j++] << endl;
		cout << "Tel. No.:\t" << data[j++] << endl;
	}
	
	obj3.close();
	
	system("pause");	
	
	return 0;
}
