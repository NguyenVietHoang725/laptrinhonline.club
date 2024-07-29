#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

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
    
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Sắp xếp mảng
    sort(a.begin(), a.end());
    
    // Tính toán độ chênh lệch lớn nhất
    ll max_diff = 0;
    for (int i = 1; i < n; i++) {
        ll diff = abs(a[i] + a[i - 1]);
        if (diff > max_diff) {
            max_diff = diff;
        }
    }
    
    cout << max_diff << endl;
    
    return(0);
}

/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên ghi một số nguyên n (2 <= <= 200000) - số phần tử trong dãy
    + Dòng thứ hai ghi n số nguyên a1, a2, ..., an (|ai| <= 10^9)
- Output:
    + In ra số nguyên duy nhất là giá trị |ai + aj| lớn nhất tìm được.

<-- Phân tích đề bài -->
- Cho dãy số a1, a2, a3, ..., an. Tìm hai chỉ số i và j sao cho:   
    + i < j
    + |ai + aj| lớn nhất
<-- Xác định hướng giải -->

*/