#include <iostream>
#include <string>

using namespace std ;

int main ()
{
    string food = "meat" ;
    string* meal = &food ;

    cout << food << "\n" ;
    cout << &food << "\n";
    cout << meal << "\n";
    cout << *meal << "\n" ;

    *meal = "milk";

    cout << *meal << "\n";
    cout << food ;

}