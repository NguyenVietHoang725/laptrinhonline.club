/*
<-- Input/Output -->
- Input:
    + 
    + 
- Output:
    + 
    + 

<-- Phân tích đề bài -->
- Alice có a tiền xu
- Barbara có b tiền xu
- Cerene có c tiền xu
- Polycarp trở về có n xu và muốn phân phát cho 3 người
- Sau khi phân phát số tiền xu của 3 người bằng nhau

<-- Xác định hướng giải -->
- Cộng tất cả số tiền xu và kiểm tra chia hết cho 3
*/

#include <iostream>
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    ll sum = a + b + c + n;
    if (sum % 3 == 0) {
        int x = sum / 3;
        if (x >= max({a, b, c})) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
    
    return(0);
}