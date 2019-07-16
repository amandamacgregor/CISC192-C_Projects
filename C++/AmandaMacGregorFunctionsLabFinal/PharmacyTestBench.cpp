/*
 * FunctionsTestBench.cpp
 *
 *  Created on: Apr 13, 2019
 *      Author: amandamacgregor
 */
#include <iostream>
#include <cassert>

#include "PharmacyFunctions.h"
using namespace std;



int main()
{

		cout << "Testing started" << endl;

		// Driver for testing the pharmacy functions

		cout << "Testing Pharmacy APIs" << endl;

		// At least 4 test vectors
		cout << "\tTesting InStock" << endl;
		assert(InStock("Mekamibeta")  == 1);
		assert(InStock("Stawpsdacauf")  == 1);
		assert(InStock("Idontwananoes")  == 1);
		assert(InStock("outofstock")  == 0);
		cout << "\tTesting InStock Complete" << endl;


		// At least 6 test vectors
		cout << "\tTesting OkToAdminister" << endl;

		assert(OkToAdminister("Mekamibeta", 12, 35.6)  == 1);
		assert(OkToAdminister("Stawpsdacauf", 12, 35.6)  == 1);
		assert(OkToAdminister("Stawpsdacauf", 0, 35.6)  == 0);
		assert(OkToAdminister("Idontwananoes", 12, 35.6)  == 1);
		assert(OkToAdminister("Idontwananoes", 1, 35.6)  == 0);
		assert(OkToAdminister("Idontwananoes", 3, 6.1)  == 0);

		cout << "\tTesting OkToAdminister Complete" << endl;

		// At least 6 test vectors
		cout << "\tTesting Dosage" << endl;
		assert(Dosage("Mekamibeta", 8.0)  == 2.5);
		assert(Dosage("Mekamibeta", 10.2)  == 5.1);
		assert(Dosage("Mekamibeta", 46.0)  == 23.0);
		assert(Dosage("Stawpsdacauf", 10.0)  == 10.0);
		assert(Dosage("Idontwananoes", 35.0)  == 4.75);
		assert(Dosage("outofstock", 35.0)  == 0);

		cout << "\tTesting Dosage Complete" << endl;

		// At least 1 test vector
		cout << "\tTesting MakeLabel" << endl;
		string label = "";
		MakeLabel("Stawpsdacauf", "Bob", 8.0, label);
		assert(label == "Bob\nStawpsdacauf\nAt bedtime take 8.000 mgs.\n");
		cout << "\tTesting MakeLabel Complete" << endl;
		cout << "All functions pass!" << endl;


    return 0;
}



