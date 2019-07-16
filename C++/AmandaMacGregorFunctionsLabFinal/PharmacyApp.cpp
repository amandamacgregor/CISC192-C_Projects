//// This is your Pharmacy application driver **need to create this
#include <iostream>
#include <cassert>

#include "PharmacyFunctions.h"
using namespace std;
int main()
{
string name;
int age;
double weight;
string medication;
string label = "";

	cout << "Please enter the patient's name:" << endl;
	cin >> name;
	cout << "Please enter the patient's age in years:" << endl;
	cin >> age;
	cout << "Please enter the patient's weight in kgs:" << endl;
	cin >> weight;
	cout << "Please enter the patient's prescribed medication:" << endl;
	cin >> medication;
	cout << endl;

	if (InStock(medication) == false)
	{
		label = "Out of stock";
	}
	else
	{
		if (OkToAdminister(medication, age, weight) == false)
		{
			label = "Not ok to administer";
		}
		else
		{
			MakeLabel(medication, name, weight, label);
		}
	}
	cout << label;
	return 0;
}
