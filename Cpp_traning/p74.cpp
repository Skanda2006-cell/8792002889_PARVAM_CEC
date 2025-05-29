#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream Myfile("E:\\parvam\\8792002889_PARVAM_CEC\\Cpp_traning\\h.txt");
    Myfile << "Hello, World!" << endl;
    Myfile.close();
    return 0;
}