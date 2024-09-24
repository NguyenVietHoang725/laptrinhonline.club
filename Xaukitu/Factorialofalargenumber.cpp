/*
<-- Input/Output -->
- Input:
    + Một số nguyên dương n (1 <= n <= 1000) - số mà bạn muốn tính giai thừa n!.
- Output:
    + In ra giai thừa của n, tức là n!.

<-- Phân tích đề bài -->
- Đề bài yêu cầu tính giai thừa của một số nguyên n lớn (có thể lên đến 1000).
- Giai thừa của n (n!) là tích của tất cả các số nguyên dương từ 1 đến n.
- Kết quả giai thừa có thể rất lớn, vì vậy không thể lưu trữ nó trong các kiểu dữ liệu nguyên cơ bản (như int hay long long) mà cần phải sử dụng một cấu trúc dữ liệu có khả năng lưu trữ nhiều chữ số (như vector).

<-- Xác định hướng giải -->
- Sử dụng vector để lưu trữ từng chữ số của kết quả giai thừa n!:
    + Khởi tạo vector với giá trị ban đầu là 1 (vì 0! = 1).
    + Sử dụng vòng lặp để nhân từng số từ 2 đến n với các chữ số trong vector.
    + Xử lý phép nhân theo cách thủ công, vì có thể có phần dư khi nhân.
    + Sau khi hoàn thành, in ra kết quả từ vector theo thứ tự đúng (từ hàng cao đến hàng đơn vị).
*/

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
    
    long n, memo;
    cin >> n;
    vector<long> A(1, 1);
    for (int i = 2; i <= n; i++) {
        memo = 0;
        for (auto &a:A) {
            memo = memo + a*i;
            a = memo % 10;
            memo /= 10;
        }
        while (memo) {
            A.push_back(memo % 10);
            memo /= 10;
        }
    }
    for (auto it=A.rbegin(); it!=A.rend(); it++) cout << *it;
    
    return(0);
}