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
#include <map>

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
    
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    
    int res = mp[4] + mp[3] + mp[2] / 2;
    mp[1] -= mp[3];
    
    if (mp[2] % 2 != 0){
        res += 1;
        mp[1] -= 2;
    }
    
    if (mp[1] > 0){
        res += (mp[1] + 3) / 4;
    }
    
    cout << res;
    
    return(0);
}