/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên chứa hai số nguyên n và k (1 <= n <= 10^3).
    + Dòng thứ hai chứa n số nguyên a1, a2, ..., an với giá trị tuyệt đối không vượt quá 10^9.
- Output:
    + Một số nguyên là quãng đường di chuyển ít nhất để thu hoạch k cây nấm.

<-- Phân tích đề bài -->
- Tichpx muốn thu hoạch k cây nấm từ n cây, trong đó các cây nấm được sắp xếp theo trục tọa độ.
- Mục tiêu là tính toán quãng đường ngắn nhất để thu hoạch k cây nấm liên tiếp, xuất phát từ vị trí gốc tọa độ (tức là 0).
- Chúng ta cần xác định các cây nấm sao cho tổng khoảng cách di chuyển là ít nhất, có thể di chuyển từ trái qua phải hoặc từ phải qua trái.

<-- Xác định hướng giải -->
1. Đọc vào n và k.
2. Lưu các tọa độ của n cây nấm vào mảng a.
3. Sắp xếp mảng a theo thứ tự tăng dần để dễ dàng tính toán quãng đường ngắn nhất.
4. Duyệt qua các khoảng k cây liên tiếp:
    + Tính quãng đường di chuyển từ cây đầu tiên đến cây cuối cùng trong khoảng đó.
    + So sánh quãng đường khi bắt đầu từ điểm gần nhất (trái hoặc phải) với gốc tọa độ.
5. Cập nhật quãng đường nhỏ nhất trong các trường hợp.
6. In ra kết quả là quãng đường nhỏ nhất.
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

    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);

    ll res = 1e18, sumr, suml, sum;

    for ( int i = 0 ; i <= n - k ; i++ ) {
        sum = a[i+k-1] - a[i];
        sumr = abs(a[i+k-1]);
        suml = abs(a[i]);
        sum = min (sum + suml, sum + sumr);
        res = min (sum, res);
    }
    cout << res;
    
    return(0);
}