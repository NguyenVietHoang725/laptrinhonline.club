#include <iostream>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

void nhapVector(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void xuatVector(const int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int m;
    cin >> m;
    
    int* a = new int[m]; nhapVector(a, m);
    int* b = new int[m]; nhapVector(b, m);

    int* res = new int[m];
    for (int i = 0; i < m; i++) {
        res[i] = a[i] + b[i];
    }

    xuatVector(res, m);

    delete[] a;
    delete[] b;
    delete[] res;

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