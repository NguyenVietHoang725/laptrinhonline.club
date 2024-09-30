/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên chứa số nguyên dương n (1 < n <= 10^5): số lượng phần tử của dãy.
    + Dòng thứ hai chứa n số nguyên dương có giá trị không vượt quá 10^5: các giá trị của dãy số a.
- Output:
    + In ra độ dài lớn nhất của dãy con có thể chọn sao cho mọi bộ ba phần tử bất kỳ đều có thể tạo thành ba cạnh của một tam giác.
    + Nếu không thể chọn được ít nhất 3 phần tử, in ra "Khong the tao ra day thoa man".

<-- Phân tích đề bài -->
- Để một bộ ba số tạo thành tam giác, ba số đó phải thỏa mãn bất đẳng thức tam giác: tổng của hai cạnh bất kỳ phải lớn hơn cạnh còn lại.
- Bài toán yêu cầu tìm số phần tử lớn nhất trong dãy thoả mãn điều kiện trên. Nếu không thể tìm được ít nhất 3 phần tử, ta in ra thông báo "Khong the tao ra day thoa man".

<-- Xác định hướng giải -->
- Đọc vào dãy a có n phần tử.
- Sắp xếp dãy a theo thứ tự giảm dần. Điều này giúp ta dễ dàng kiểm tra điều kiện bất đẳng thức tam giác.
- Sử dụng một deque để lưu các phần tử của dãy đang xét. Duyệt qua dãy đã sắp xếp và với mỗi phần tử, kiểm tra xem có thể giữ lại trong deque sao cho tất cả các phần tử trong deque thoả mãn bất đẳng thức tam giác.
- Nếu độ dài deque (số phần tử thoả mãn) lớn hơn hoặc bằng 3, cập nhật kết quả.
- Nếu kết quả nhỏ hơn 3, in ra "Khong the tao ra day thoa man", ngược lại in ra độ dài dãy lớn nhất.
*/


#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, res = 0;
    cin >> n;

    int a[n];

    for (auto &x:a) cin >> x;

    sort(a, a+n, greater<int>());

    deque<int> q;
    for (auto x:a) {
        while (q.size() > 1 && q.front() >= (q.back() + x)) {
            q.pop_front();
        }

        q.push_back(x);
        if (res < q.size()) 
            res = q.size();
    }
    if (res < 3) cout << "Khong the tao ra day thoa man";
    else cout << res;
    
    return(0);
}