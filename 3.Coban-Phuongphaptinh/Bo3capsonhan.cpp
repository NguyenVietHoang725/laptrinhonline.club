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
#include <vector>
#include <unordered_map>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

ll countGeometricTriplets(vector<int>& A, int r) {
    int n = A.size();
    unordered_map<ll, ll> left, right;
    
    // Count occurrences of each element
    for (int num : A) {
        right[num]++;
    }
    
    ll result = 0;
    
    for (int i = 0; i < n; i++) {
        right[A[i]]--;
        
        if (A[i] % r == 0) {
            ll prev = A[i] / r;
            ll next = (ll)A[i] * r;
            
            result += left[prev] * right[next];
        }
        
        left[A[i]]++;
    }
    
    return result;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N, r;
    cin >> N >> r;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    cout << countGeometricTriplets(A, r) << endl;

    return(0);
}