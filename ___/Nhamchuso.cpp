/*
<-- Input/Output -->
- Input:
    + Một dòng chứa hai chuỗi số nguyên A và B, mỗi chuỗi không vượt quá 16 chữ số.
- Output:
    + In ra hai số nguyên trên một dòng, số đầu tiên là tổng lớn nhất có thể nhận được và số thứ hai là tổng nhỏ nhất có thể nhận được.

<-- Phân tích đề bài -->
- Tèo có thể ghi nhầm ký tự '5' thành '6' hoặc ngược lại trong số A và B.
- Cần tính tổng nhỏ nhất và lớn nhất có thể có được từ phép cộng của A và B, với các phép thay đổi ký tự '5' thành '6' và '6' thành '5' trong cả hai số.

<-- Xác định hướng giải -->
1. Đọc hai chuỗi số nguyên A và B từ đầu vào.
2. Xây dựng hàm `replaceNum` để thay thế ký tự trong chuỗi số, và chuyển chuỗi thành số nguyên `long long`.
    - Thay thế tất cả các ký tự '5' bằng '6' và ngược lại để tìm số nguyên tương ứng.
3. Tính toán tổng lớn nhất và nhỏ nhất:
    - Tổng lớn nhất: Thay thế tất cả các ký tự '5' bằng '6' trong cả hai số và cộng kết quả.
    - Tổng nhỏ nhất: Thay thế tất cả các ký tự '6' bằng '5' trong cả hai số và cộng kết quả.
4. In kết quả tổng lớn nhất và nhỏ nhất.

- Chú ý: Đảm bảo rằng các thao tác thay thế ký tự và chuyển đổi chuỗi thành số nguyên được thực hiện chính xác để có kết quả đúng.

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

ll replaceNum(const string& a, char num1, char num2) {
    string rep = a;
    replace(rep.begin(), rep.end(), num1, num2);
    
    ll rep_num = stoll(rep);

    return rep_num;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string a, b;
    cin >> a >> b;
    ll min_a = replaceNum(a, '6', '5');
    ll max_a = replaceNum(a, '5', '6');
    ll min_b = replaceNum(b, '6', '5');
    ll max_b = replaceNum(b, '5', '6');

    cout << max_a + max_b << " " << min_a + min_b;
    
    return(0);
}