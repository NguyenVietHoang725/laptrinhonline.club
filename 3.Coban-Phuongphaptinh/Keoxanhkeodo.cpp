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

    int t;
    cin >> t;

    while (t--) {
        ll r, b, d;
        cin >> r >> b >> d;

        // Đảm bảo r luôn là số viên kẹo nhiều hơn hoặc bằng b
        if (r < b) {
            swap(r, b);
        }

        // Kiểm tra điều kiện chia kẹo vào các gói
        // Tối đa số gói có thể được chia sẽ là b
        // Kiểm tra số kẹo đỏ không vượt quá (số kẹo xanh + 1) * (d + 1)
        if (r <= b * (d + 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}



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