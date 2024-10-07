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
#include <deque>
#include <utility>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    deque<pair<int, int>> dq;
    int n, k, x;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> x;
        while (dq.size() && dq.back().second <= x) dq.pop_back();
        dq.push_back({i, x});
        if (i >= k) {
            while (i - dq.front().first >= k) dq.pop_front();
            cout << dq.front().second << " ";
        }
    }
    
    return(0);
}