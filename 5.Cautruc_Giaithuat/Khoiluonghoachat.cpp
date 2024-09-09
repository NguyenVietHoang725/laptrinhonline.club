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
#include <stack>
#include <string>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    cin.ignore();

    while (t--) {
        string ct; getline(cin, ct);
        stack<int> s;
        for (int i = 0; i < ct.size(); i++) {
            if (ct[i] == '(') s.push(0); // Day so 0 vao trong stack -> Bat dau 1 nhom
            else if (ct[i] == 'C') s.push(12); // Cacbon: 12
            else if (ct[i] == 'H') s.push(1); // Hidro: 1
            else if (ct[i] == 'O') s.push(16); // Oxi: 16

            else if (ct[i] == ')') {
                int sum = 0;
                // Cong don cac gia tri khac 0
                while (!s.empty() && s.top() != 0) {
                    sum += s.top();
                    s.pop(); // Cong xong pop gia tri ra ngoai
                }
                s.pop(); // pop so 0
                s.push(sum); // day tong vua cong vao
            } 
            // Neu la chu so -> nhan vao dinh cua stack
            else if (isdigit(ct[i])) {
                int top = s.top();
                s.pop();
                int count = ct[i] - '0'; 
                s.push(top * count);
            }
        }
        int total_sum = 0;
        while (!s.empty()) {
            total_sum += s.top();
            s.pop();
        }
        
        cout << total_sum << endl;
    }
    
    return(0);
}