/*
<-- Input/Output -->
- Input:
    + Một dòng gồm một số thực R
- Output:
    + Hoặc 1 kết quả “NO CIRCLE” 
    + Hoặc hai dòng tương ứng với chu vi, diện tích hình tròn 
được làm tròn 2 chữ số sau dấu chấm thập phân.

<-- Phân tích đề bài -->
- Tính chu vi và diện tích hình tròn

<-- Xác định hướng giải -->

*/

#include <iostream>
#include <iomanip>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'
#define PI 3.141592

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    double r; 
    cin >> r;

    double c, s;

    if (r < 0) cout << "NO CIRCLE";
    else {
        c = 2 * PI * r;
        s = PI * r * r;

        cout << fixed << setprecision(2) << c << endl << s;
    }
    
    return(0);
}