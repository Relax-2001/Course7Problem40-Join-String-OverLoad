#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

string JoinString( vector <string> & vWords , string Delem)
{
	string S1;

	for (string & Word : vWords )
	{
		S1 += Word + Delem;
	}

	return S1.substr(0, S1.length() - Delem.length());

}

string JoinString(string Array[] , short Length , string Delem)
{
	string S1 = "";

	for (short i = 0 ; i < Length ; i++)
	{
		S1 += Array[i] + Delem ;
	}

	return S1.substr(0,S1.length() - Delem.length());

}

int main()
{

	
	vector <string> vWords {"Mahmoud" , "Mohammed" , "Talal" , "Lyla"};
	string StrArr[] {"Mahmoud" , "Mohammed" , "Talal" , "Lyla" };

	cout << "\nVector after join:\n";
	cout << JoinString(vWords , ", ") << "\n";

	cout << "\n\nArray after join:\n";
	cout << JoinString(StrArr , 4 , ", ") << "\n";

	return 0;
}

