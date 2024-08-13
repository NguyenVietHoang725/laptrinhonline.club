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
#include <algorithm>

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

    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;

        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        int s1new = stoi(s1);
        int s2new = stoi(s2);

        int sum = s1new + s2new;
        string res = to_string(sum);
        reverse(res.begin(), res.end());
        int resnew = stoi(res);

        cout << resnew << endl;
    }
    
    return(0);
}