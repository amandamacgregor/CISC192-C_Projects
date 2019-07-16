/*
 * FunctionsHeader.h
 *
 *  Created on: Apr 13, 2019
 *      Author: amandamacgregor
 */

#ifndef PHARMACYFUNCTIONS_H_
#define PHARMACYFUNCTIONS_H_
#include <iostream>
using namespace std;

bool InStock(const string& medication);
bool OkToAdminister(const string& medication, const int age, const double weight);
double Dosage(const string& medication, double weight);
void MakeLabel(const string& medication, const string& name, double weight, string& label);



#endif /* PHARMACYFUNCTIONS_H_ */
