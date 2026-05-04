#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    cout << fixed << setprecision(4);
    double x = 2.0;
    double sum = 0.0;
    double term;
    double fact = 1.0;
    double x_pow = 1.0;
    int i = 0;

    while (true) {
        i++;
        if (i == 1) fact = 2.0;
        else fact *= (2 * i - 1) * (2 * i);
        if (i > 1) x_pow *= x * x;
        term = (pow(-1,i)*x_pow)/(fact*(2*i+2));
        if (fabs(term) < 1e-12) break;
        sum += term;
    }
    cout << "Результат:" << sum << endl;
}
