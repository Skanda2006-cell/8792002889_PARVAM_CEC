#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter the age";
    cin >>age;
    try
    {
        if (age<10)
        {
            throw (age);
        }
        else
        {
            cout<<"access granted";
        }
        
        
    }
    catch(int a)
    {
        cout<<"acess denied:minimun age must be 18"<<a;
    }
     return 0;
} 