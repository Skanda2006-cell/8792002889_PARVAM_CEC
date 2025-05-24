//compound interest
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double principal, rate, time, amount, compoundInterest;
    cout << "Enter principal amount (Rs): ";
    cin >> principal;
    cout << "Enter annual interest rate (%): ";
    cin >> rate;
    cout << "Enter time period (years): ";
    cin >> time;
    amount = principal * pow(1 + rate / 100, time);
    compoundInterest = amount - principal;
    cout << "\nResults:\n";
    cout << "Principal amount: Rs " << principal;
    cout << "Rate of interest: " << rate << "%";
    cout << "Time period: " << time << " years";
    cout << "--------------------------------";
    cout << "Compound Interest: Rs " << compoundInterest;
    cout << "Total Amount: Rs " << amount;
    return 0;
}