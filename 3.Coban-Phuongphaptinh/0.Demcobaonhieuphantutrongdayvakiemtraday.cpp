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
    
    int c, d;
    cin >> c >> d;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= -c && a[i] <= d) dem++;
    }
    cout << dem << endl;
    
    int kt = 0;
    for (int i = 0; i < n-1; i++) {
        if (a[i] >= a[i+1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    
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