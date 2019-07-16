#include <iostream>

using namespace std;

int main() {
int userInput;
string returnString;
int row;
int column;
int tempRow;
string rowString;
int tempColumn;

    cout << "Enter the size of the square:" << endl;
    cin >> userInput;
    cout << endl;

while (userInput > 0) {

for (row = userInput; row > 0; row--) {
        rowString = std::to_string(row) + "\t";
        for (column = 0; column < userInput; column++) {
        tempColumn = column;
        tempRow = row + tempColumn;
       if (tempRow > userInput) {
           tempRow = userInput - tempColumn;
       }
        if (tempRow < 1) {

        rowString = rowString + std::to_string(tempRow) + "\t";
       }
        cout << rowString << endl;
        cout << endl;
    }}


   cout << "Enter the size of the square:" << endl;
    cin >> userInput;
   cout << endl;
}

// print immediately, not saving values as we go

    //for (userInputNumber = 1; i <= userInput; i++) { //as long as userInputNumber is less than or equal to userInput
       // if (userInputNumber == 0) { // if userInputNumber equals 0
           // for (j = 1; j <= i; j++) { //as long as j is less than or equal to userInputNumber
          //      cout << userInput << "  "; // put userInput then a space
        //    }
        //    for (k = 1; k <= userInput - i; k++) { //when k is equal or less than userInput
          //      cout << k << "  ";
      //      }
    //    }
      //  else {
       //     for (k = i - 1; k >= 1; k--) {
       //         cout << k << "  ";
        //    }
       //     cout << userInput << "  ";
       //     for (j = 1; j <= userInput - i; j++) {
       //         cout << j << "  ";
      //      }
    //    }
    //    cout << endl;
   // }
    return 0;
}
