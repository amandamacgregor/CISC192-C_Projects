//============================================================================
// Name        : IDEAttempt2.cpp
// Author      : Amanda MacGregor
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    string book_title_strs[] =
    {
        "Twilight",
        "A Ghost in the Shell",
        "A very hungry caterpillar",
        "Catcher in the Rye",
        "Pride, Prejudice and Zombies",
        "Man in the Moon",
        "Goodnight Moon",
        "Goodnight Lab",
        "Knuffle Bunny, a cautionary tale.",
        "Eat, Pray, Munch",
        "Gray's Anatomy"
    };
    int num_books = sizeof(book_title_strs) / sizeof(book_title_strs[0]);
    //cout << num_books << endl;
    //cout << sizeof(book_title_strs) << endl;
    // create an array of booleans to track the books checked out
    bool checkedOut[num_books] ;
		for (int i = 0; i < num_books; i++)
		{
			checkedOut[i] = 0;
		}
    //cout << checkedOut;
    // create and initialize your vector of book_titles using book_title_strs
    vector<string> book_titles;
    	for (int i = 0; i < num_books; i++)
    		{
    		book_titles.push_back(book_title_strs[i]);
    		}

    int selection;
    int checkOut;

    cout << "Welcome to the library. ";
    do
    {
        cout <<  "What would you like to do?" << endl;
        cout << "\n\t1) List all books" << endl;
        cout << "\t2) List available books" << endl;
        cout << "\t3) Checkout a book" << endl;
        cout << "\t4) Return a book" << endl;
        cout << "\t5) Exit\n" << endl;

        cin >>  selection;

        switch(selection)
        {
        case 1:
            // list all the books in the catalog
        	for (int i = 0; i < num_books; i++)
        	{
        		cout << book_titles[i] << endl;
        	}
        	cout << endl;
            break;
        case 2:
            // list all the available books
        	for (int i = 0; i < num_books; i++)
        	{
        	    if (checkedOut[i] == false)
        	    {
        	    	cout << book_titles[i] << endl;
        	    }
        	}
        	cout << endl;
            break;
        case 3:
            cout << "Select number from the following list of available titles:" << endl;

            for (int i = 0; i < num_books; i++)
            {
				if (checkedOut[i] == false)
				{
					cout << i + 1 << ": " << book_titles[i] << endl;
				}
            }
            cin >> checkOut;
            	if (checkedOut[checkOut - 1] == false)
            	{
            		cout << book_titles[checkOut - 1] << " is due back in 14 days." << endl;
            		            checkedOut[checkOut - 1] = true;
            	}
            	else if (checkedOut[checkOut - 1] == true)
            	{
            		cout << book_titles[checkOut - 1] << " is not available." << endl;
            	}
            	else
            	{
            		cout << checkOut << " is not part of the catalog." << endl;
            	}

            cout << endl;
            break;
        case 4:
            // return a book
        	cout << "Select number from the following list of checked-out titles:" << endl;

        	 for (int i = 0; i < num_books; i++)
        	 {
        		if (checkedOut[i] == true)
        		{
        			cout << i + 1 << ": " << book_titles[i] << endl;
        		}
        	 }
        	 cin >> checkOut;
        	 if (checkedOut[checkOut - 1] == true)
        	 {
        	     cout << book_titles[checkOut - 1] << " has been returned" << endl;
        	     checkedOut[checkOut - 1] = false;
        	 }
        	 else if (checkedOut[checkOut - 1] == false)
        	 {
        	 cout << book_titles[checkOut - 1] << " is not checked out." << endl;
        	 }
        	 else
        	 {
        		 cout << checkOut << " is not part of the catalog." << endl;
        	 }
        	 cout << endl;
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "You entered an invalid selection.";
            break;
        }

        cout << "\nContinue? (y/n)" << endl;
        char cont;
        cin >> cont;
        if(cont == 'n')
        {
            selection = 5;
        }

    } while( selection != 5);
    return 0;
}
