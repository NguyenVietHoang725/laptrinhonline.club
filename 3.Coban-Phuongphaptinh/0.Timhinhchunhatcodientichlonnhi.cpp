#include <iostream>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

typedef struct {
    int dai;
    int rong;
    int s;
} HCN;

void Sort(HCN a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {   
            HCN temp = a[i];
            if (a[i].s > a[j].s) {
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    HCN a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].dai >> a[i].rong;
        a[i].s = a[i].dai * a[i].rong;
    }

    Sort (a, n);
    
    if (n >= 2) {
        int max = a[n-1].s, dem = 0, index;
        for (int i = 0; i < n-1; i++) {
            if (a[i+1].s > a[i].s && a[i+1].s != max) {
                index = i+1;    
                dem++;
            }
        }
        
        if (dem == 0) {
            cout << "NO";
        } else {
            cout << a[index].dai << " " << a[index].rong;
        }
    } else {
        cout << "NO";
    }

    return 0;
}

/*
<-- Input/Output -->

<-- Phân tích đề bài -->

<-- Xác định hướng giải -->

*/