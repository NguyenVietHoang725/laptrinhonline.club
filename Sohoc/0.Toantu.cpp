/*
<-- Input/Output -->
- Input:
    + 
    + 
- Output:
    + 
    + 

<-- Phân tích đề bài -->


<-- Xác định hướng giải -->

*/

#include <iostream>


using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll a, b;
    cin >> a >> b;

    ll tong = a + b;
    ll hieu = a - b;
    ll tich = a * b;
    ll thuong = a / b;
    ll du = a % b;

    cout << a << "+" << b << "=" << tong << endl;
    cout << a << "-" << b << "=" << hieu << endl;
    cout << a << "*" << b << "=" << tich << endl;
    cout << a << "/" << b << "=" << thuong << endl;
    cout << a << "%" << b << "=" << du << endl;
    
    return(0);
}