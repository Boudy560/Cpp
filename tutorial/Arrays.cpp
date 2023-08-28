#include <iostream>
#include <string>

using namespace std ;

int main()
{
    string names[5] = {"Boudy","Ahmed","Mohamed","Hassan","yassmen"};
    cout << names[0] << "\n";


    int age[5] = {1,2,3,4,5};
    cout << age[2] << "\n";


    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0];
}