#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

int main()
{
    double whole;
    std::string str;
    std::cout << "Enter a whole part of number: ";
    std::cin >> whole;
    std::cout << "Enter a fractional part of number: ";
    std::cin >> str;
    int temp = stoi(str);
    whole += (double)temp/pow(10,str.size());
    std::cout << std::setprecision(13) <<  "Number = " << whole;
}
