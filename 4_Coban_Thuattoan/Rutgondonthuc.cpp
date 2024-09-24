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
    
    map<char, int> mp;
    char bien;
    while (cin >> bien) {
        if (mp[bien] != 0) {
            mp[bien] += 1;
        } else {
            mp[bien] = 1;
        }
    }

    for (const auto& pair : mp) {
        cout << "(" << pair.first << "^" << pair.second << ")";
    }
    
    return(0);
}