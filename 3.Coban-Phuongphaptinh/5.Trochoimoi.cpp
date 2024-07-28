#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

int solve_max_ones(int n, vector<int>& arr) {
    // Đếm số lượng số 1 ban đầu
    int initial_ones = 0;
    for (int i = 0; i < n; i++) {
        initial_ones += arr[i];
    }
    
    // Tính toán mảng prefix sum để tối ưu hóa việc đếm
    vector<int> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i-1] + arr[i-1];
    }
    
    int max_change = -n; // Khởi tạo với giá trị âm để đảm bảo luôn có sự thay đổi
    
    // Xét tất cả các cặp (i, j)
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            // Số lượng số 1 trong đoạn [i, j]
            int ones_in_range = prefix_sum[j] - prefix_sum[i-1];
            // Số lượng số 0 trong đoạn [i, j]
            int zeros_in_range = (j - i + 1) - ones_in_range;
            
            // Sự thay đổi nếu đảo ngược đoạn này
            int change = zeros_in_range - ones_in_range;
            
            // Cập nhật max_change nếu tìm thấy sự thay đổi lớn hơn
            max_change = max(max_change, change);
        }
    }
    
    // Số lượng tối đa của số 1 sau khi biến đổi
    return initial_ones + max_change;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = solve_max_ones(n, arr);
    cout << result << endl;
    
    return 0;
}

/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên là số nguyên n (1 <= n <= 100)
    + Dòng thứ hai là n số nguyên a1, a2, ..., an có giá trị 0 hoặc 1
- Output:
    + Số nguyên duy nhất là số lượng tối đa có thể của chữ số 1 sau
    chính xác 1 bước biến đổi.

<-- Phân tích đề bài -->
- Viết n số nguyên, mỗi số có giá trị 0 hoặc 1.
- Thực hiện 1 bước duy nhất:
    + Chọn 2 số nguyên i, j (1 <= i <= j <= n)
    + Thay đổi tất cả giá trị a[k] trong phạm vi [i, j] (i <= k <=j)
    + Thay đổi giá trị của x có nghĩa là thay giá trị x = 1 - x
- Chú ý: Bắt buộc phải có 1 bước biến đổi.
- Sử dụng kỹ thuật "Prefix Sum" để tính nhanh số lượng số 1 trong bất kỳ đoạn nào.
- Công thức tính toán chính:
    + Đối với mỗi đoạn [i, j]:
        * Số 1 trong đoạn = prefix_sum[j] - prefix_sum[i-1]
        * Số 0 trong đoạn = (j - i + 1) - (số 1 trong đoạn)
        * Sự thay đổi = (số 0 trong đoạn) - (số 1 trong đoạn)
    + Lý do: Khi đảo ngược, số 0 sẽ trở thành 1 và số 1 sẽ trở thành 0

<-- Thuật toán sử dụng -->
- Prefix Sum (Tổng tiền tố) của một mảng A là một mảng mới P, trong đó
P[i] là tổng của tất cả các phần tử từ A[0] đến A[i]
- Công thức: P[i] = A[0] + A[1] + ... + A[i]
- Cách tính Prefix Sum:
    + Khởi tạo P[0] = A[0]
    + Với i từ 1 đến n - 1: P[i] = P[i-1] + A[i]
- Ứng dụng chính: Tính nhanh tổng của bất kỳ đoạn con nào trong mảng gốc.
- Công thức tính tổng đoạn con: 
    + Tổng của đoạn [L, R] trong mảng gốc A = P[R] - P[L-1]
    + Lưu ý: Nếu L = 0, ta chỉ cần lấy P[R]
*/