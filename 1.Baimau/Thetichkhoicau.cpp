#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float n, S = 1;
    cin >> n;
    
    S = (4.0 / 3) * 3.14159 * pow(n, 3);
    cout << "VOLUME = "<< fixed << setprecision(3) << S;
    
    return 0;
}