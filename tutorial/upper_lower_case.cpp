#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char x;
    cin >> x;
    if (isupper(x)) // to chek if the char is upperCase or not
        cout << "Uppercase";
    else
        cout << "Not uppercase.";

    ////////////////////////////////////////////////////////////////////////////////////

    if (islower(x)) // to chek if the char is lowerCase or not
        cout << "Lowercase";
    else
        cout << "Not Lowercase.";
    ////////////////////////////////////////////////////////////////////////////////////

    char res;
    char ch = 'a';
    res = toupper(ch); // to convert lowercase to uppercase
    cout << res;
    ////////////////////////////////////////////////////////////////////////////////////
    
    res = tolower(ch); // to convert uppercase to lowercase
    cout << res;
}