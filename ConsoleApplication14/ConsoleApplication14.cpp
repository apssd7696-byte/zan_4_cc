#include <iostream>
#include <cmath>

int main() {
    double x = 2.0;
    double sum = 0.0;
    double term = -1.0 / (2.0 * 4.0);
    double fact = 2.0;
    double x_pow = 1.0;
    int i = 1;

    while (fabs(term) > 1e-12) {
        sum += term;
        ++i;
        fact *= (2 * i - 1) * (2 * i);
        x_pow *= x * x;
        term = ((i % 2 == 0) ? 1.0 : -1.0) * x_pow / (fact * (2 * i + 2));
    }

    std::cout << "c) Sum = " << sum << std::endl;
    return 0;
}