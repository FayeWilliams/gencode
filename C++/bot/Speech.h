#include <vector>

class Speech
{

public: //functions
Speech();
~Speech();
void SetBuffer( char *buffer );
void EvaluateInput( char *out );

private: //functions
void ClassifyMajorType();
void EvaluateFormality();
void EvaluateQuestion();
void EvaluateStatement();

private: //data members
char input[256];
char output[256];
int type;
std::vector<char *> m_formalities;
std::vector<char *>::iterator iter;
};