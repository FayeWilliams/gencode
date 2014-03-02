#include "Speech.h"
#include "Defines.h"
#include <String>
#include <iostream> //for debug


using namespace std;

Speech::Speech()
{
	memset( input, 0, BUFFER_LENGTH );
	memset( output, 0, BUFFER_LENGTH );

	//this to go into a file
	m_formalities.push_back( "hello" );
	m_formalities.push_back( "hi" );
	m_formalities.push_back( "hi there" );
	m_formalities.push_back( "hiya" );
	m_formalities.push_back( "hey" );
}


Speech::~Speech()
{
}


void Speech::EvaluateInput( char *out )
{
	ClassifyMajorType();

	switch (type)
	{
	case FORMALITY:
		EvaluateFormality();
		break;
	case QUESTION:
		EvaluateQuestion();
		break;
	case STATEMENT:
		EvaluateStatement();
		break;
	default:
		break;
	}

	memcpy( out, output, BUFFER_LENGTH );
}

void Speech::SetBuffer( char *buffer )
{
	memset( input, 0, BUFFER_LENGTH );
	memset( output, 0, BUFFER_LENGTH );
	memcpy( input, buffer, BUFFER_LENGTH );
	type = 99;
	input[255] = '\0';
}


//evaluate the input and classify it as formality,
//question or statement
void Speech::ClassifyMajorType()
{
	bool undefined = true;
	char buf[256] = {0};
	
	if ( NULL != memchr( input, 63, 256 )) //63 = "?"
	{
		type = QUESTION;
		undefined = false;
	}
	else
	{
		for ( iter = m_formalities.begin();
				iter != m_formalities.end();
				++iter )
		{
			memcpy( buf, *(iter), BUFFER_LENGTH );
			if ( NULL != strstr( input, buf ))
			{
				type = FORMALITY;
				undefined = false;
				break;
			}
		}
	}

	if (undefined)
	{
		type = STATEMENT;
	}
}

void Speech::EvaluateFormality()
{
	memcpy( output, "Hi yourself", BUFFER_LENGTH );
}

void Speech::EvaluateQuestion()
{
	memcpy( output, "You asked me a question", BUFFER_LENGTH );
}

void Speech::EvaluateStatement()
{
	memcpy( output, "You made a statement", BUFFER_LENGTH );
}

