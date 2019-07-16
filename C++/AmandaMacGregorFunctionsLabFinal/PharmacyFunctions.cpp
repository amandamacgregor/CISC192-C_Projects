//============================================================================
// Name        : FunctionsLab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cassert>

#include "PharmacyFunctions.h"
using namespace std;





// @brief checks the inventory for available medications
//
// @params
//	medication - the prescribed medication name
//
// @return bool - true: in stock
//		  false : out of stock
/* InStock definition */
bool InStock(const string& medication)
{
	if (medication == "Mekamibeta" || medication == "Stawpsdacauf" || medication == "Idontwananoes")
	{
		return true;
	}

	return false;
}
// @brief checks if the medication is ok for the patient to take
//
// @params
//	in medication - the prescribed medication name
//	in age - the patient's age in whole years
//	in weight - the patient's weight in kilograms
//
// @return bool - true: medication is ok to give to patient
//		  false: medication should not be given to patient
/* OkToAdminister definition */
bool OkToAdminister(const string& medication, const int age, const double weight)
{
if (medication == "Mekamibeta")
	{
	return true;
	}
else if (medication == "Stawpsdacauf" && age > 1)
{
	return true;
}
else if (medication == "Idontwananoes" && age > 2 && weight > 8.5)
{
	return true;
}

	return false;
}
// @brief calculates the dosage to give the patient
//
// @params
//	in medication - the prescribed medication name
//	in weight - the patient's weight in kilograms
//
// @return int - the medication dosage in milligrams
/* Dosage definition */
double Dosage(const string& medication, double weight)
{
	if (medication == "Mekamibeta")
		{
		if (weight < 8.5)
		{
			return 2.5;
		}
		else if (weight >= 8.5 && weight < 45)
		{
			return (weight * 0.5);
		}
		else if (weight >= 45.0)
		{
			return 23.0;
		}

		return false;
	}
	if (medication == "Stawpsdacauf")
	{
		return (1 * weight);
	}
	if (medication == "Idontwananoes")
		{
			return 4.75;
		}
	return 0;
}
// @brief puts together patient and medicine information for labeling
//
// @params
//	in medication - the prescribed medication name
//	in name - the patient's name
//	out weight - the completed label
//
void MakeLabel(const string& medication, const string& name, double weight, string& label)
{
	const int DOSAGE_STR_LENGTH = 6;
	char dos[DOSAGE_STR_LENGTH];
	snprintf(dos, DOSAGE_STR_LENGTH, "%f", Dosage(medication, weight));
	label = name + "\n" + medication + "\nAt bedtime take " + dos + " mgs.\n";
}
