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
    
    int T;
    cin >> T;

    int h, m, s;
    h = T / 3600;
    m = (T - (h * 3600)) / 60;
    s = T - (h * 3600) - (m * 60);
    cout << h << ":" << m << ":" << s;
    
    return(0);
}