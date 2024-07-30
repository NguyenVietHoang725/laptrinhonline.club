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
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define ull unsigned long long
#define endl '\n'

// Hàm tìm BCNN của hai số a và b
ull lcm(ull a, ull b) {
    return (a * b) / __gcd(a, b);
}

// Hàm tìm BCNN của ba số a, b, và c
ull lcm(ull a, ull b, ull c) {
    return lcm(a, lcm(b, c));
}


__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    ull res;

    if (n <= 2) {
        res = n; // Nếu n <= 2 thì chỉ có thể là chính nó
    } else if (n % 2 != 0) {
        res = lcm(n, n-1, n-2); // Nếu n lẻ, chọn n, n-1, n-2
    } else {
        // Nếu n chẵn, kiểm tra hai khả năng
        res = max(lcm(n, n-1, n-3), lcm(n-1, n-2, n-3));
    }

    cout << res;
    
    return(0);
}