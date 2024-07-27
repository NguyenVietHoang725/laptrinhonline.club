#include <iostream>
#include <cmath>
using namespace std;

#define hairy main
#define ll long long

bool solve() {
    ll a, b; cin >> a >> b;
    ll x = round(pow(a*b, 1.0/3));

    return (x*x*x == a*b && a%x == 0 && b%x == 0);
}

int hairy() {
    int n; cin >> n;
    while (n--) {
        if (solve()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
/*
- Input: 
    + Số nguyên dương n là số lượng cặp điểm (1 <= n <= 10^5).
    + n dòng tiếp theo là các cặp điểm A, B (1 <= A, B <= 5*10^8).
- Output: n dòng xâu kí tự (Yes/No).

- Phân tích bài toán: 
    + Số điểm ban đầu: 1.
    + Mỗi vòng đấu: 
        * Thắng => nhân thêm số điểm X^2.
        * Thua => nhân thêm số điểm X.
    + Sau mỗi round: 
        * Tổng điểm của hai người = (a * b) = X^3.
        => X = căn bậc ba của (a * b)
        => Để giải bài toán thì kiểm tra điều kiện: X^3 == (a * b) và a, b có chia hết cho X không?
*/