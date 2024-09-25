/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên gồm 2 số nguyên dương n, k (1 <= n, k <= 100000): 
      * n là số lượng tờ tiền mà ông Bụt cho Duy.
      * k là số tờ tiền tối đa mà Duy được phép nhặt.
    + Dòng thứ hai gồm n số nguyên dương a[i] (1 <= a[i] <= 1000): 
      * a[i] là giá trị của tờ tiền thứ i.

- Output:
    + Một số nguyên duy nhất là tổng số tiền lớn nhất mà Duy có thể nhặt được từ k tờ tiền giá trị cao nhất.
    
<-- Phân tích đề bài -->
- Duy muốn nhặt được nhiều tiền nhất, tức là chọn ra k tờ tiền có giá trị lớn nhất từ n tờ tiền có sẵn.
- Với bài toán này, ta cần sắp xếp mảng các tờ tiền theo thứ tự giảm dần và tính tổng k tờ tiền đầu tiên.

<-- Xác định hướng giải -->
1. Đọc n và k từ input.
2. Tạo một mảng a gồm n phần tử để lưu giá trị của từng tờ tiền.
3. Sắp xếp mảng a theo thứ tự giảm dần.
4. Tính tổng của k phần tử đầu tiên trong mảng đã sắp xếp (hoặc n phần tử đầu tiên nếu n < k).
5. In ra kết quả tổng tiền lớn nhất mà Duy có thể nhặt được.
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

    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n, greater<int>());

    int sum = 0;
    for (int i = 0; i < min(n, k); i++) {
        sum += a[i];
    }

    cout << sum;
    
    return(0);
}