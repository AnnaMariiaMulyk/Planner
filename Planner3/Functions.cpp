#include "Functions.h"
#include <iostream>
#include "Color.h"
#include <Windows.h>
using namespace color;
void addEvent(event array[], int size, int count)
{
	
	int choiseAdd;

		cout << "Do you want to add event?(enter 1 if YES/ enter 2 if NO)" << endl;
		cin >> choiseAdd;
		switch (choiseAdd)
		{
		case 1:

			cout << "Enter category of event: ";
			cin >> array[count].category;
			cout << "Enter name of event: ";
			cin >> array[count].name;
			cout << "Enter description of event: ";
			cin >> array[count].description;
			cout << "Enter importance of event(from 1 to 3): ";
			cin >> array[count].importance;
			cout << "Enter date of event(DD, MM, YYYY): ";
			cin >> array[count].day;
			if (array[count].day <= 0 || array[count].day > 31)
			{
				do 
				{
					cout << "Invalid amount!" << endl;
					cout << "Enter day of event: ";
					cin >> array[count].day;
				} while (array[count].day <= 0 || array[count].day > 31);
				
			}
			cin >> array[count].month;
			if (array[count].month <= 0 || array[count].month >= 13)
			{
				do
				{
					cout << "Invalid amount!" << endl;
					cout << "Enter month of event: ";
					cin >> array[count].month;
				} while (array[count].month <= 0 || array[count].month >= 13);
			}
			cin >> array[count].year;
			if (array[count].year <= 2019)
			{
				do {
					cout << "Invalid amount!" << endl;
					cout << "Enter year of event: ";
					cin >> array[count].year;
				} while (array[count].year <= 2019);
			}
			
			if (array[count].year % 2 != 0 && array[count].month == 2 && array[count].day >= 29)
			{
				do {
					cout << "Invalid amount!" << endl;
					cout << "Enter day of event(1-28):";
					cin >> array[count].day;
				} while (array[count].day >= 29);
			}
			else if (array[count].year % 2 == 0 && array[count].month == 2 && array[count].day > 29)
			{
				do {
					cout << "Invalid amount!" << endl;
					cout << "Enter day of event(1-29):";
					cin >> array[count].day;
				} while (array[count].day > 29);

			}
			
			break;
		case 2:

			cout << "Ok" << endl;
			break;
		}
} 
	


void showEvents(event array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i].name != "" && array[i].importance == 3)
		{
			color::SetColor(4, 0);

				cout << "Category: " << array[i].category << endl;
				cout << "Name: " << array[i].name << endl;
				cout << "Description: " << array[i].description << endl;
				cout << "Importance: " << array[i].importance << endl;
				cout << "Date: " << array[i].day << " " << array[i].month << " " << array[i].year << endl;
				color::SetColor(15, 0);
				cout << endl;
		}
		else
		{

		}
	}

	for (int i = 0; i < size; i++)
	{
		if (array[i].name != ""&& array[i].importance == 2)
		{
				color::SetColor(12, 0);

				cout << "Category: " << array[i].category << endl;
				cout << "Name: " << array[i].name << endl;
				cout << "Description: " << array[i].description << endl;
				cout << "Importance: " << array[i].importance << endl;
				cout << "Date: " << array[i].day << " " << array[i].month << " " << array[i].year << endl;
				color::SetColor(15, 0);
				cout << endl;
		}
		else
		{

		}
	}

	for (int i = 0; i < size; i++)
	{
		if (array[i].name != "" &&array[i].importance == 1)
		{
				color::SetColor(2, 0);

				cout << "Category: " << array[i].category << endl;
				cout << "Name: " << array[i].name << endl;
				cout << "Description: " << array[i].description << endl;
				cout << "Importance: " << array[i].importance << endl;
				cout << "Date: " << array[i].day << " " << array[i].month << " " << array[i].year << endl;
				color::SetColor(15, 0);
				cout << endl;
		}
		
		else
		{

		}
	}

}
		
	

