#include <iostream>
#include <string>

using namespace std;

void information(string name , string gender , string location)
{
    cout << name << gender << location ;
}

int main()
{
    string name = "Boudy" , gender = "male", location = "giza";
   
    information( name ,  gender  , location);
}


