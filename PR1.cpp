// Lab 5_1
// Варіант 29
#include <iostream>
#include <cmath>

using namespace std;

double p(const double x);

int main()
{
    double s;
    cout << "s = ";
    cin >> s;

    double p1 = p(1 + s * s);
    double p2 = p(1 - s * s * s);
    double p3 = p(10 * s);

    double res = (p1 * p1 + p2 * p2 * p2) / (1 + p3);

    cout << "c = " << res << endl;

    return 0;
}

double p(const double x)
{
    return 1 + sin(x) * sin(x);
}