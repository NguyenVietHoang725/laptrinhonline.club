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

typedef struct {
    int x, y;
} Diem;

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int r, n;
    cin >> r >> n;

    double max = -1;
    bool check = false;
    int index;
    Diem *a = new Diem[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
        if (pow(a[i].x, 2) + pow(a[i].y, 2) <= r*r) {
            double kc = sqrt(pow(a[i].x, 2) + pow(a[i].y, 2));
            if (max < kc) {
                max = kc;  
                index = i;
            }
            check = true;         
        }
    }

    if (check) {
        cout << a[index].x << " " << a[index].y;
    } else {
        cout << 0;
    }
    
    return(0);
}