/*
<-- Input/Output -->
- Input:
    + Số bản sao cuốn sách của Kate viết được bán, kiểu số nguyên
    + 
- Output:
    + Dòng duy nhất là số tiền theo đơn vị dollar
    + 

<-- Phân tích đề bài -->
- Mỗi bản sao nhận được 50 cent.
- Mỗi 50 bản sao nhận được 5 dollar.
- Yêu cầu: Tính tiền nhuận bút theo dollar
biết rằng 100 cent = 1 dollar
- Lưu ý, nếu kết quả là một số nguyên thì 
giá trị in ra màn hình không cần hiển thị phần thập phân, 
nếu kết quả là số thực, thì lấy 1 chữ số của phần thập phân.
- Nếu đầu vào không hợp lệ, in ra màn hình ERROR.

<-- Xác định hướng giải -->

*/

#include <iostream>
#include <iomanip>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a;
    cin >> a;

    int bonus = a / 50;

    int cent = a * 50 + bonus * 500;

    if (cent % 100 == 0) cout << cent / 100;
    else {
        float dollar = cent / 100.0;
        cout << fixed << setprecision(1) << dollar;
    }

    return 0;
    
    return(0);
}