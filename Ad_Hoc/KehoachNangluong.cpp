/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên chứa một số nguyên N (1 ≤ N ≤ 1000) đại diện cho tổng số trường hợp kiểm tra.
    + Với mỗi trường hợp, có bốn số nguyên A, B, C, D cách nhau bởi dấu cách:
        - A: năm đầu tiên.
        - B: lượng tiêu thụ điện năng của năm A (B > 0).
        - C: năm thứ hai (C > A).
        - D: lượng tiêu thụ điện năng của năm C (D > 0).
- Output:
    + Với mỗi trường hợp kiểm tra, in ra tỷ lệ tăng trưởng điện năng giữa hai năm A và C. Tỷ lệ này được tính với hai chữ số thập phân, không làm tròn.

<-- Phân tích đề bài -->
- Dữ liệu đầu vào cung cấp lượng tiêu thụ điện năng của hai năm khác nhau.
- Cần tính toán tỷ lệ tăng trưởng trung bình giữa hai năm, công thức là:
    + Tỷ lệ tăng trưởng = (D - B) / (C - A).
    + D là mức tiêu thụ điện năng của năm C.
    + B là mức tiêu thụ điện năng của năm A.
    + (C - A) là khoảng cách giữa hai năm.
- Sử dụng phép tính này cho từng trường hợp kiểm tra để tính tỷ lệ tăng lên hàng năm.

<-- Xác định hướng giải -->
- Sử dụng kiểu `long` để lưu các giá trị năm và lượng tiêu thụ điện năng.
- Sử dụng kiểu `double` để tính tỷ lệ tăng trưởng.
- Sử dụng hàm `fixed` và `setprecision(2)` để đảm bảo hiển thị đúng 2 chữ số thập phân cho mỗi tỷ lệ.
- Trong trường hợp cần xử lý chính xác đến hai chữ số thập phân, có thể sử dụng phép nhân với 100 và phép chia lại để đảm bảo độ chính xác.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

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

    while(t--) {
        long a, b, c, d;
        cin >> a >> b >> c >> d;
        double s = floor((d-b)/(float)(c-a) * 100) / 100;
        cout << fixed << setprecision(2) << s;
    }
    
    return(0);
}