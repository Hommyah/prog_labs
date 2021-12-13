#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double dx, x, y, a, eps, s, b;
    int n = 1, N = 1;
    eps = 0.001;
    x = 0.2;
    dx = fabs(0.2 - 0.8)/9;

    cout << setw(2) << "n";
    cout << setw(2) << "x";
    cout << setw(8) << "s";
    cout << setw(8) << "y" << endl;
    while (N<=10) {
        cout << setw(2) << N << "  ";
        cout << setw(2) << setprecision(1) << x << "  ";
        y = 0.25 * ((((x + 1) / sqrt(x)) * ((exp(sqrt(x)) - exp(-sqrt(x))) / 2)) - ((exp(sqrt(x)) + exp(-sqrt(x))) / 2));
        n = 1;
        a = x;
        b = 1;
        s = 0;
        while (fabs(a) >= eps) {
            b = b * x / (2*n*(2*n+1));
            a = b * (pow(n,2));
            s = s + a;
            n++;
        }
        cout << setw(8) << setprecision(6) << s << "  ";
        cout << setw(8) << setprecision(6) << y << endl ;
        x+=dx;
        N++;

    }

    return 0;
}