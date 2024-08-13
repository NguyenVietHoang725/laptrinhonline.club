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
#include <string>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string a, b;

    while (cin >> a >> b) {
        if (a.find(b) != string::npos) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    
    return(0);
}