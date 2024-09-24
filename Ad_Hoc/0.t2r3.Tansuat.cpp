/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên chứa số nguyên N (số lượng phần tử của dãy).
    + Dòng tiếp theo chứa N số nguyên dương X (1 ≤ X ≤ 2000), mỗi số xuất hiện không quá 20 lần.

- Output:
    + In ra các giá trị của dãy theo thứ tự tăng dần và số lần xuất hiện tương ứng của mỗi giá trị.

<-- Phân tích đề bài -->
- Chúng ta cần đếm tần suất xuất hiện của các số trong dãy và in ra theo thứ tự tăng dần của các giá trị.
- Sử dụng cấu trúc dữ liệu phù hợp để vừa lưu trữ tần suất vừa giữ thứ tự tăng dần của các số là mục tiêu chính.

<-- Xác định hướng giải -->
- Đọc N số vào một map (cấu trúc dữ liệu map trong C++ sẽ lưu trữ các cặp giá trị và số lần xuất hiện).
- Map tự động sắp xếp các phần tử theo thứ tự tăng dần của khóa, do đó không cần sắp xếp thêm.
- Sau đó, duyệt qua từng phần tử của map và in ra giá trị cùng số lần xuất hiện.

*/

#include <iostream>
#include <map>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    map<int, int> mp;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x]++;
    }

    for (auto x : mp) {
        cout << x.first << " xuat hien " << x.second << " lan\n";
    }
    
    return(0);
}