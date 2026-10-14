
#include <iostream>
#include <cmath>

using namespace std;

double p(const double x);
double calculateC(const double s);

int main()
{
    double s;
    cout << "s = ";
    cin >> s;

    cout << "c = " << calculateC(s) << endl;

    return 0;
}

double p(const double x)
{
    return 1 + sin(x) * sin(x);
}

double calculateC(const double s)
{
    double p1 = p(1 + s * s);
    double p2 = p(1 - s * s * s);
    double p3 = p(10 * s);

    return (p1 * p1 + p2 * p2 * p2) / (1 + p3);
}
