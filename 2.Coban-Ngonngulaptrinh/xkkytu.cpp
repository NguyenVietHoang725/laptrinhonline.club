/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên chứa một số nguyên t là số lượng testcase (1 ≤ t ≤ 100).
    + Mỗi testcase gồm hai dòng: 
      - Dòng thứ nhất là một số nguyên k (1 ≤ k ≤ 100).
      - Dòng thứ hai là chuỗi ký tự S có độ dài tối đa 1000.
- Output:
    + Với mỗi testcase, in ra chuỗi S nhưng mỗi ký tự trong chuỗi được lặp lại k lần liên tiếp.

<-- Phân tích đề bài -->
- Ta có số nguyên k và chuỗi S. Để tạo chuỗi mới, với mỗi ký tự trong S, ta lặp lại ký tự đó k lần.
- Ta cần xử lý t bộ testcase, mỗi testcase đều có một số k và chuỗi S.

<-- Xác định hướng giải -->
1. Đọc vào số lượng testcase t.
2. Với mỗi testcase:
    - Đọc giá trị k.
    - Đọc chuỗi S.
    - Với mỗi ký tự trong chuỗi S, in ra ký tự đó k lần.
3. In kết quả của mỗi testcase trên một dòng riêng biệt.
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
    
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cin.ignore();
        string s;
        cin >> s;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                cout << s[i];
            }
        }
        cout << "\n";
    }
    
    return(0);
}