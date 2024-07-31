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


using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

const long long MOD = 1000000007;

long long mulmod(long long a, long long b, long long m) {
    long long res = 0;
    a %= m;
    while (b > 0) {
        if (b & 1)
            res = (res + a) % m;
        a = (a * 2) % m;
        b >>= 1;
    }
    return res;
}

long long solve(long long n) {
    return mulmod(n, n, MOD);
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        cout << solve(N) << endl;
    }
    
    return(0);
}