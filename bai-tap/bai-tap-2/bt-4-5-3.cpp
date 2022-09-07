#include <iostream>
#include <polynomial.h>
using namespace std;

int main () 
{
    Polynomial p;
    p.read_input();
    float x;
    cout << "Nhap x: ";
    cin >> x;
    cout << "P(x) = " << p.calculate(x) << endl;
    return 0;
}