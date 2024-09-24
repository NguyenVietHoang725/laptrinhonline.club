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
#include <set>

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
    set<int> s;
    map<int, int> a;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        a[temp] += 1;
        s.insert(temp);
    }

    int m;
    cin >> m;
    map<int, int> b;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        b[temp] += 1;
        s.insert(temp);
    }

    for (int key : s) {
        int countA = a[key];  
        int countB = b[key];  

        if (countA != countB) {
            cout << key << " ";
        }
    }
    
    return(0);
}