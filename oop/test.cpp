#include <iostream>
#include <string>
using namespace std ;

class myData
{
    public:
        string name;
        string location;
        string gender;
        int age ;
    myData(string x, string y, string z, int a); 
};

myData::myData(string x, string y, string z, int a)
{
    name = x ;
    location = y ;
    gender = z ;
    age = a ;

}


int main()
{
    string name = "Boudy" , location = "Giza" , gender = "male" ;
    int age = 22 ;

    myData  info(name,location,gender,age) ;
    cout << info.name << "\n" << info.location << "\n" << info.gender << "\n" << info.age << "\n" ;
    
}