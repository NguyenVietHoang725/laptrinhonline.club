#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3.14159

int main()
{
    double r;
    cin >> r;

    double res = PI * r * r;
    cout << fixed << setprecision(4) << "A=" << res;
}