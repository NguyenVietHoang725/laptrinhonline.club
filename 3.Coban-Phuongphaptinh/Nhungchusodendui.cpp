/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên gồm 2 số nguyên N và K với (1 <= N <= 10000) và (1 <= K <= 10)
    + Dòng tiếp theo là K chữ số mà Vincent ghép Di (0 <= Di <= 9)
- Output:
    + In ra số tiền cần trả

<-- Phân tích đề bài -->


<-- Xác định hướng giải -->

*/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

ll findNextValidNumber(ll N, const unordered_set<int>& unluckyDigits) {
    while (true) {
        ll temp = N;
        bool valid = true;
        while (temp > 0) {
            int digit = temp % 10;
            if (unluckyDigits.find(digit) != unluckyDigits.end()) {
                valid = false;
                break;
            }
            temp /= 10;
        }
        if (valid) return N;
        N++;
    }
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll N;
    int K;
    cin >> N >> K;

    unordered_set<int> unluckyDigits;
    for (int i = 0; i < K; i++) {
        int digit;
        cin >> digit;
        unluckyDigits.insert(digit);
    }

    ll result = findNextValidNumber(N, unluckyDigits);
    cout << result << endl;
    
    return(0);
}