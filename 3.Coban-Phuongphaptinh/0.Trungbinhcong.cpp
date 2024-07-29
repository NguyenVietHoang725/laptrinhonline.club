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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int nho = 0;
    int tong = 0;
    int TBC = 0;

    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }

    TBC = tong / n;
    cout << TBC << " ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] < TBC) nho++;
    }
    cout << nho;
    
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