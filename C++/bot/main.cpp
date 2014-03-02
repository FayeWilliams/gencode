#include <iostream>
#include "Speech.h"
#include "Defines.h"

using namespace std;

int main()
{
	Speech sentence;
	char buf[256] = {0};
	char response[256] = {0};
	bool negativeFormality = false;
	int type = 0;

	cout << "Waking bot... type 00, or say goodbye to exit" << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "bot>hello." << endl;
	
	while(!negativeFormality)
	{
		cout << "   >";

		cin.getline(buf,256,'\n');

		if (0 == memcmp( buf, "00", 2 ))
		{
			break;
		}

		sentence.SetBuffer(buf);
		sentence.EvaluateInput( response );
		
		cout << "bot>" << response << endl;
	}

	return 0;
}

