// Faye Williams
// 28 September 2005
// files1.cpp

//*********************************************************
//file streams 
//opening, closing and file modes
//*********************************************************

#include<iostream>
#include<string>
#include<fstream> //required for working with file streams

using namespace std;

int main()
{
	//tab and newline formatting will be preserved:
	string data("\tOnce upon a time...\n\t...in a land far away");
	string data2("\n\tThere lived a big green dragon");
	
	//for each file that is opened a file object must be created:
	//ofstream for data out (like cout)
	//ifstream for data in (like cin)
	
	//create the file in the directory (or add an absolute/relative path in front of file name
	//if the file exists IT WILL BE OVERWRITTEN
	ofstream obj("story.txt");
		
	//before doing anything to the file, you should check for its existence
	if ( ! obj )
	{
		cout << "Error opening file" << endl;
		return -1;
	}
	
	obj << data << endl;
	
	//always remember to close your files after you've finished
	obj.close();
	
	//opening files in different modes:
	
	//ios::out - open file to write output
	//ios::in - open file to read input
	//ios::app - write and append at the end of existing content
	//ios::trunc - truncate existing file (default)
	//ios::ate - open without truncating and allow data to be written anywhere
	//ios::binary - treat file as binary, not text
	
	//multiple modes may be separated with a | character
	//eg ofstream obj("file.txt", ios::out | ios::binary )
	
	ofstream obj2( "story.txt", ios::app );
	if ( ! obj )
	{
		cout << "Error opening file" << endl;
		return -1;
	}
	
	obj2 << data2 << endl;
	
	obj2.close();
	
	system("pause");	

	return 0;
}
