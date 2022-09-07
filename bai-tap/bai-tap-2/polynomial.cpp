// 20880040
#include <iostream>
#include <limits>
#include <polynomial.h>
using namespace std;

void Polynomial::read_input ()
{
    // degree should be a natural number 0 - 99
    int degree_input;
    cout << "Nhap bac da thuc (n la so tu nhien, 0 <= n <= 99): ";
    cin >> degree_input;
    // validate input
    while (degree_input < 0 | degree_input > 99 | !cin.good())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Nhap bac da thuc (n la so tu nhien, 0 <= n <= 99): ";
        cin >> degree_input;
    };
    degree = degree_input;


    for (int i = 0; i <= degree; i++) {
        cout << "Nhap he so bac " << i << ": ";
        cin >> coefficients[i];
    }
}

float Polynomial::calculate(float x) 
{
    if (degree == 0) {
        return coefficients[0];
    } else {
        float result = coefficients[degree];
        for (int i = degree; i > 0; i--) {
            result = (result * x + coefficients[i-1]);
        }
        return result;
    }
}
