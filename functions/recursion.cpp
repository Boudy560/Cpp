#include <iostream>

using namespace std ;

/*
The developer should be very careful with recursion as it can be quite easy to slip into writing a function which never terminates
, or one that uses excess amounts of memory or processor power. However,
 when written correctly recursion can be a very efficient and mathematically-elegant approach to programming
*/

int sum(int num)
{
    if(num > 0)
    {
        return num + sum(num - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int res, number = 10 ;

    res = sum(number);

    cout << res << "\n"; // output is 55
}
/*
Example Explained

When the sum() function is called, it adds parameter k to the sum of all numbers smaller than k and returns the result. When k becomes 0, the function just returns 0. When running, the program follows these steps:
10 + sum(9)
10 + ( 9 + sum(8) )
10 + ( 9 + ( 8 + sum(7) ) )
...
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0 
*/