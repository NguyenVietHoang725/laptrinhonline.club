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

    int a[n], demChan = 0, demLe= 0;
    long long tongChan = 0, tongLe= 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            ++demChan;
            tongChan += a[i];
        } else {
            ++demLe;
            tongLe += a[i];
        }
    }

    if (demLe != 0) {
        cout << tongLe / demLe << endl;
    } else {
        cout << 0 << endl;
    }

    if (demChan != 0) {
        cout << tongChan / demChan << endl;
    } else {
        cout << 0 << endl;
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