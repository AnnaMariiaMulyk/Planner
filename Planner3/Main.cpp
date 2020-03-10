#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>
#include "Color.h"
#include "Interface.h"
#include "Structs.h"
#include "Functions.h"
#include "Categories.h"
using namespace std;
using namespace color;



int main() {

	int size=50;
	event* arrayEvent = new event[size];
	int count = 0;
	
	int choise;
	

	do {
		choise = { menu() };
		switch (choise)
		{
		case 1: 
		addEvent(arrayEvent, size, count);
		count++;
		break;

		case 2:
		showEvents(arrayEvent, size);
		break;
		case 3:
			searchCategory(arrayEvent, size);
			break;
		case 4:
			cout << "Googbye!" << endl;
			Sleep(1000);
			system("clr");
		}


	} while (choise != 4);



	system("pause");
	return 0;

}