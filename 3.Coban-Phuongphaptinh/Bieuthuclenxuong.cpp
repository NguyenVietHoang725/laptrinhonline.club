#include <iostream>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    ll sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) sum -= i;
        else sum += i;
    }

    cout << sum;

    return 0;
}

/*
<-- Input/Output -->

<-- Phân tích đề bài -->

<-- Xác định hướng giải -->

*/