/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên chứa hai số nguyên q và e:
        - q: Số văn phòng Gabriel đã làm việc trong tuần trước (1 ≤ q ≤ 1000).
        - e: Số văn phòng Gabriel đã tìm kiếm chìa khóa trước đó (1 ≤ e ≤ q).
    + Dòng thứ hai chứa e số nguyên Si (1 ≤ Si ≤ 1000) là mã nhận dạng của các văn phòng mà Gabriel đã tìm kiếm.
    + Dòng thứ ba chứa q số nguyên Ci (1 ≤ Ci ≤ 1000) là mã nhận dạng của các văn phòng mà Gabriel đã làm việc trong tuần trước.
    
- Output:
    + Với mỗi văn phòng trong danh sách các văn phòng Gabriel đã làm việc, in ra:
        - "0" nếu văn phòng đó đã được tìm kiếm trước đó.
        - "1" nếu văn phòng đó chưa được tìm kiếm.

<-- Phân tích đề bài -->
- Gabriel cần tìm những văn phòng mà anh chưa vào tìm chìa khóa, dựa trên danh sách các văn phòng mà anh đã làm việc trong tuần trước.
- Chúng ta có hai tập hợp: 
    1. Một tập hợp các văn phòng mà Gabriel đã tìm kiếm trước đó.
    2. Một tập hợp các văn phòng mà anh đã làm việc trong tuần.
- Nhiệm vụ là kiểm tra từng văn phòng trong danh sách thứ hai xem có nằm trong danh sách đã tìm kiếm không.

<-- Xác định hướng giải -->
- Sử dụng `unordered_set` để lưu trữ mã văn phòng đã được tìm kiếm trước đó (vì việc tra cứu trong `unordered_set` có độ phức tạp O(1)).
- Sau đó, duyệt qua các mã văn phòng trong danh sách các văn phòng Gabriel đã làm việc trong tuần trước và kiểm tra:
    + Nếu văn phòng đã được tìm kiếm trước đó (có trong `unordered_set`), in "0".
    + Nếu chưa tìm kiếm (không có trong `unordered_set`), in "1".
*/

#include <iostream>
#include <unordered_set>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int q, e;
    cin >> q >> e; 

    int s[e], c[q];

    unordered_set<int> S;
    for (int i = 0; i < e; i++) {
        cin >> s[i];
        S.insert(s[i]);
    }

    for (int i = 0; i < q; i++) {
        cin >> c[i];

        if (S.find(c[i]) != S.end()) {
            cout << "0" << endl;
        } else {
            cout << "1" << endl;
        }
    }
  
    return(0);
}