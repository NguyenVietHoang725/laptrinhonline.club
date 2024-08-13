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
#include <cmath>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll a, b, m;
    cin >> a >> m >> b;

    ll am = abs(m - a);
    ll bm = abs(m - b);

    if (am < bm) cout << "CAT_A";
    else if (am > bm) cout << "CAT_B";
    else cout << "The mouse has escaped";
    
    return(0);
}