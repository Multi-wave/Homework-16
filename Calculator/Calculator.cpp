#include <iostream>
#include <string>
using namespace std;

double parse(string str, int i, int part) {
    string number;
    if (part == 1) number = str.substr(0, i);
    else number = str.substr(i + 1, str.length() - 1);
    return stod(number);
}

int main()
{
    string example;
    double number1;
    double number2;
    double answer;
    cout << "Enter en example to calculate:" << endl;
    cin >> example;
    int i = 0;
    for (i = 0; i < example.length(); ++i) {
        if (example[i] < '0' && example[i] != '.') break;
    }
    number1 = parse(example, i, 1);
    number2 = parse(example, i, 2);
    if (example[i] == '+') answer = number1 + number2;
    else if (example[i] == '-') answer = number1 - number2;
    else if (example[i] == '*') answer = number1 * number2;
    else answer = number1 / number2;
    cout << "Answer is: " << answer;
}
