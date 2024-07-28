#include <iostream>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

ll removeZero(ll a) {
    ll new_num = 0;
    ll times = 1;

    while (a > 0) {
        ll num = a % 10;
        if (num != 0) {
            new_num += num * times;
            times *= 10;
        }
        a /= 10;
    }

    return new_num;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll a, b;
    cin >> a >> b;
    ll sum = a + b;

    ll new_a = removeZero(a);
    ll new_b = removeZero(b);
    ll new_sum = removeZero(sum);
    if (new_a + new_b == new_sum) cout << "YES";
    else cout << "NO";
    
    return(0);
}

/*
<-- Input/Output -->
- Input:
    + Gồm 1 dòng, lần lượt chứa 2 số nguyên a và b cách nhau bởi dấu "cách" (1 <= a, b <= 10^9).
- Output:
    + In ra "YES", nếu sau khi xóa các số 0 mà kết quả phép tính vẫn đúng, in ra "NO" trong trường hợp ngược lại.

<-- Phân tích đề bài -->
- Kiểm tra xem tổng hai số ban đầu sau khi xoá đi các số 0 còn đúng hay không.

<-- Xác định hướng giải -->
- Tạo hàm xử lý việc xoá số 0 trong 2 số ban đầu và tổng ban đầu 
(Ở đây sử dụng cách chia lấy dư và kiểm tra xem só dư có bằng 0 hay không)
- Kiểm tra phép tính tổng sau khi xoá số 0 có đúng hay không.
*/