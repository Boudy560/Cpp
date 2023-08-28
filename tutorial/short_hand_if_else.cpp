#include <iostream>
#include <string>
#include <cmath>
using namespace std ;

int main()
{
    string myNname  ; 
    int age  ;

    //Syntax
    //variable = (condition) ? expressionTrue : expressionFalse;
    cout << "enter your name and your age " ;

    cin >> myNname >> age ;

    string info = (myNname == "Boudy" && age == 23) ? "wellcome Boudy \n " : "who are you sir  \n " ;

    cout << info ;
    
    cout << "enter your name and your age " ;

    cin >> myNname >> age  ;

    int saveage ;
    string savename ;

    savename = myNname;
    saveage = age ;

    cout << "wellcome sir " + savename << "your age is " + saveage ; 

    return 0 ;

 
}