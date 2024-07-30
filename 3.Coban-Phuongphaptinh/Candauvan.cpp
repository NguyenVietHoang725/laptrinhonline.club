/*
<-- Input/Output -->
- Input:
    + Một dòng duy nhất gồm 3 số nguyên n, a, b nằm trong đoạn [1; 10^9]
- Output:
    + Một dòng duy nhất là số lần nhảy ít nhất của anh T để đến được nhà bạn.
    + Trường hợp anh T không thể đến được nhà bạn mình thì in ra -1

<-- Phân tích đề bài -->
- Sử dụng cân đẩu vân đến thăm bạn cách đó n km. 
- Dùng được 2 chiêu:
    + Nhảy ngắn a km.
    + Nhảy dài b km.
- Yêu cầu: Xác định số lần nhảy ít nhất để có thể đến được nhà bạn mình.
- Chú ý: Chỉ đến được nhà bạn khi tổng khoảng cách đi được đúng bằng n. 

<-- Xác định hướng giải -->

*/

#include <iostream>
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

void solve() {
    ll distance, shortJump, longJump;
    cin >> distance >> shortJump >> longJump;

    // Đảm bảo shortJump luôn nhỏ hơn longJump
    if (shortJump > longJump) {
        swap(shortJump, longJump);
    }

    // Tính số lần nhảy dài tối đa có thể thực hiện được
    // => Đây là số lần nhảy tối đa mà chúng ta có thể thực hiện mà không vượt quá khoảng cách cần đi
    ll jumps = distance / longJump;

    // Tính khoảng cách còn lại sau khi thực hiện các nhảy dài
    ll remaining = distance % longJump;

    // Kiểm tra xem khoảng cách còn lại có thể được chia hết cho nhảy ngắn không
    if (remaining % shortJump == 0) {
        // Nếu có => Suy ra được kết quả là: số lần nhảy dài + số lần nhảy ngắn cần thiết
        jumps += (remaining / shortJump);
        cout << jumps << endl;
        return;
    }

    // Nếu không chia hết
    while (jumps > 0) {
        jumps--; // Mỗi lần lặp giảm số lần nhảy dài đi 1
        remaining += longJump; // Tăng khoảng cách còn lại lên một lượng bằng nhảy dài
        
        // Kiểm tra xem khoảng cách còn lại mới có thể chia hết cho nhảy ngắn không
        if (remaining % shortJump == 0) {
            // Nếu có => Suy ra được kết quả là số lần nhảy dài còn lại + số lần nhảy ngắn cần thiết
            jumps += (remaining / shortJump);
            cout << jumps << endl;
            return;
        }
    }

    cout << -1 << endl;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();
    
    return(0);
}