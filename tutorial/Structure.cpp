#include <iostream>
#include <string>

using namespace std;

// can i make steuct out function maim or inside function main
struct gitInfo
{
    int id ;
    string name ;
    int age ;
    string gender ;
    string location ;
    int phoneNumber ;
};

int main()
{
    gitInfo person1;

    person1.id = 1;
    person1.name = "Abdelrahman";
    person1.age = 22 ;
    person1.gender = "Male" ;
    person1.location = "Giza" ;
    person1.phoneNumber = 1100040381 ;

    cout << person1.id << endl << person1.name << endl << person1.age << endl << person1.gender << endl <<  person1.location << endl << person1.phoneNumber ;
}