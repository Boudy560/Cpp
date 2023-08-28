#include <iostream>
#include <string>

using namespace std ;

//When a parameter is passed to the function, it is called an argument. So, from the example above: fname is a parameter, while Liam, Jenny and Anja are arguments.
void yourInformation(string name, int age , string gender)
{
    cout << name << "\n" << age << "\n" << gender ;
}


int main()
{

    string name, gender ;
    int age ;
    cin >> name >> gender >> age ;

    yourInformation(name , age , gender);

}

