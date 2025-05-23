#include <iostream>
int main()
{
    int total,m1,m2,m3,m4,m5;
    float avg;
    std::cout << "enter m1:";
    std::cin >>m1;
    std::cout << "enter m2:";
    std::cin >>m2;
    std::cout << "enter m3:";
    std::cin >>m3;
    std::cout << "enter m4:";
    std::cin >>m4;
    std::cout << "enter m5:";
    std::cin >>m5;
    total=m1+m2+m3+m4+m5;
    avg=total/5.0;
    std::cout << "\ttotal="<<total;
    std::cout << "\taverage="<<avg;    
}
