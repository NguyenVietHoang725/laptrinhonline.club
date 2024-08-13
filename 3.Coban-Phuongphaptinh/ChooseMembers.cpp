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


using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

// Hàm tính giai thừa theo cách lặp
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Hàm tính tổ hợp C(n, k)
int combination(int n, int k) {
    if (k > n) return 0; // Không có tổ hợp hợp lệ nếu k > n
    if (k == 0 || k == n) return 1; // C(n, 0) = C(n, n) = 1

    // Tính C(n, k) = n! / (k! * (n - k)!)
    // Tối ưu bằng cách giảm số lần nhân
    int numerator = 1; // tử số
    int denominator = 1; // mẫu số
    for (int i = 0; i < k; ++i) {
        numerator *= (n - i);
        denominator *= (i + 1);
    }
    return numerator / denominator;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n; // Số lượng học sinh

    // Tính số cách chọn 3 người từ n học sinh
    int res = combination(n, 3);
    cout << res;
    
    return(0);
}