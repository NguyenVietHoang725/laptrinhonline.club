#include <iostream>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

void Nhapmatran(int a[][100], int m, int n) {   
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int m, n, p;
    cin >> m >> n >> p;
    
    int ar[100][100];
    int br[100][100];
    Nhapmatran(ar, m, n);
    Nhapmatran(br, n, p);

    int cr[100][100] = {0};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                cr[i][j] += ar[i][k] * br[k][j];
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << cr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
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