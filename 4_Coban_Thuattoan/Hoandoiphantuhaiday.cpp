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
    
    int n;
    cin >> n;

    int *a = new int[n];
    int *b = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            int temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
    }

    int sumA = 0, sumB = 0;
    for (int i = 0; i < n; i++) {
        sumA += a[i];
        sumB += b[i];
    }

    int res = abs(sumA - sumB);
    cout << res;

    return(0);
}