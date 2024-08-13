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
    cin >> n; // số lần tung chiêu
    int a[n];
    int res = 0; // số lốc tung ra
    int stack = 0; // số tụ bão đang lưu trữ
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            stack += 1;
        } 
        if (a[i] == 0 && stack == 1) {
            stack -= 1;
        }
        if (stack == 2 && i != n - 1) {
            res += 1;
            stack = 0;
            i += 1;
        }
    }

    cout << res;
    return 0;
    
    return(0);
}