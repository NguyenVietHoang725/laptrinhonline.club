#include <iostream>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int chuvi, cheo;
    cin >> chuvi >> cheo;
    
    int res = ((chuvi / 2) * (chuvi / 2) - cheo * cheo) / 2;

    cout << res;
    
    return(0);
}

/*
<-- Input/Output -->
- Input:
    + 2 số nguyên <= 1000. Số thứ nhất là chu vi, số thứ hai là độ dài đường chéo.
- Output:
    + Diện tích hình chữ nhật

<-- Phân tích đề bài -->
- Gọi lần lượt:
    + Chiều dài: a
    + Chiều rộng: b;
    + Chu vi: a + b -> Nửa chu vi: p = (a + b) / 2;
    + Đường chéo: d

<-- Xác định hướng giải -->
- Theo định lý Pitago, ta suy ra: d^2 = a^2 + b^2
- Thêm bớt, ta được: d^2 = (a + b)^2 - 2ab. -> Diện tích là ab -> Rút ab sẽ tính được diện tích.
- Tương đương: ab = ((a + b)^2 - d^2) / 2
*/