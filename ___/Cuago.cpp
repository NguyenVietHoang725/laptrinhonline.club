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
    
    ll L, l;
    cin >> L >> l;
    
    ll sawNum = 0;
    
    if (L % l != 0) {
        sawNum = L % l + 1;
    }

    ll result = sawNum + ((L / l) - 1) * (l + 1);
    cout << result;
    
    return(0);
}