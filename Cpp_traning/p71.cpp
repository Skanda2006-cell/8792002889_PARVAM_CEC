#include <iostream>
#include<math.h>
#include<vector>
#include<bits/stdc++.h>
#include<stdexcept>
using namespace std;
int main()
{
   vector<int>a={10,20,30};
   try
   {
    cout<<a.at(5)<<endl; 
   }
   catch(out_of_range e)
   {
    cout<<"caught: "<<e.what();
   }
    return 0;
};