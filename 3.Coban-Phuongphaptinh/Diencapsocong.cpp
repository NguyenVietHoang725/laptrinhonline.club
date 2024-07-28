#include <iostream>
#include <vector>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    vector<int> sequence;
    int n;
    
    // Đọc dãy số đầu vào
    while (cin >> n) {
        sequence.push_back(n);
    }
    
    int size = sequence.size();
    int diff = 0;
    int first_non_zero = -1, last_non_zero = -1;
    
    // Tìm số khác 0 đầu tiên và cuối cùng
    for (int i = 0; i < size; i++) {
        if (sequence[i] != 0) {
            if (first_non_zero == -1) first_non_zero = i;
            last_non_zero = i;
        }
    }
    
    // Tính công sai
    diff = (sequence[last_non_zero] - sequence[first_non_zero]) / (last_non_zero - first_non_zero);
    
    // Xác định giá trị đầu tiên của dãy
    int start_value = sequence[first_non_zero] - first_non_zero * diff;
    
    // Thay thế các số 0 và điền vào dãy
    for (int i = 0; i < size; i++) {
        sequence[i] = start_value + i * diff;
    }
    
    // In kết quả
    for (int i = 0; i < size; i++) {
        cout << sequence[i];
        if (i < size - 1) cout << " ";
    }
    cout << endl;
    
    return 0;
}

/*
<-- Input/Output -->
- Input:
    + Một dãy số nguyên có từ 3 tới 10^6 phần tử trong khoảng [0, 10^9]
- Output:
    + Dãy số sau khi đã thay các số 0.

<-- Phân tích đề bài -->
- Cho dãy số tự nhiên (u)
- Yêu cầu: Thay thế các số 0 trong dãy bởi một số tự nhiên bất kì để thu được cấp số cộng
- Chú ý: Dãy số đã cho có ít nhất hai số khác, và luôn có duy nhất một cách thay tạo thành cấp số cộng.

<-- Xác định hướng giải -->
- Có khả năng số đầu tiên trong dãy là số 0 (Bắt buộc phải thay thế các số 0) -> Tìm số khác 0 đầu tiên và cuối cùng -> Hai điểm chắc chắn của cấp số cộng.
- Tiếp theo ta tính công sai dựa trên công thức tổng quát: d = (a_n - a_1) / (n - 1)
    Trong đó:  
        + a_n là số khác 0 cuối cùng.
        + a_1 là số khác 0 đầu tiên.
        + (n - 1) là khoảng cách giữa chúng.
- Xác định giá trị đầu tiên của dãy (Xử lý trường hợp số đầu tiên là 0)
    + Chúng ta tính ngược từ số khác 0 đầu tiên để tìm giá trị của phần tử đầu tiên trong cấp số cộng.
    + Công thức này dựa trên tính chất của cấp số cộng: a_n = a_1 + (n-1)d, trong đó chúng ta biết a_n (số khác 0 đầu tiên), n (vị trí của số đó), và d (công sai).
- Cuối cùng, ta thay thế các số 0 và điền vào dãy:
    + Áp dụng công thức tổng quát của CSC: a_n = a_1 + (n-1)d, trong đó a_1 là start_value, n-1 là i (vì i bắt đầu từ 0), và d là diff.
*/