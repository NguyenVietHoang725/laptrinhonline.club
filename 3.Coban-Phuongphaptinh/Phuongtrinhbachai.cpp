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
    
    float a, b, c;
    cin >> a >> b >> c;

    float delta = b*b - 4*a*c;
    cout << fixed << setprecision(3);

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                cout << "vo so nghiem";
            else 
                cout << "vo nghiem";
        } else {
            cout << (-c) / b;
        }
    } else {
        if (delta < 0)
            cout << "vo nghiem";
        else if (delta == 0)
            cout << (-b) / (2*a);
        else {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            (x1 < x2) ? cout << x1 << endl << x2 : cout << x2 << endl << x1;
        }
    }
    
    return(0);
}