#include <iostream>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n, cnt;
    cin >> n;
    
    for (ll i = 2; i <= n; i++) {
        cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        
        if (cnt >= 1)
            cout << endl << i << " " << cnt;
    }
    
    return(0);
}

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