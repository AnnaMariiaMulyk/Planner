#include "Interface.h"
#include <iostream>;
using namespace std;
int menu()
{
	int choise;
	cout << "\tMENU" << endl;
	cout << "1. Add event" << endl;
	cout << "2. Show my events" << endl;
	cout << "3. Show my events by category" << endl;
	cout << "4. Exit" << endl;
	cout << endl;
	cout << "Enter action: ";
	cin >> choise;
	
	return choise;

}
