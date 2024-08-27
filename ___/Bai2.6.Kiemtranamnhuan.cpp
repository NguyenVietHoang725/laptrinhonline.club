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
    
    ll n;
    cin >> n;

    if (n <= 0) 
        cout << "INVALID";
    else {
        if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
            cout << "YES";
        else 
            cout << "NO";
    }
    
    return(0);
}