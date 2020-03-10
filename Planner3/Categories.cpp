#include "Categories.h"
#include <iostream>
#include "Color.h"

void searchCategory(event array[], int size)
{
	string myCategory;
	cout << "Enter your category: ";
	cin >> myCategory;
	for (int i = 0; i < size; i++)
	{
		if (array[i].category == myCategory&& array[i].importance == 3)
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
		else if (array[i].category == myCategory && array[i].importance == 2)
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
		else if (array[i].category == myCategory && array[i].importance == 1)
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
		else if (array[i].category != myCategory)
		{
			
		}

	}

}
