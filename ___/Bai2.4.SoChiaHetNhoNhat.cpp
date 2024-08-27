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
    ll a, b;
    cin >> a >> b;
    if (a % b == 0) cout << a;
    else {
        int thuong = a / b;
        cout << b * (thuong + 1);
    }
    
    
    return(0);
}