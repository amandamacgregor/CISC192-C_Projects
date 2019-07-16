#include <iostream>

using namespace std;

int main() {
    int userSelection;
    char userVowel;
    int userNumber;

    cout << endl;
    cout << "Greetings TinyPuter. Select an option." << endl;
    cout << endl;
    cout << "\t" << "Press 1 to play with letters." << endl;
    cout << "\t" << "Press 2 to play with numbers." << endl;
    cin >> userSelection;
    cout << endl;

    if (userSelection == 1) {

    cout << "Press a vowel key ..." << endl;
    cin >> userVowel;
    cout << endl;

        switch(userVowel) {
        case 'a':
        case 'A':
            cout << "You pressed " << userVowel << ", ALLIGATOR starts with " << userVowel << "." << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
            break;

        case 'e':
        case 'E':
            cout << "You pressed " << userVowel << ", ELEPHANT starts with " << userVowel  << "." << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
            break;

        case 'i':
        case 'I':
            cout << "You pressed " << userVowel << ", IGUANA starts with " << userVowel << "." << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
            break;

        case 'o':
        case 'O':
            cout << "You pressed " << userVowel << ", OSTRICH starts with " << userVowel << "." << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
            break;

        case 'u':
        case 'U':
            cout << "You pressed " << userVowel << ", URCHIN starts with " << userVowel << "." << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
            break;

        case 'y':
        case 'Y':
            cout << "You pressed " << userVowel << ", YAK starts with " << userVowel << "." << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
            break;
        default:
            cout << "Provided input is not valid. Please play again. Exiting ..." << endl;
            cout << endl;
            break;
        }}
        else if (userSelection == 2) {
        cout << "Enter a number of rhinos ..." << endl;
        cin >> userNumber;

        if ((userNumber == 0) && (isdigit(userNumber))){
            cout << endl;
            cout << "There are no rhinos" << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
        }
        else if (userNumber == 1) {
            cout << endl;
            cout << "There is one rhino" << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
        }
        else if ((userNumber >= 2) && (userNumber <= 9)) {
            cout << endl;
            cout << "There are ones of rhinos" << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
        }
        else if ((userNumber >= 10) && (userNumber <= 99)) {
            cout << endl;
            cout << "There are tens of rhinos" << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
        }
        else if ((userNumber >= 100) && (userNumber <= 999)) {
            cout << endl;
            cout << "There are hundreds of rhinos" << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
        }
        else if ((userNumber >= 1000) && (userNumber <= 999999)) {
            cout << endl;
            cout << "There are thousands of rhinos" << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
        }
        else if ((userNumber >= 1000000) && (userNumber <= 999999999)) {
            cout << endl;
            cout << "There are millions of rhinos" << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
        }
        else if (userNumber >= 1000000000) {
            cout << endl;
            cout << "There may be too many rhinos to count with 32 bits" << endl;
            cout << "Thanks for playing, come back and play again!" << endl;
            cout << endl;
        }
        else {
            cout << "Provided input is not valid. Please play again. Exiting ..." << endl;
            cout << endl;
        }}
       return 0;
}
