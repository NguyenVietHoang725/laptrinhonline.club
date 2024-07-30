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
- Tạo ra tất cả các biểu thức có thể bằng cách thêm dấu '+' giữa các chữ số của S.
- Tính tổng của tất cả các biểu thức.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

ll solve(string s) {
    int n = s.length(); // Độ dài của chuỗi s
    int numExpression = pow(2, n - 1); // Số lượng biểu thức có thể tạo ra (2^(n-1))
    ll res = 0; // Biến lưu tổng kết quả

    for (int i = 0; i < numExpression; i++) {
        ll currentSum = 0; // Tổng tạm thời của biểu thức hiện tại
        ll currentNum = s[0] - '0'; // Số hiện tại bắt đầu từ chữ số đầu tiên của chuỗi

        for (int j = 1; j < n; j++) {
            if ((i >> (j - 1)) & 1) { // Nếu bit thứ (j-1) trong i là 1, thêm dấu '+'
                currentSum += currentNum; // Cộng số hiện tại vào tổng tạm thời
                currentNum = 0; // Đặt lại số hiện tại về 0
            }
            currentNum = currentNum * 10 + (s[j] - '0'); // Cập nhật số hiện tại với chữ số tiếp theo
        }

        currentSum += currentNum; // Cộng số cuối cùng vào tổng tạm thời
        res += currentSum; // Cộng tổng tạm thời vào kết quả
    }

    return res; // Trả về tổng của tất cả các biểu thức
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s; 
    cin >> s;
    
    ll sum = solve(s);

    cout << sum;
    
    return(0);
}