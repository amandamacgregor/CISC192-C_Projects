# CISC 192: Functions Lab #
Learning objectives:
Void returns
Value returns
Multiparameter functions
Pass by value
Pass by reference
Functions calling functions
Description of Pharmacy application
In this lab we are going to code a set of functions or an application programming interface (API) for a pharmacy, and the pharmacy application. The pharmacy application takes in the name, age, weight and prescribed medication from the user. It checks to make sure the patient meets the criteria to take the medication. Then it constructs and outputs the label for the medication, including the dosage. This pharmacy currently administers 3 medications. The details of these medications are specified in the descriptions below. 



FunctionsLab.zip
Unzip the FunctionsLab.zip. FunctionsLab.zip includes the following files:


Functions
You will unit test and code the following functions, with the exception of MakeLabel which is provided for you, but still needs unit testing.

InStock
Brief description, parameters and return value.
// @brief checks the inventory for available medications
//
// @params
//	medication - the prescribed medication name
//
// @return bool - true: in stock
//		  false : out of stock

OkToAdminister
Brief description, parameters and return value.
// @brief checks if the medication is ok for the patient to take
//
// @params
//	in medication - the prescribed medication name
//	in age - the patient's age in whole years
//	in weight - the patient's weight in kilograms
//
// @return bool - true: medication is ok to give to patient

Dosage
Brief description, parameters and return value.
// @brief calculates the dosage to give the patient
//
// @params
//	in medication - the prescribed medication name
//	in weight - the patient's weight in kilograms
//
// @return int - the medication dosage in milligrams

MakeLabel (this function is provided for you in the template code)
Brief description, parameters and return value.
// @brief puts together patient and medicine information for labeling
//
// @params
//	in medication - the prescribed medication name
//	in name - the patient's name
//	in weight - the patient's weight in kilograms
//	out weight - the completed label
void MakeLabel(const std::string& medication, const std::string& name, double weight, std::string& label);
Compiling
To compile the test bench, use the following command line

g++ testbench.cpp pharmacy.cpp -o PharmTestbench

To compile the Pharmacy application, use the following commend line

g++ main.cpp pharmacy.cpp -o PharmLab
Running the example applications
PharmLab_Win
download 
rename to PharmLab.exe
start a command prompt, in the search bar type cmd
navigate to the directory where the executable file is (probably Downloads) 
$ ArraysLab.exe 
proceed to provide user input 
PharmLab_Mac:
download 
start a Terminal (usually found under others)
navigate to the directory where the executable file is (probably Downloads) 
$ ./PharmLab_Mac 
if you get a permission denied error you will need to give execute permissions to the file, to do that
chmod +x ArraysLab_Mac
proceed to provide user input 
Hints and gotchas
The template testbench mentions how many test vectors per function are needed to thoroughly test each one.
We are only looking at functional testing, not adversarial (e.g. letter enter for a number)
To get full credit you need to hit all the learning objectives
Remember to zip the entire project directory, including project file and source code
Remember to use the zip format
You can submit multiple times before the deadline
Use only standard C++99/11
Rubric
5 points for the correct function declarations
5 points for the correct function definitions
5 points for a working Pharmacy application
5 points for a complete test bench with thorough test vectors
0 points for a project that doesn’t compile
 -1 point per warning when compiling
