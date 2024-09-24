/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên chứa hai số nguyên dương n và k.
        * n: số thửa ruộng cà chua (1 ≤ n ≤ 10^5).
        * k: độ giảm sản lượng trên mỗi thửa ruộng của từng ngày (1 ≤ k ≤ 10^5).
    + Dòng tiếp theo chứa n số nguyên dương, là sản lượng cà chua ban đầu của mỗi thửa ruộng. Các giá trị này không vượt quá 10^9.
- Output:
    + Một số nguyên là giá trị sản lượng lớn nhất mà Titi có thể thu hoạch được.

<-- Phân tích đề bài -->
- Mỗi ngày, Titi chỉ có thể thu hoạch cà chua trên một thửa ruộng, và sản lượng trên các thửa ruộng khác sẽ giảm đi k đơn vị mỗi ngày chưa được thu hoạch.
- Nhiệm vụ là tìm ra thứ tự thu hoạch các thửa ruộng để tổng sản lượng thu hoạch là lớn nhất.
- Do sản lượng sẽ giảm nhanh, ta cần ưu tiên thu hoạch những thửa ruộng có sản lượng ban đầu cao nhất.

<-- Xác định hướng giải -->
1. Đọc vào số lượng thửa ruộng n và độ giảm sản lượng k mỗi ngày.
2. Lưu các sản lượng ban đầu của từng thửa ruộng vào mảng a.
3. Sắp xếp mảng a theo thứ tự giảm dần để ưu tiên thu hoạch các thửa ruộng có sản lượng cao nhất trước.
4. Duyệt qua từng thửa ruộng và cộng sản lượng vào tổng nếu giá trị còn lại của thửa ruộng lớn hơn 0.
5. Mỗi lần sau khi thu hoạch, giảm sản lượng của các thửa ruộng còn lại đi k đơn vị.
6. Dừng lại khi tất cả các thửa ruộng có sản lượng không còn khả thi (≤ 0).
7. In ra tổng sản lượng thu hoạch được.
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
    
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n, greater<int>());

    int res = 0;

    int it = 0;
    while (it < n) {
        if (a[it] <= 0) break;
        res += a[it];
        for (int i = it + 1; i < n; i++) {
            a[i] -= k;
        }
        it++;
    }
    cout << res;
    
    return(0);
}