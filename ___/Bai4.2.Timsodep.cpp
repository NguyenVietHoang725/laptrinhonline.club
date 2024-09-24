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
#include <cstring>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    getline(cin, s);

    int n = s.length();
    int cntC = 0, cntL = 0;
    bool check = true;

    for (int i = 0; i < n; i++) {
        int num = s[i] - '0';

        if (num % 2 == 0) {
            cntC++;
        } else {
            cntL++;
        }

        if (cntC > (n / 2) || cntL > (n / 2)) {
            check = false;
            break;
        }
    }

    if (check) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return(0);
}