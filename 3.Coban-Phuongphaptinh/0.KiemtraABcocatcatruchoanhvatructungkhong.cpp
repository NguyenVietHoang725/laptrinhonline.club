#include <iostream>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    float xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;

    if (xa * xb <= 0 && ya * yb <= 0) 
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}

/*
<-- Input/Output -->

<-- Phân tích đề bài -->

<-- Xác định hướng giải -->

*/