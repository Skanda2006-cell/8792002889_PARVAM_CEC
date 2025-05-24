#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float average;
    std::cout << " NAME: R SKANDA HERLE \n YEAR:2024-28\n BRANCH:ISE\n SEM:2ND\n COLLEGE:CEC";
    std::cout << " \n**************************************************************************************************\n";
    cout << " marks for subject 1: ";
    cin >> m1;
    cout << " marks for subject 2: ";
    cin >> m2;
    cout << " marks for subject 3: ";
    cin >> m3;
    cout << " marks for subject 4: ";
    cin >> m4;
    cout << " marks for subject 5: ";
    cin >> m5;
    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;
    std::cout << "\n**************************************************************************************************\n";
    cout << "Total Marks = " << total;
    cout << "\tAverage = " << average;
    if (average >= 90) 
    {
        cout << "\tGrade = A";
        cout << "\n RESULT:student have passed";
    } 
    else if (average >=70) 
    {
        cout << "\tGrade = B";
        cout << "\n RESULT:student have passed";
    } 
    else if (average >=60)
    {
        cout << "\tGrade = C";
        cout << "\n RESULT:student have passed";
    }
    else
    {
        cout << "\tGrade = D";
        cout << "\nRESULT=student have failed";
    }
    
    return 0;
}