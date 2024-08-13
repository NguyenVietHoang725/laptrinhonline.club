/*
<-- Input/Output -->
- Input:
    + Số nguyên n (0 ≤ n ≤ 16)
- Output:
    + In ra số tiền mà ông chủ trả cho Bằng.

<-- Phân tích đề bài -->


<-- Xác định hướng giải -->

*/

#include <iostream>
#include <cmath>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    cin >> n;

    ll res = 1;

    for (int i = 1; i <= n; i++) {
        res *= i;
    }

    cout << res;
    
    return(0);
}