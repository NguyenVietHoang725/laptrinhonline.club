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

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    float a, b; // Phương trình: ax + b = 0
    cin >> a >> b;

    if (a == 0 && b == 0) cout << "Vo So Nghiem";
    else if (a == 0 && b != 0) cout << "Vo Nghiem";
    else {
        float res = -1 * b / a;
        cout << fixed << setprecision(3);
        cout << res;
    }
    
    return(0);
}