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

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int b[n];
    int start = 0, end = n-1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            b[start] = a[i];
            start++;
        } else {
            b[end] = a[i]; 
            end--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
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