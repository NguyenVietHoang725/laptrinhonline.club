/*
<-- Input/Output -->
- Input:
    + Dòng duy nhất của đầu vào chứa bốn số nguyên k2, k3, k5 và k6 -
     số chữ số 2, 3, 5 và 6 tương ứng (0 ≤ k2, k3, k5, k6 <=5.10^6)
- Output:
    + In một số nguyên - tổng số tối đa có thể có của các số nguyên 
    yêu thích của Anton có thể được tạo bằng các chữ số từ hộp.

<-- Xác định hướng giải -->
    + Tìm số nhỏ nhất trong 3 số k2, k5 và k6 -> xác định được số 256 tạo được
    bởi vì ưu tiên 256 sẽ cho tổng có giá trị lớn hơn là ưu tiên 32
    + Giảm số lượng số 2 đi và lấy min của k2 và k3 -> xác định được số 32 tạo được
*/

#include <iostream>
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    ll res = 0;
    ll min256 = min({k2, k5, k6});
    res += 256*min256;
    
    k2 -= min256;
    ll min32 = min(k2, k3);
    res += 32*min32;

    cout << res;
    
    return(0);
}