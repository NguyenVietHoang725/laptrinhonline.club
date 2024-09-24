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
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    cin >> str;
    int length = str.length();
    int mid = length / 2;

    string first_half = str.substr(0, mid);
    string second_half;

    if (length % 2 == 0) {
        second_half = str.substr(mid, length - mid);
    } else {
        second_half = str.substr(mid + 1, length - mid - 1);  
    }

    reverse(second_half.begin(), second_half.end());

    if (first_half == second_half) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return(0);
}