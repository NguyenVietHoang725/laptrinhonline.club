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
    
    int n;
    cin >> n;
    cin.ignore();

    string *a = new string[n];
    int cntGood = 0, cntBad = 0;

    for (int i = 0; i < n; i++) {
        char c;
        c = cin.get();

        if (c == '+') {
            cntGood++;
        } else {
            cntBad++;
        }

        cin.ignore();
        getline(cin, a[i]);
    }

    cout << "Tong so tre ngoan: " << cntGood << " | Tong so tre hu: " << cntBad << endl;

    sort(a, a+n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return(0);
}