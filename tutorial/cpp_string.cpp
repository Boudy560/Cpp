#include <iostream>
#include <string>
using namespace std ;
int main()
{
    string name = "Hello Boudy Ahmed ";
    string last_Name = "Mohamed Hassan";
    cout << name + last_Name << endl ;

    // or 

    string fullname = name.append(last_Name);
    cout << fullname ;

    return 0;
}