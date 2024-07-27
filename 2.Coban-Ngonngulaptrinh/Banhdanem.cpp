#include <iostream>
#include <cmath>

#define hairy main

using namespace std;

int hairy() {
    int n, i;
    cin >> n;

    if (n >= 1 && n <= 9) {
        cout << 1;
    } else if (n > 9) {
        i = n / 9;
        if (n - 9 * i == 0) {
            cout << i;
        } else if (n - 9 * i >= 1 && n - 9 * i < 9) {
            cout << i + 1;
        }
    }
        
    return 0;
}
/*
HƯỚNG GIẢI: 
- Input: n là số bánh đa nem cần rán (kiểu nguyên) (1 <= n <= 10000)
- Output: Số lần rán bánh đa nem tối thiểu (kiểu nguyên)
- Lưu ý: Mỗi lần rán chỉ rán được từ 1-9 chiếc bánh đa nem một lúc.
- Xác định các trường hợp có thể xảy ra: 
    + Nếu số bánh đa nem cần rán nằm trong đoạn [1, 9] => Số lần rán là 1.
    + Nếu số bánh đa nem cần rán lớn hơn 9:
        * Nếu chia hết cho 9 => Số lần rán bằng (n / 9).
        * Nếu không chia hết cho 9 => Số lần rán bằng (n / 9 + 1).
*/