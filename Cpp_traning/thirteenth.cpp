#include <iostream>
using namespace std;
int main()
{
    int n,dig,rev=0;
    cout<<"please enter the number:";
    cin>>n;
    while(n>0)
    {
        dig=n%10;
        cout<<dig<<"\n";
        n=n/10;
        rev=rev*10+dig;
    }
    cout << rev;
}