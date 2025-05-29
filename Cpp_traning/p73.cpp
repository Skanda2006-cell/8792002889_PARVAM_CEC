#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream Myfile("hello.txt");
    Myfile << "Hello, World!" << endl;
    Myfile.close();
    return 0;
}