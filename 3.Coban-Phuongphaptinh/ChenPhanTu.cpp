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
    
    int n; cin >> n; // số phần tử của mảng
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int k; cin >> k; // vị trí chèn
    int x; cin >> x; // giá trị của số cần chèn
    int b[n + 1];
    for (int i = 0; i < k; i++) b[i] = a[i];
    b[k] = x;
    for (int i = k + 1; i < n + 1; i++) b[i] = a[i - 1];
    for (int i = 0; i <= n; i++) cout << b[i] << " ";
    
    return(0);
}