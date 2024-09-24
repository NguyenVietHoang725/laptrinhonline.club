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
    
    int n;
    cin >> n;

    ll *a = new ll[n];
    cin >> a[0];
    ll min = a[0], max = a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] < min) 
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == min || a[i] == max) 
            cnt++;
    }

    cout << cnt;
    
    return(0);
}