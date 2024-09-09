#include <iostream>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ull unsigned long long
#define endl '\n'

// Hàm tính (base^exp) % mod sử dụng lũy thừa nhanh
ull modularExponentiation(ull base, ull exp, ull mod) {
    ull result = 1;
    base = base % mod;  // Đảm bảo base nhỏ hơn mod

    while (exp > 0) {
        // Nếu exp là số lẻ, nhân base với result
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        // exp là số chẵn, giảm exp đi một nửa và tính base^2
        exp = exp >> 1;  // exp = exp / 2
        base = (base * base) % mod;
    }

    return result;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ull n, m;
    cin >> n >> m;

    // Tìm chữ số cuối cùng của n^m
    ull last_digit = modularExponentiation(n, m, 10);
    cout << last_digit << endl;

    return 0;
}
