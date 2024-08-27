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
#include <algorithm>
#include <string>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string num;
    cin >> num;
    
    string _num = num;

    reverse(_num.begin(), _num.end());

    if (num == _num)
        cout << "YES";
    else 
        cout << "NO";
    
    return(0);
}