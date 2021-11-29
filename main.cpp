#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, a, eps, s, b;
    int n = 1;
    eps = 0.001;
    s = 0;
    b = 1;
    cout << "Введите значение x" << endl;
    cin >> x;
    a = x;
    y = 0.25 * ((((x + 1) / sqrt(x)) * ((exp(sqrt(x)) - exp(-sqrt(x))) / 2)) - ((exp(sqrt(x)) + exp(-sqrt(x))) / 2));
    cout << "y=" << y << endl;
    while (fabs(a) >= eps) {
        b = b * x / (2*n*(2*n+1));
        a = b * (pow(n,2));
        s = s + a;
        n++;
    }
    cout << "s=" << s << endl;

    return 0;
}