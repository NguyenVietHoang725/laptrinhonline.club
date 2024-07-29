#include <iostream>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    int a[n];
    int sum = 0, max = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            sum += 1;
        } else {
            if (sum > max) {
                max = sum;
            }
            sum = 0;
        }
    }

    if (sum > max) {
        max = sum;
    }
    
    cout << max;
    
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