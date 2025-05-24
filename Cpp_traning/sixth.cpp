//factorial
#include<iostream>
using namespace std;
int main()
{
   int n,fact=1;
    cout << "enter the number=";
    cin >>n;
    if(n<0)
    {
        cout << "please enter the positive number";
    }
    else
    {
       for (int i = 1; i <= n; i++) 
        {
          fact = fact * i;
        }
        cout << "Factorial of " << n << " is: " << fact;
    }
    
return 0;
}