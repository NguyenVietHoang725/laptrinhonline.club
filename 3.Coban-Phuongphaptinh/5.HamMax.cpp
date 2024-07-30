/*
<-- Input/Output -->
- Input:
    + Dòng duy nhất gồm 1 số nguyên n (1 <= n <= 10^10)
- Output:
    + In ra kết quả cần tìm.

<-- Phân tích đề bài -->
- Hàm Max(X, Y) theo định nghĩa mới:
    + X * Y = N
    + Max(X, Y) trả về giá trị lớn nhất của số lượng chữ số của 'X' và 'Y'

<-- Xác định hướng giải -->
- Tìm thừa số của X và Y: Duyệt từ căn bậc 2 của n và giảm dần
    + Bắt đầu từ căn bậc hai vì các cặp thừa số gần với căn bậc 2 thường có số chữ số tương đương nhau.
    Điều này giúp giảm sự khác biệt giữa số lượng chữ số của hai thừa số, giúp tìm ra Max(len(X), len(Y)) nhỏ hơn.
    + Giảm dần từ căn bậc hai vì bắt đầu từ giá trị lớn nhất và giảm dần giúp nhanh chóng tìm ra cặp thừa số có
    số lượng chữ số gần nhau nhất. Ngay khi tìm được một cặp thoả mãn điều kiện n % i == 0, chúng ta dừng vòng lặp
    để tối ưu hoá thời gian thực hiện.
- Tính số lượng chữ số của X và Y:
    + Sử dụng hàm log10 để tính số lượng chữ số của một số => Cho biết chữ số của x trừ 1 (do tính chất của logarit)
    + Ví dụ: log10(1000) = 3, nên số chữ số của 1000 là 3 + 1 = 4
- Tìm giá trị lớn nhất trong số chữ số của X và Y
    + So sánh số lượng chữ số của X và Y, và in ra giá trị lớn hơn
    =? Đây là giá trị của Max(len(X), len(Y))
*/

#include <iostream>
#include <cmath>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n, x, y, i;
    cin >> n;

    for (i = sqrt(n); i > 0; i--) {
        if (n % i == 0) {
            x = i;
            y = n / i;
            break;
        }
    }

    x = log10(x);
    y = log10(y);

    if (x > y) {
        cout << x + 1 << endl;
    } else {
        cout << y + 1 << endl;
    }
    
    return(0);
}