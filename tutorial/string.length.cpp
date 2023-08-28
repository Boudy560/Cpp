#include <iostream>
#include <string>
using namespace std ;

int main()
{
    string sizeOfNumber = "Abdelrahman Ahmed Mohamed Hassan";
    // to know this of string
    cout << sizeOfNumber.size() << endl ;
    // or 
    cout << sizeOfNumber.length() << endl ;

////////////////////////////////////////////////////////////////////

    // Access strings mean index
    string access = "Hello" ;
    cout << access[3] ;

///////////////////////////////////////////////////////////////////

    // Change String Characters
    string myString = "Hello";
    myString[0] = 'J';
    cout << myString;
///////////////////////////////////////////////////////////////////

    //to get name from user 
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;
}