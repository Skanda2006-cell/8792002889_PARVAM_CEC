#include <iostream>
using namespace std;
int main() 
{
    int r, c;    
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    int matrix1[r][c], matrix2[r][c], sum[r][c];
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            cin >> matrix2[i][j];
        }
    }
    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Sum of matrices:\n";
    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            cout << sum[i][j] << "\t";
        }
        cout ;
    }
    
    return 0;
}