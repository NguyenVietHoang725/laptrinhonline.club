/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên chứa một số nguyên n (1 <= n <= 10^6) - số lượng phần tử của dãy số.
    + Dòng thứ hai chứa n số nguyên a1, a2, ..., an (1 <= ai <= 9x10^9) - các phần tử của dãy số.
- Output:
    + Liệt kê các phần tử trong dãy số lớn hơn tất cả các số đứng trước nó, cách nhau bởi dấu cách.
    + Nếu không có phần tử nào thỏa mãn yêu cầu, in ra -1.

<-- Phân tích đề bài -->
- Đề bài yêu cầu liệt kê các phần tử trong dãy số sao cho mỗi phần tử phải lớn hơn tất cả các số đứng trước nó trong dãy. 
- Nếu không có phần tử nào thỏa mãn điều kiện trên, cần in ra -1.

<-- Xác định hướng giải -->
1. Đọc số lượng phần tử n từ đầu vào.
2. Đọc dãy số gồm n phần tử vào một mảng.
3. Dùng một biến để theo dõi giá trị lớn nhất hiện tại đã gặp trong dãy số (initially là -1).
4. Duyệt qua từng phần tử trong dãy:
    - Nếu phần tử hiện tại lớn hơn giá trị lớn nhất đã gặp, in phần tử đó và cập nhật giá trị lớn nhất.
5. Nếu không có phần tử nào thỏa mãn yêu cầu, in ra -1.

- Chú ý: Do số lượng phần tử n có thể lên tới 10^6, cần tối ưu về mặt hiệu suất. Sử dụng các kỹ thuật tối ưu hóa I/O để đảm bảo chương trình chạy nhanh.
*/

#include <iostream>


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
    ll *a = new ll[n];
    ll break_num = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > break_num) {
            cout << a[i] << " ";
            break_num = a[i];
        }
    }
    
    return(0);
}