/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên chứa một số nguyên n (1 < n <= 10^6), là số lượng phần tử trong dãy.
    + Dòng thứ hai chứa n số nguyên, mỗi số có giá trị tuyệt đối không vượt quá 10^9.
    
- Output:
    + Một số nguyên duy nhất là kết quả của tích lớn nhất giữa hai phần tử trong dãy số.

<-- Phân tích đề bài -->
- Bài toán yêu cầu tìm tích lớn nhất của hai phần tử trong dãy số nguyên.
- Các trường hợp cần lưu ý:
    1. Tích lớn nhất có thể là tích của hai số lớn nhất trong dãy (số dương).
    2. Tích lớn nhất cũng có thể là tích của hai số âm nhỏ nhất (vì tích của hai số âm là số dương).
    
<-- Xác định hướng giải -->
1. Đọc vào số lượng phần tử `n` và dãy số.
2. Sử dụng `std::sort` để sắp xếp dãy số theo thứ tự tăng dần.
3. Sau khi sắp xếp, xác định hai tích tiềm năng:
    - Tích của hai số âm nhỏ nhất (có thể là hai số đầu tiên trong mảng sau khi sắp xếp).
    - Tích của hai số dương lớn nhất (có thể là hai số cuối cùng trong mảng sau khi sắp xếp).
4. Tính toán hai giá trị tích lớn nhất từ hai trường hợp trên.
5. Kết quả là giá trị lớn nhất trong hai tích vừa tính.
6. In ra kết quả.

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
    
    int n;
    cin >> n;
    ll *a = new ll[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    ll maxAm = a[0] * a[1];
    ll maxDuong = a[n-1] * a[n-2];

    ll res = max(maxAm, maxDuong);
    cout << res;
    
    return(0);
}