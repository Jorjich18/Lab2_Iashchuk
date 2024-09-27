#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

int main()
{
    double a, b, s, j, pi = 3,14;
    cout << "Input a: "; cin >> a;
    cout << "Input b^ "; cin >> b;
    if (a == b) {s = a * b; j = pi * pow(a, b); cout << "Answers: " << "\ns = " << s << "\nj = " << j << endl; break;}
    if (a > b) {s = a * a - b; j = 1./3 * pi * sqrt(a + b); cout << "Answers: " << "\ns = " << s << "\nj = " << j << endl; break;}
    if (a < b) {s = b * b + a; j = 10 * pow (pi, a) / (b * b); cout << "Answers: " << "\ns = " << s << "\nj = " << j << endl; break;}
    return 0;
}