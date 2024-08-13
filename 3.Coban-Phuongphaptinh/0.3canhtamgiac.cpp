/*
<-- Input/Output -->
- Input:
    + 
    + 
- Output:
    + 
    + 

<-- Phân tích đề bài -->


<-- Xác định hướng giải -->

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        double cvi = a + b + c;
        double p = cvi / 2;

        double dtich = sqrt(p * (p-a) * (p-b) * (p-c));

        cout << fixed << setprecision(2) << cvi << endl << dtich;
    } else {
        cout << "khong la tam giac";
    }
    
    return(0);
}