/*
<-- Input/Output -->
- Input:
    + Hai số nguyên dương a và b.
    + Kết thúc khi cả a và b đều bằng 0.
- Output:
    + In ra ước chung lớn nhất (UCLN) của a và b.
    + In ra bội chung nhỏ nhất (BCNN) của a và b.

<-- Phân tích đề bài -->
- Bài toán yêu cầu tính UCLN và BCNN của hai số nguyên dương a và b. 
- Nếu cả a và b đều bằng 0 thì chương trình dừng lại.
- UCLN được tính bằng thuật toán Euclid.
- BCNN được tính bằng công thức: BCNN(a, b) = (a * b) / UCLN(a, b).

<-- Xác định hướng giải -->
1. Đọc vào hai số a và b.
2. Sử dụng hàm gcd để tính UCLN.
3. Sử dụng hàm lcm (dựa vào UCLN) để tính BCNN.
4. In ra UCLN và BCNN.
5. Lặp lại cho đến khi cả a và b đều bằng 0.
*/

#include <iostream>

using namespace std;

#define __Hairy_Nguyen__ signed main() 
#define ll long long                  
#define endl '\n'                      

ll gcd(ll a, ll b) {                    
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(ll a, ll b) {                   
    return (a * b) / gcd(a, b);
}

__Hairy_Nguyen__ {                      
    ios_base::sync_with_stdio(0);    
    cin.tie(0);                         
    cout.tie(0);

    ll a = 1, b = 1;                   
    while (a != 0 && b != 0) {         
        cin >> a >> b;                  
        if (a == 0 && b == 0) break;    
        ll ucln = gcd(a, b);            
        ll bcnn = lcm(a, b);            
        cout << ucln << " " << bcnn << endl; 
    }

    return(0);
}
